#include<iostream>
using namespace std;

class base
{
    public:
    base()
    {
        cout<<"base class constructor called"<<endl;
    }
    ~base()
    {
        cout<<"base class destuctor called"<<endl;
    }
};

class derived:public base
{
    public:
    derived()
    {
        cout<<"derived class constructror called"<<endl;
    }
    ~derived()
    {
        cout<<"derived class destructor calleed"<< endl;
    }
};

int main()
{
    derived obj;
    return 0;
}