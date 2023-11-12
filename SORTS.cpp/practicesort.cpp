#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            if (arr[i]<arr[j])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }  
        }   
    }
    //For printing the array which we have already done
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<","<<endl;
    }    
}