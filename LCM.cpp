#include<iostream>
using namespace std;

int getHCF(int num1, int num2){

    // using repeated subtraction here
    while (num1 != num2)
    {
        if (num1 > num2)
            num1 -= num2;
        else
            num2 -= num1;
    }

    return num1;
}

int main()
{
    int num1 = 12, num2 = 14;

    int hcf = getHCF(num1, num2);

    // LCM formula
    int lcm = (num1*num2)/hcf;
    cout<<"LCM of "<<num1<<" and "<<num2<<" is "<<lcm;

    return 0;
}
