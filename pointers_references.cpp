#include <iostream>
using namespace std;

int main() {
    int num = 10;
    int *ptr = &num;

    cout << "----- Pointer Demonstration -----" << endl;
    cout << "Original value: " << num << endl;
    cout << "Address of num: " << ptr << endl;
    cout << "Value using pointer: " << *ptr << endl;

    *ptr = 20;
    cout << "Value after pointer modification: " << num << endl;

    int &ref = num;

    cout << "\n----- Reference Demonstration -----" << endl;
    ref = 30;
    cout << "Value using reference: " << ref << endl;
    cout << "Final value of num: " << num << endl;

    return 0;
}
