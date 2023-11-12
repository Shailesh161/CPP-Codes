#include<iostream>
using namespace std;

class car
{
    int number;
    float price;
    char name;
    public:
    void setdata(int a,float b,char c);
    void getdata(void)
    {
        cout<<"number is "<<number<<endl;
        cout<<"price is "<<price <<endl;
        cout<<"name is "<<name<<endl;
    }
};

void car::setdata(int a,float b,char c)
{
    number=a;
    price=b;
    name=c;
 
}

int main()
{
    char c;
    car x;
    cout<<"Info of car x"<<endl;
    x.setdata(10,16000,c);
    x.getdata();
    return 0;
}
