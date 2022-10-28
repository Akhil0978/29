#include<iostream>
using namespace std;
class Time
{
    int hour,min;
    public :
        Time()
        {

        }
        Time (int duration)
        {
            hour=duration/3600;
            min=duration%3600;
        }
        void display()
        {
            cout<<"Hour = "<<hour<<" Minute = "<<min<<endl;
        }
};
int main()
{
    int duration=4000;
    Time t=duration;
    t.display();
    return 0;
}


