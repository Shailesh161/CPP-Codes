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
    int n,sum,j;
    cout<<"how many numbers addition do you want :";
    cin>>n;
    sum =0;
    for (int i = 0; i <n; i++)
    {
        cout<<"Enter number which you want to add :";
        cin>>j;
        sum=sum+j;
        j++;
    }
    cout<<"ADDITION IS :"<<sum;  
}

void calculator::subtraction(void)
{
    int n;
    cout<<"How many numbers subtraction do you want to perform :";
    cin>>n;
    if (n==2)
    {
        int n1,n2,sub;
        cout<<"Enter first number :";
        cin>>n1;
        cout<<"Enter second number :";
        cin>>n2;
        sub=n1-n2;
        cout<<"subtraction of given numbers is :"<<sub;
    }
    else if (n==3)
    {
        int n1,n2,n3,sub;
        cout<<"Enter first number :";
        cin>>n1;
        cout<<"Enter second number :";
        cin>>n2;
        cout<<"Enter third number :";
        cin>>n3;
        sub=(n1-n2)-n3;
        cout<<"subtraction of given numbers is :"<<sub;
    }
    else
    {
        cout<<"Enter number according to your calculator budget :) :";
    }

}

void calculator ::multiplication(void)
{
    int n;
    cout<<"How many numbers multiplication do you want to perform :";
    cin>>n;
    if (n==2)
    {
        int n1,n2,sub;
        cout<<"Enter first number :";
        cin>>n1;
        cout<<"Enter second number :";
        cin>>n2;
        sub=n1*n2;
        cout<<"multiplication of given numbers is :"<<sub;
    }
    else if (n==3)
    {
        int n1,n2,n3,sub;
        cout<<"Enter first number :";
        cin>>n1;
        cout<<"Enter second number :";
        cin>>n2;
        cout<<"Enter third number :";
        cin>>n3;
        sub=n1*n2*n3;
        cout<<"Multiplication of given numbers is :"<<sub;
    }
    else
    {
        cout<<"Enter number according to your calculator budget :) :";
    }

}

void calculator ::division(void)
{
    int n1,n2,sub;
    cout<<"Enter first number :";
    cin>>n1;
    cout<<"Enter second number :";
    cin>>n2;
    sub=n1/n2;
    cout<<"Division of given numbers is :"<<sub;
}


int main()
{
    calculator casio;
    int ch;
    cout<<"YOU CAN PERFORM FOLLOWING OPERATIONS ; TELL US WHAT DO YOU WANT TO DO"<<endl;
    cout<<"1]ADDITION :"<<endl;
    cout<<"2]SUBTRACTION :"<<endl;
    cout<<"3]MULTIPLICATION: "<<endl;
    cout<<"4]DIVISION : "<<endl;
    cout<<"Enter your choice :";
    cin>>ch;
    switch(ch)
    {
        case 1 : casio.addition();
        break;
        case 2 : casio.subtraction();
        break; 
        case 3 : casio.multiplication();
        break;
        case 4: casio.division();
        break;
        default : cout<<"WRONG INPUT ";
    }
    return 0;
    
}