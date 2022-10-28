#include<iostream>
using namespace std;
class Item
{
    int i;
    public :
        void display()
        {
            cout<<"Item i = "<<i<<endl;
        }
        Item()
        {
        }
        Item(int x)
        {
            i=x;
        }
        Item operator =(Item i)
        {
            return Item();
        }
};
class Product
{
    int x,y;
    public :
         void display()
         {
             cout<<"X = "<<x<<" Y= "<<y<<endl;
         }
         Product(int a,int b)
         {
             x=a;
             y=b;
         }
         getx()
         {
             return x;
         }
         gety()
         {
             return y;
         }
         operator Item()
         {
             Item i(x+y);
             return i;
         }
};
int main()
{
    Product p(3,4);
    Item i=p;
    p.display();
    i.display();
    return 0;
}


