#include<iostream>
using namespace std;

class point
{
    int a,b;
    public:
    point(int x,int y)
    {
        a = x;
        b = y;
    }

    void display_point()
    {
        cout<<"you have entered the point :"<<"("<< a <<","<< b <<")"<<endl;
    }
};

int main()
{
    point p(7,5);
    p.display_point();
    return 0;
}