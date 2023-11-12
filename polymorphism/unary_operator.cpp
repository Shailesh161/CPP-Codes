#include<iostream>
using namespace std;

class point
{
    private:
    int x,y;
    public:
    point()
    {
        x=0;
        y=0;
    }
    point(int i,int j)
    {
        x=i;
        y=j;
    }

    void get_xy(int &i , int &j)
    {
        i=x;
        j=y;
    }

    point operator+();
};

point point :: operator+()
{
    x=+x;
    y=+y;
    return *this;
}

int main()
{
    point obj(10,20);
    int x,y;
    obj.get_xy(x,y);
    obj=+obj;
    obj.get_xy(x,y);
    cout<<"X:"<<x<<endl<<"Y:"<<y<<endl;
    return 0;
}