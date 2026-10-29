#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int prn;
    string name;
    float marks;
    static int count;

public:
    Student() {
        count++;
    }

    void setDetails(int prn, string name, float marks) {
        this->prn = prn;
        this->name = name;
        this->marks = marks;
    }

    inline void displayDetails() {
        cout << "PRN: " << prn << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }

    static void showCount() {
        cout << "Total Student objects: " << count << endl;
    }
};

int Student::count = 0;

int main() {
    Student s1, s2;

    s1.setDetails(101, "Aarav", 85.5);
    s2.setDetails(102, "Siya", 36);

    cout << "--- Student 1 ---" << endl;
    s1.displayDetails();

    cout << "\n--- Student 2 ---" << endl;
    s2.displayDetails();

    cout << "\n--- Static Member Function ---" << endl;
    Student::showCount();

    return 0;
}
