#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    float salary;
    string designation;

public:
    void setData(string n, float s, string d)
    {
        name = n;
        salary = s;
        designation = d;
    }

    void getData()
    {
        cout << "Employee Name : " << name << endl;
        cout << "Salary        : " << salary << endl;
        cout << "Designation   : " << designation << endl;
    }
};

int main()
{
    Employee e;

    e.setData("parthrajSinh", 250000, "Manager");

    e.getData();

    return 0;
}


