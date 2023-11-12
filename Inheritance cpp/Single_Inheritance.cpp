#include <iostream>

class Base {
public:
    void display() {
        std::cout << "Base class display\n";
    }
};

class Derived : public Base {
public:
    void show() {
        std::cout << "Derived class show\n";
    }
};

int main() {
    Derived derivedObj;
    derivedObj.display(); // Accessing Base class member
    derivedObj.show();    // Accessing Derived class member
    return 0;
}
