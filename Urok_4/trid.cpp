#include <iostream>
using namespace std;

int mas[2][100];

int n = 8;
int sqrn = n * n;
int doska[8][8] = {};
int Dx[] = {1, 1, 2, 2, -1, -1, -2, -2};
int Dy[] = {-2, 2, -1, 1, -2, 2, -1, 1};
bool q = false;

void go(int i, int x, int y) {
    if (q) {return;}else{
        int k = -1, p, s;
        bool q1 = false;
        while ((!q1) && (k < 8)) {
            k++;
            p = x + Dx[k];
            s = y + Dy[k];
            if ((0 <= p) && (p < n) && (0 <= s) && (s < n) && (doska[p][s] == 0)) {
                doska[p][s] = i;
                mas[0][i] = p;
                mas[1][i] = s;
                if (i < sqrn) {
                    go(i + 1, p, s, q1);
                    if (!q1) doska[p][s] = 0;
                } else {
                    q1 = true;
                }
            }
        }
        q = q1;
    }
}

int main() {
    string si;
    cin >> si;

    int x, y;
    char c = 'A';
    x = si[0] - c;
    char t = '0';
    y = si[1] - t;

    mas[0][1] = x;
    mas[1][1] = y;

    doska[n - 1][0] = 1;
    go(2, x, y);

    for (int i = 0; i < n; i++) {
        cout << "mas[" << i << "]: ";
        for (int j = 0; j < 2; j++) {
            cout << mas[j][i] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << doska[i][j] << " ";
        }
        cout << endl;
    }
}
