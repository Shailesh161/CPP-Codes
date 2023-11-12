#include<iostream>
using namespace std;

int sum(int a , int b)
{
    cout<<"sum of 2 arguments is"<<endl;
    return a+b;
}

int sum(int a, int b , int c)
{
    cout<<"using 3 arguments"<<endl;
    return a+b+c;
}
int main()
{
    cout<<"sum of 3 ,6 is"<<sum(3,6)<<endl;
    cout<<"sum of 3,4 ,6 is"<<sum(3,4,6)<<endl;
    return 0 ;
}

