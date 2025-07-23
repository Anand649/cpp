#include<iostream>
using namespace std;
class Employee{
    private:
        double salary;
        int empID;
    public:
        string name;
        string department;
    Employee(double sal,int id,string na,string dep)
    {
        salary=sal;
        empID=id;
        name=na;
        department=dep;
    } 
    void setSalary(double sal)
    {
        salary = sal;
        cout<<"Updated salary is: "<<sal<<endl;
    }       
    int getSalary()
    {
        return salary;
    }
    void displayDetails()
    {
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Emp id: "<<empID<<endl;
        cout<<"Department: "<<department<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
int main()
{
    Employee a(25000.00,21342,"anand","development");
    a.setSalary(28000.00);
    cout<<"salary of employee: "<<a.getSalary()<<endl;
    a.displayDetails();
}