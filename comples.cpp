#include<iostream>
using namespace std;

class complex 
{
    public:
    float real;
    float img;
};

int main()
{
    complex a,b,c;
    cout<<"Enter the real part of 1 st complex number"<<endl;
    cin>>a.real;
    cout<<"Enter the real part of 2 nd complex number"<<endl;
    cin>>b.real;
    cout<<"Enter the imagiinary part of the 1 st complex number"<<endl;
    cin>>a.img;
    cout<<"Enter the imagiinary part of the 2nd complex number"<<endl;
    cin>>b.img;
    cout<<"the first complex number is : "<<a.real<<"+"<<a.img<<"i"<<endl;
    cout<<"the second complex number is : "<<b.real<<"+"<<b.img<<"i"<<endl;
    c.real=a.real+b.real;
    c.img=a.img+b.img;
    cout<<"The addition of the numbers is :"<<c.real<<"+"<<c.img<<"i"<<endl;
    return 0;
}