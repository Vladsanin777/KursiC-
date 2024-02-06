#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //int p, n;
    //cin >> p >> n;
    //cout << p * n << endl;

    //int n=5;
    //int sqrn=n*n;
    //int doska[5][5]={};
    //int Dx[]={1,1,2,2,-1,-1,-2,-2};
    //int Dy[]={-2,2,-1,1,-2,2,-1,1};
    //bool q=false;


    string s;
    cin<<s;

    int x, y;

    x = s[0] - "A";
    y = s[1] - "0";

    int mas[2][100] 


    doska[n-1][0]=1;
    go(2,n-1,0,q);
    for (int i=0;i<n;i++){
        cout<<endl;
    }
    for (int j=0;j<n;j++) {
        cout<<doska[i][j]<<' ';
    }
}

int n=8;
int sqrn=n*n;
int doska[8][8]={};
int Dx[]={1,1,2,2,-1,-1,-2,-2};
int Dy[]={-2,2,-1,1,-2,2,-1,1};
bool q=false;
void go(int i,int x, int y, bool &q){
    int k=-1,p,s,ii;
    bool q1=false;
    if (q) exit;
    while ((!q1)&&(k<8)){
        k++;
        q1=false;
        p=x+Dx[k];s=y+Dy[k];
        if((0<=p)&&(p<n)&&(0<=s)&&(s<n)&&(doska[p][s]==0)) {
        doska[p][s]=i;
        if (i<sqrn) {
        // cout<<i<<" ";
        go(i+1,p,s,q1);
        if (!q1) doska[p][s]=0;
        } else {q1=true;};
        }
    }
    q=q1;
    // for (int i=0;i<n;i++){
    // cout<<endl;
    // for (int j=0;j<n;j++) cout<<doska[i][j]<<' ';
    // }
    // cin>>ii;
}
