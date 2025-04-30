#include "Student.h"
#include <iostream>
using namespace std;

int main() {
    // Тестування конструктора переміщення
    Student s1("John Doe", "01.01.2000", "123456789", "Kyiv", "Ukraine",
        "KPI", "Kyiv", "Ukraine", "KN-101");

    cout << "Original student:\n";
    s1.print();

    // Використовуємо конструктор переміщення
    Student s2 = move(s1);

    cout << "\nAfter move:\n";
    cout << "Moved student:\n";
    s2.print();

    cout << "\nOriginal student (should be empty):\n";
    s1.print();

    cout << "\nTotal Student instances: " << Student::getInstanceCount() << "\n";

    return 0;
}