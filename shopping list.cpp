#include<iostream>
using namespace std;

class item
{
    int itemcode[50];
    float itemprice[50];
    int count;
    public:
    void CNT(void){count=0;}
    void getitem(void);
    void remove(void);
    void displayitem(void);
};

void item::getitem(void)
{
    cout<<"Enter Item code :";
    cin>>itemcode[count];
    cout<<"Enter cost of item : ";
    cin>>itemprice[count];
    count++;
}

void item::remove(void)
{
    int a;
    cout<<"enter item code  :";
    cin>>a;

    for (int i = 0; i < count; i++)
     if(itemcode[i]==a)
     itemprice[i]=0;
}

void item::displayitem(void)
{
    cout<<"\ncode price\n";
    for (int i = 0; i < count; i++)
    {
        cout<<"\n"<<itemcode[i];
        cout<<"\n"<<itemprice[i];
    }
    cout<<"\n";
}

int main()
{
    item order;
    order.CNT();
    int x;
    do
    {
        cout<<"add item";
        cout<<"delete item";
        cout<<"display all"; 

        cin>>x;

        switch(x)
        {
            case 1 :order.getitem();break;
            case 2 :order.remove();break;
            case 3 :order.displayitem();break;
            default :cout<<"Enter correct input :)";
        }
    } 
    while (x!=5);

return 0;    
}