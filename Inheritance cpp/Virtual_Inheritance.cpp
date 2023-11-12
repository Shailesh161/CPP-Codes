#include <iostream>

class Base {
public:
    void display() {
        std::cout << "Base class display\n";
    }
};

class Derived1 : virtual public Base {
public:
    void show1() {
        std::cout << "Derived1 class show1\n";
    }
};

class Derived2 : virtual public Base {
public:
    void show2() {
        std::cout << "Derived2 class show2\n";
    }
};

class FinalDerived : public Derived1, public Derived2 {
public:
    void finalShow() {
        std::cout << "FinalDerived class finalShow\n";
    }
};

int main() {
    FinalDerived finalObj;
    finalObj.display(); // Accessing Base class member
    finalObj.show1();   // Accessing Derived1 class member
    finalObj.show2();   // Accessing Derived2 class member
    finalObj.finalShow();// Accessing FinalDerived class member
    
    return 0;
}
