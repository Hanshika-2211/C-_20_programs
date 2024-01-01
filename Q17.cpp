#include <iostream>
#include <cstring>  // Include for strcpy

class Student {
private:
    char name[50];
    int rollNumber;
    double marks;

public:
    void displayDetails() {
        std::cout << "Name: " << name << "\nRoll Number: " << rollNumber << "\nMarks: " << marks << std::endl;
    }

    void setName(const char* newName) {
        strncpy(name, newName, sizeof(name)-1);
        name[sizeof(name)-1] = '\0'; // Null-terminate to ensure the string is properly terminated.
    }

    void setRollNumber(int newRollNumber) {
        rollNumber = newRollNumber;
    }

    void setMarks(double newMarks) {
        marks = newMarks;
    }

    static double calculateAverage(Student students[], int size) {
        double sum = 0;
        for (int i = 0; i < size; ++i) {
            sum += students[i].marks;
        }
        return (size > 0) ? (sum / size) : 0;
    }

    static void addStudent(Student& newStudent, Student students[], int& size, int maxSize) {
        if (size < maxSize) {
            std::cout << "Enter student details:\n";
            std::cout << "Name: ";
            std::cin.ignore(); // Ignore the newline character left in the buffer
            std::cin.getline(newStudent.name, sizeof(newStudent.name));

            std::cout << "Roll Number: ";
            std::cin >> newStudent.rollNumber;

            std::cout << "Marks: ";
            std::cin >> newStudent.marks;

            students[size++] = newStudent;
            std::cout << "Student added successfully!" << std::endl;
        } else {
            std::cout << "Cannot add more students. Maximum limit reached." << std::endl;
        }
    }
};

int main() {
    const int maxSize = 5; // Maximum number of students
    Student students[maxSize];
    int studentCount = 0;

    // Test Case: Adding two students
    Student student1;
    student1.setName("Alice");
    student1.setRollNumber(101);
    student1.setMarks(85.5);

    Student student2;
    student2.setName("Bob");
    student2.setRollNumber(102);
    student2.setMarks(92.0);

    Student::addStudent(student1, students, studentCount, maxSize);
    Student::addStudent(student2, students, studentCount, maxSize);

    // Displaying student details
    std::cout << "\nStudent Details:\n";
    for (int i = 0; i < studentCount; ++i) {
        students[i].displayDetails();
        std::cout << std::endl;
    }

    // Calculating and displaying average marks
    double averageMarks = Student::calculateAverage(students, studentCount);
    std::cout << "Average Marks: " << averageMarks << std::endl;

    return 0;
}
