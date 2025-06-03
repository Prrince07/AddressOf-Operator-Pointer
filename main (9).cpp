#include <iostream>
using namespace std;

int main() {
    int num = 72;          
    int* ptr = &num;       

    cout << "Value of num      : " << num << endl;
    cout << "Address of num (&num): " << &num << endl;

    cout << "Value of ptr (i.e., address stored in ptr): " << ptr << endl;
    cout << "Value at address stored in ptr (*ptr): " << *ptr << endl;

    *ptr = 120;

    cout << "\nAfter modifying value using pointer:" << endl;
    cout << "New value of num  : " << num << endl;
    cout << "New value at *ptr : " << *ptr << endl;

    return 0;
}
