#include<iostream>
using namespace std;
class Product{
    private:
        int price;
        int stock;
    public: 
        string productName;
        string category;
    Product(int p,int s,string pn,string c)
    {
        price =  p;
        stock = s;
        productName=pn;
        category=c;
    }
    void set_price(int p)
    {
        price = p;

    }   
    void set_stock(int s)
    {
        stock =s;
    }
    int get_stock()
    {
        return stock;
    }
    int get_price()
    { 
        return price;
    }     
};
int main()
{
    Product a(10,100,"soap","hygeine");
    a.set_price(200);
    cout<<"The new price is: "<<a.get_price()<<endl;
    return 0;
}