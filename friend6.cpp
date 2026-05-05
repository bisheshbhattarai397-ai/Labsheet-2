#include<iostream>
#include<conio.h>
using namespace std;

class B; // Forward Declaration

class A {
    int a;
public:
    void getdata() { // Logic must be inside a function!
        cout << "Enter the value of A: ";
        cin >> a;
    }
    friend int sum(A objA, B objB); // Permission from A
};

class B {
    int b;
public:
    void getdata() {
        cout << "Enter the value of B: ";
        cin >> b;
    }
    friend int sum(A objA, B objB); // Permission from B
};

// The Bridge
int sum(A objA, B objB) {
    return (objA.a + objB.b); // Use the object names, not the class names
}

int main() {
    A o;
    B i;
    
    o.getdata();
    i.getdata();
    
    int result = sum(o, i); // Call the bridge
    
    cout << "The sum is: " << result << endl;
    
    getch();
    return 0;
}
