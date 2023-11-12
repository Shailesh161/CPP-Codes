#include <iostream>
using namespace std;

class Student
{
    public:
    int age;
    int standard;
    void get_age(void);
    void set_age(void);
    void get_first_name(void);
    void set_first_name(void); 
    void get_last_name(void);
    void set_last_name(void);
    void get_standard(void);
    void set_standard(void);
};

void Student ::get_age()
{
    cin>>age;
}

void Student::set_age()
{
    cout<<age;
}

void Student :: set_first_name(void)
{
    char first_n[50];
    cin>>first_n;    
}

void Student :: get_first_name(void)
{
    char first_n[50];
    cout<<first_n;
}

void Student :: set_last_name(void)
{
    char last_n[50];
    cin>> last_n;
}

void Student :: get_last_name(void)
{
    char last_n[50];
    cout<<last_n<<endl;
}

void Student:: set_standard(void)
{
    cin>>standard;   
}
void Student :: get_standard(void)
{
    cout<<standard;   
}

int main()
{
    Student sg;
    sg.set_age();
    sg.get_age();
    sg.set_first_name();
    sg.get_first_name();
    sg.set_last_name();
    sg.get_last_name();
    sg.set_standard();
    sg.get_standard();
    return 0;
}
