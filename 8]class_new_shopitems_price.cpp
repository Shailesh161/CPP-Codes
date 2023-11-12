#include<iostream>
#include<string.h>
using namespace std;

class shop
{
    int ItemID[50];
    int Itemprice[100];
    public:
    void setprice(void);
    void getprice(void);
};

void shop::setprice(void)
{
    cout<<"Enter the ID of item"<<endl;
    cin>>ItemID;
    cout<<"Enter the price of the item"<<endl;
    cin>>Itemprice;
    cout<<"Enter 2nd Item"<<endl;
}

void shop :: getprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        /* code */
    }
    
}
{
    cout<<"The price of Item"<< ItemID <<" is "<< Itemprice <<endl;

}
int main()
{
    shop chu;
    chu.setprice();
    chu.getprice();
    return 0;
}