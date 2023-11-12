#include<iostream>
using namespace std;

class base
{
    public:
    int x;
    void set_x(int n)
    {
        x=n;
    }

    void get_x()
    {
        cout<<"The value of x in base class is :"<<x<<endl;
    }
};

class derived:public base
{

    int y;
    public:
    void set_y(int n)
    {
        y=n;
    }

    void get_xy()
    {
        cout<<"The value of x in derived class is : "<<x<<endl;
        cout<<"the value of y is :"<<y<<endl;
    }
};

int main()
{
    int x,y;
    cout<<"Enter the value of x : ";
    cin>>x;
    cout<<"Enter the value of y : ";
    cin>>y;
    derived deriv_obj;
    deriv_obj.set_x(x);
    deriv_obj.get_x();
    deriv_obj.set_y(y);
    deriv_obj.get_xy();
    return 0;
}