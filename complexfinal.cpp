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
    complex x,y,z;
    cout<<"Enter real part of first complex number :"<<endl;
    cin>>x.real;
    cout<<"Enter imaginary part of 1 st complex number :";
    cin>>x.img;
    cout<<"Enter real part of second complex number :"<<endl;
    cin>>y.real;
    cout<<"Enter imaginary part of 2nd complex number :";
    cin>>y.img;
    cout<<"First complex number is "<<endl;
    cout<<x.real<<"+"<<x.img<<"i";
    cout<<"\nsecond complex number is "<<endl;
    cout<<y.real<<"+"<<y.img<<"i";
    cout<<"\naddition of two matrix is : "<<endl;
    z.real=x.real+y.real;
    z.img=x.img+y.img;
    cout<<z.real<<"+"<<z.img<<"i"<<endl;
    return 0;
}