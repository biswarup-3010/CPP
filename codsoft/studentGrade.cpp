#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
struct Student {
   string name;
    double grade;
};

int main() {
   vector<Student> students;
    int numStudents;

   cout << "Enter the number of students: ";
   cin >> numStudents;

    if (numStudents <= 0) {
       cout << "Error: Invalid number of students.\n";
        return 1;
    }

    // Input student names and grades
    for (int i = 0; i < numStudents; ++i) {
        Student student;
       cout << "Enter the name of student " << i + 1 << ": ";
       cin.ignore(); // Ignore the newline character left by previous input
       getline(std::cin, student.name);

       cout << "Enter the grade of student " << i + 1 << ": ";
       cin >> student.grade;

        students.push_back(student);
    }

    // Calculate the average grade
    double sum = 0.0;
    double highestGrade = students[0].grade;
    double lowestGrade = students[0].grade;

    for (const Student& student : students) {
        sum += student.grade;
        if (student.grade > highestGrade) {
            highestGrade = student.grade;
        }
        if (student.grade < lowestGrade) {
            lowestGrade = student.grade;
        }
    }

    double averageGrade = sum / numStudents;

    // Display results
   cout << "\nStudent Grades Summary:\n";
    for (const Student& student : students) {
       cout << "Student: " << student.name << ", Grade: " << student.grade <<endl;
    }

   cout << "\nAverage Grade: " << averageGrade <<endl;
   cout << "Highest Grade: " << highestGrade <<endl;
   cout << "Lowest Grade: " << lowestGrade <<endl;

    return 0;
}
