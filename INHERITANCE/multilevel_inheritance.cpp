// #include<iostream>
// using namespace std;

// class grand
// {
//     protected:
//     int x;
//     public:
//     void set_x(int n)
//     {
//         x=n;
//     }

//     void get_x()
//     {
//         cout<<"The value of grandfather x is :"<<x<<endl;
//     }

// };


// class father:public grand
// {
//     public:
//     int x,y;
//     void set_y(int j)
//     // {
//         y=j;      
//     }

//     void get_y()
//     {
//         cout<<"the value of y is :"<<y<<endl;
//     }
// };

// class me : public father
// {
//     public:
//     int x,y,z;
//     void set_z(int k)
//     {
//         z=k;
//     }

//     void get_z()
//     {
//         cout<<"the value of z is :"<<z<<endl;
//     }

//     void display_xyz()
//     {
//         cout<<"The value of x is (Fianl) : "<<x<<endl;
//         cout<<"the value of y is (final):"<<y<<endl;
//         cout<<"the value of z is :"<<z<<endl;
//     }
  
// };

// int main()
// {
//     int x, y ,z;
//     cout<<"enter x :  ";
//     cin>>x;
//     cout<<"enter y:   ";
//     cin>>y;
//     cout<<"enter z:   ";
//     cin>>z;
//     me coder;
//     coder.set_x(x);
//     coder.get_x();
//     coder.set_y(y);
//     coder.get_y();
//     coder.set_z(z);
//     coder.get_z();
//     return 0;

// }

#include<iostream>
using namespace std;

class A
{
    protected:
    int x;
    public:
    void get_a(int a);
    void put_a();

};

void A::get_a(int a)
{
    x=a;
}

void A::put_a()
{
    cout<<"The value of x is :"<<x<<endl;
}


class B:public A
{
    protected :
    int y;
    public :
    void get_b(int b);
    void put_b();;

};


void B::get_b(int b)
{
    y=b;
}

void B::put_b()
{
    cout<<"The value of y :"<<y<<endl;
}

class C :public B
{
    int z;
    public:
    void display();
};

void C::display()
{
    z=y+10;
    put_a();
    put_b();
    cout<<"the value of z is : "<<z<<endl;
}

int main()
{
    C obj;
    obj.get_a(10);
    obj.get_b(20);
    obj.display();
    cout<<endl;
    return 0;
}