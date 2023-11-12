//overriding functions
//As we know that through i9nheritance we can use 
//the properties of base class into 
//the derived class .but if we want to use 
//the same function in both the 
//base class and derived class at that time the concept of 
//function overriding is used


#include<iostream>
using namespace std;

class base
{
    public:
    void print()
    {
        cout<<"base function"<<endl;
    }
};
class derived:public base
{
    public:
    void print()
    {
        cout<<"Derived function "<<endl;
    }
};

int main()
{
    derived obj; //for accessing the output statement of the derived object
    obj.print();
    return 0;
}
/*
int main()
{
    base obj;
    obj.print();
    return 0;
}
*/
//for accessing the output statement from the base class