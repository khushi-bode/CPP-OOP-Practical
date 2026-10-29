#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int prn;
    string name;
    float marks;

public:
    void setDetails(int p, string n, float m) {
        prn = p;
        name = n;
        marks = m;
    }

    friend class ResultPrinter;
};

class ResultPrinter {
public:
    void displayResult(Student s) {
        cout << "\n--- Student Result ---" << endl;
        cout << "Name: " << s.name << endl;
        cout << "PRN: " << s.prn << endl;
        cout << "Marks: " << s.marks << "/100" << endl;

        if (s.marks >= 40)
            cout << "Status: PASS" << endl;
        else
            cout << "Status: FAIL" << endl;
    }
};

int main() {
    Student s1, s2;

    s1.setDetails(101, "Aarav", 85.5);
    s2.setDetails(102, "Siya", 36);

    ResultPrinter r;

    r.displayResult(s1);
    r.displayResult(s2);

    return 0;
}
