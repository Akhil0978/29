#include<iostream>
using namespace std;
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
};
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
        Item(Product p)
        {
            i=p.getx()*p.gety();
        }
};
int main()
{
    Product p(3,4);
    Item i;

    i=p;
    p.display();
    i.display();
    return 0;
}

