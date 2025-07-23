#include<iostream>
using namespace std;
class BankAccount{
    private:
        int balance;
        int accountNumber;
    
    public:
        string holderName;
    BankAccount(int a,int b,string c)
    {
        balance=a;
        accountNumber=b;
        holderName=c;
    }    
    void deposit(int change)
    {
        balance+=change;
        cout<< "The remaining balance is: "<<balance<<endl;
    }
    void withdraw(int change)
    {
        balance-=change;
        cout<< "The remaining balance is: "<<balance<<endl;
    }
    void checkBalance()
    {
        cout<<"The current balance is: "<<balance<<endl;
    }
};
int main()
{
    BankAccount a(2500000,2431032302,"Anand");
    a.checkBalance();
    a.deposit(1000);
    a.withdraw(5000);
}