#include <iostream>
using namespace std;

int main() {
    int *ptr = new int;

    cout << "Enter an integer: ";
    cin >> *ptr;

    cout << "Value stored in dynamic memory: " << *ptr << endl;

    delete ptr;
    ptr = nullptr;

    cout << "Dynamic memory released successfully." << endl;

    return 0;
}
