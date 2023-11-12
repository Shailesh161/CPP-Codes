#include<iostream>
using namespace std;

struct employee
{
    int age;
    int phone;
    float salary;
};

int main()
{
    struct employee ch ;
    ch.age=7;
    ch.salary=1500.13;
    ch.phone=989898989; 
    cout<<"salary of A is"<<ch.salary<<endl;
    return 0;
}