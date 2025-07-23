#include<iostream>
using namespace std;
class Book{
    private:
        int isbn;
        int copiesAvailable;
    public:
        string title;
        string author;
    Book(int i,int c,string t,string a)
    {
        isbn = i;
        copiesAvailable =c;
        title=t;
        author=a;
    }        
    void issueBook()
    {
        copiesAvailable--;
        cout<<"Remaining copies: "<<copiesAvailable<<endl;
    }
    void addcopies(int n)
    {
        copiesAvailable+=n;
        cout<<"no of copies present: "<<copiesAvailable<<endl;
    }
};
int main()
{
     Book b(2341,300,"wings of fire","abdul Kalam");
     b.issueBook();
     b.addcopies(20);
}