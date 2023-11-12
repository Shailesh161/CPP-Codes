#include<iostream>
using namespace std;
int main()
{
    int n,sum;
    cout<<"ENTER THE NUMBER :";
    cin>>n;
    sum=0;
    for (int i = 0; i <=n; i++)
    {
        sum=sum+i;
    }
    cout<<"ADDITION IS :"<< sum <<endl;
    
    return 0;
}