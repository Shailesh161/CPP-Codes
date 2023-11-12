#include <iostream>

class Base1 {
public:
    void display1() {
        std::cout << "Base1 class display1\n";
    }
};

class Base2 {
public:
    void display2() {
        std::cout << "Base2 class display2\n";
    }
};

class Derived1 : public Base1 {
public:
    void show1() {
        std::cout << "Derived1 class show1\n";
    }
};

class Derived2 : public Base1, public Base2 {
public:
    void show2() {
        std::cout << "Derived2 class show2\n";
    }
};

int main() {
    Derived1 derivedObj1;
    derivedObj1.display1(); // Accessing Base1 class member
    derivedObj1.show1();    // Accessing Derived1 class member
    
    Derived2 derivedObj2;
    derivedObj2.display1(); // Accessing Base1 class member
    derivedObj2.display2(); // Accessing Base2 class member
    derivedObj2.show2();    // Accessing Derived2 class member
    
    return 0;
}
