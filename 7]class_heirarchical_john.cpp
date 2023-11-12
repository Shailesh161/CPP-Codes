#include<iostream>
using namespace std;

class Animal
{
    public:
    void info()
    {
        cout<<"I am animal"<<endl;
    }
    
};

class dog:public Animal
{
    public:
    void bark()
    {
        cout<<"I am dog had had"<<endl;
    }
};

class cat:public Animal
{
    public:
    void meow()
    {
        cout<<"I am cat meow meow"<<endl;
    }
};

int main()
{
    dog dog1;
    cout<<"dog class:"<<endl;
    dog1.info();
    dog1.bark();

    cat cat1;
    cout<<"cat class :"<<endl;
    cout<<" "<<endl;
    cat1.info();
    cat1.meow();
    return 0;
}