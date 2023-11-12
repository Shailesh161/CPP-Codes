#include<iostream>
using namespace std;

class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;
    public:
    void initcounter(void){counter=0;}
    void setprice(void);
    void getprice(void);
};

void shop:: setprice(void)
{
    cout<<"Enter Item id of item no : "<<counter+1<<endl;
    cin>>itemid[counter];
    cout<<"Enter Item price of item no : "<<counter+1<<endl;
    cin>>itemprice[counter];
    counter++;
}

void shop::getprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout<<"the price of item  id "<<itemid[i]<<" is "<<itemprice[i]<<endl;;
    } 
}

int main()
{
    shop s1;
    s1.initcounter();
    s1.setprice();
    s1.setprice();
    s1.setprice();
    s1.getprice();
    return 0;
}