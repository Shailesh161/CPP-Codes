#include<iostream>//SELECTION SORT
using namespace std;
int main()
{
    int n;
    cout<<"ENTER HOW MANY ELEMENTS DO YOU WANT :";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the element :";
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {

                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    cout<<"The sorted array by using selection sort is :";
    for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<" ,  ";
            }
    cout<<endl;
}