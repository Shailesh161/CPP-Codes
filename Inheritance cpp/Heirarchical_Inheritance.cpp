#include <iostream>

class Base {
public:
    void display() {
        std::cout << "Base class display\n";
    }
};

class Derived1 : public Base {
public:
    void show1() {
        std::cout << "Derived1 class show1\n";
    }
};

class Derived2 : public Base {
public:
    void show2() {
        std::cout << "Derived2 class show2\n";
    }
};

int main() {
    Derived1 derivedObj1;
    derivedObj1.display(); // Accessing Base class member
    derivedObj1.show1();   // Accessing Derived1 class member
    
    Derived2 derivedObj2;
    derivedObj2.display(); // Accessing Base class member
    derivedObj2.show2();   // Accessing Derived2 class member
    
    return 0;
}
