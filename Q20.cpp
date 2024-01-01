#include <iostream>

class Student {
private:
    std::string name;
    double* grades;
    int numGrades;

public:
    // Constructor
    Student(std::string studentName, int num) : name(studentName), numGrades(num) {
        grades = new double[numGrades];
    }

    // Destructor
    ~Student() {
        delete[] grades;
    }

    // Method to add grades
    void addGrade() {
        std::cout << "Enter " << numGrades << " grades for " << name << ":\n";
        for (int i = 0; i < numGrades; ++i) {
            std::cout << "Grade " << i + 1 << ": ";
            std::cin >> grades[i];
        }
    }

    // Method to calculate average grade
    double calculateAverage() {
        double sum = 0.0;
        for (int i = 0; i < numGrades; ++i) {
            sum += grades[i];
        }
        return (numGrades > 0) ? (sum / numGrades) : 0.0;
    }

    // Method to display student information
    void displayInfo() {
        std::cout << "Student Name: " << name << "\nGrades:";
        for (int i = 0; i < numGrades; ++i) {
            std::cout << " " << grades[i];
        }
        std::cout << "\nAverage Grade: " << calculateAverage() << std::endl;
    }
};

int main() {
    // Test Case: Any two students
    Student student1("John Doe", 3);
    student1.addGrade();
    student1.displayInfo();

    Student student2("Jane Smith", 4);
    student2.addGrade();
    student2.displayInfo();

    return 0;
}
