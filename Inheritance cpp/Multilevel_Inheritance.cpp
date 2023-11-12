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

class Derived2 : public Derived1 {
public:
    void show2() {
        std::cout << "Derived2 class show2\n";
    }
};

int main() {
    Derived2 derivedObj;
    derivedObj.display(); // Accessing Base class member
    derivedObj.show1();   // Accessing Derived1 class member
    derivedObj.show2();   // Accessing Derived2 class member
    return 0;
}
