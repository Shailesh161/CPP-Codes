#include<iostream>
using namespace std;

class calculator
{
    float a,b,c,d,e;
    public:
    void addition(void);
    void subtraction(void);
    void multiplication(void);
    void division(void);
};

void calculator::addition(void) 
{
    int n,i,sum;
    cout<<"how many numbers addition do you want :";
    cin>>n;
    sum=0;
    for (int i = 0; i <=n; i++)
    {
        cout<<"Enter the number :";
        cin>>i;
        sum=sum+i;
        i++;
    }  
}

int main()
{
    calculator casio;
    int ch;
    cout<<"Enter your choice :";
    cin>>ch;
    switch(ch)
    {
        case 1:casio.addition();
        break;
        case 2:cout<<"multiplication";
        break;
        case 3:cout<<"Division";
        break;
        case 4:cout<<"Subtraction";
        break;
        default : cout<<"WRONG INPUT ";
    }
    return 0;
    
}