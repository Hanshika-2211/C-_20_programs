#include <iostream>
using namespace std;

int main() {
    double subjectMarks[5];
    double totalMarks = 0;

    cout << "Enter marks for 5 subjects:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "Subject " << i + 1 << ": ";
        cin >> subjectMarks[i];
        totalMarks += subjectMarks[i];
    }

    double averageMarks = totalMarks / 5;

    if (averageMarks >= 90) {
        cout << "Grade: A\n";
    } else if (averageMarks >= 80) {
        cout << "Grade: B\n";
    } else if (averageMarks >= 70) {
        cout << "Grade: C\n";
    } else if (averageMarks >= 60) {
        cout << "Grade: D\n";
    } else {
        cout << "Grade: F\n";
    }
    return 0;
}
