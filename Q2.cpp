#include<iostream>
using namespace std;
class Complex
{
    int real,img;
    public :
         void display()
         {
             cout<<"Real = "<<real<<" Img = "<<img<<endl;
         }
         Complex(int r,int i)
         {
             real=r;
             img=i;
         }
         operator int()
         {
             return(real+img);
         }
};
int main()
{
    Complex c(5,3);
    cout<<c;
    return 0;
}
