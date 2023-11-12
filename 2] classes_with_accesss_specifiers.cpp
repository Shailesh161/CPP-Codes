#include<iostream>
using namespace std;

class employee
{
    private:
    int a,b,c;
    public:
    int d,e;
    void setData(int a1, int b1,int c1);
    void getData()
    {
        cout<<"value of a is "<<a <<endl;
        cout<<"value of b is "<<b <<endl;
        cout<<"value of c is "<<c <<endl;
        cout<<"value of d is "<<d <<endl;
        cout<<"value of e is "<<e <<endl;
    }
};

void employee ::setData(int a1,int b1,int c1)
{
    a=a1;
    b=b1;
    c=c1;
}

int main()
{
    employee harry;
    harry.d=55;
    harry.e=66;
    harry.setData(3,6,9);
    harry.getData();
    return 0;
} 