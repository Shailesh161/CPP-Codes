#include<iostream>
using namespace std;

class parent
{
    protected:
    int id_protected;
};

class child :public parent
{
    public:
    void setID(int id)
    {
        id_protected=id;
    }
    void getData()
    {
        cout<<"ID protected is"<<id_protected<<endl;
    }
};

int main()
{
    child c1;
    c1.setID(55);
    c1.getData();
    return 0;
}