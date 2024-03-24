#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Employee {
protected:
    string name;
    int id;
public:
    Employee(const string& name, int id) : name(name), id(id) {}
    virtual void printInfo() const {
        cout << "Name: " << name << ", ID: " << id;
    }
    virtual ~Employee() {}
};

class Manager : public Employee {
private:
    int accessLevel;
public:
    Manager(const string& name, int id, int accessLevel) : Employee(name, id), accessLevel(accessLevel) {}
    void printInfo() const override {
        Employee::printInfo();
        cout << ", Access Level: " << accessLevel;
    }
};

class Developer : public Employee {
private:
    string programmingLanguage;
public:
    Developer(const string& name, int id, const string& programmingLanguage) : Employee(name, id), programmingLanguage(programmingLanguage) {}
    void printInfo() const override {
        Employee::printInfo();
        cout << ", Programming Language: " << programmingLanguage;
    }
};

class HR : public Employee {
public:
    HR(const string& name, int id) : Employee(name, id) {}
};

class HRDepartment {
private:
    vector<Employee*> employees;
public:
    void addEmployee(Employee* emp) {
        employees.push_back(emp);
    }
    void removeEmployee(int id) {
        for (auto it = employees.begin(); it != employees.end(); ++it) {
            if ((*it)->id == id) {
                delete *it;
                employees.erase(it);
                break;
            }
        }
    }
    void printEmployees() const {
        for (const auto& emp : employees) {
            emp->printInfo();
            cout << endl;
        }
    }
    ~HRDepartment() {
        for (auto emp : employees) {
            delete emp;
        }
    }
};

int main() {
    HRDepartment hrDept;

    hrDept.addEmployee(new Manager("John Doe", 101, 5));
    hrDept.addEmployee(new Developer("Alice Smith", 102, "C++"));
    hrDept.addEmployee(new HR("Bob Johnson", 103));

    cout << "Employees in HR Department:" << endl;
    hrDept.printEmployees();

    // Removing an employee
    hrDept.removeEmployee(102);

    cout << "\nAfter removing Alice Smith:" << endl;
    hrDept.printEmployees();

    return 0;
}
