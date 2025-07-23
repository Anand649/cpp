#include<iostream>
using namespace std;
class student{
    private:
        int rollno;
        int marks;
    public:
        string name;
        string branch;
    student(int a,int b,string c,string d)
    {
        rollno = a;
        marks = b;
        name = c;
        branch = d;
    }
    void set_marks(int a)
    {
        marks=a;
    }
    int get_marks()
    {
        return marks;
    }
    void details()
    {
        cout<< "Name is : "<<name<<endl;
        cout << "Branch is: "<<branch<<endl;
        cout<< "Roll no: "<<rollno<<endl;
        cout<< "marks :"<<marks<<endl;
    }
};
int main()
{
    cout<< "Enter the details of the students"<<endl;
    int rollno,marks;
    string name,branch;
    cin >> rollno >> marks >> name >> branch; //input
    student a(rollno,marks,name,branch); //construction of the class student
    a.details();
}
