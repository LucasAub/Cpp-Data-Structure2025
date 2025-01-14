#include <iostream>
#include <vector>
#include <algorithm> // For sort()
#include "BST.h"

// Define the Student struct
struct Student {
    std::string name;
    int year_of_enrollment;
    float GPA;

    // Constructor for convenience
    Student(std::string n, int y, float g) : name(n), year_of_enrollment(y), GPA(g) {}
};

// Function Prototypes
void addStudent(std::vector<Student>& students);
void displayStudents(const std::vector<Student>& students);
void updateStudent(std::vector<Student>& students);
void removeStudent(std::vector<Student>& students);
void sortStudents(std::vector<Student>& students);
int binarySearch(const std::vector<Student>& students, const std::string& name);

// Main Menu
int main() {
    std::vector<Student> students; // Data structure to hold students
    int choice;

    do {
        std::cout << "\n--- Student Management System ---\n";
        std::cout << "1. Add Student\n";
        std::cout << "2. Display Students\n";
        std::cout << "3. Update Student\n";
        std::cout << "4. Remove Student\n";
        std::cout << "5. Sort Students by Name\n";
        std::cout << "6. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: addStudent(students); break;
            case 2: displayStudents(students); break;
            case 3: updateStudent(students); break;
            case 4: removeStudent(students); break;
            case 5: sortStudents(students); break;
            case 6: std::cout << "Exiting...\n"; break;
            default: std::cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 6);

    return 0;
}

// Add a Student
void addStudent(std::vector<Student>& students) {
    std::string name;
    int year;
    float gpa;

    std::cout << "Enter name: ";
    std::cin.ignore(); // To clear the input buffer
    std::getline(std::cin, name);
    std::cout << "Enter year of enrollment: ";
    std::cin >> year;
    std::cout << "Enter GPA: ";
    std::cin >> gpa;

    students.emplace_back(name, year, gpa);
    std::cout << "Student added successfully.\n";
}

// Display all Students
void displayStudents(const std::vector<Student>& students) {
    if (students.empty()) {
        std::cout << "No students to display.\n";
        return;
    }

    for (const auto& student : students) {
        std::cout << "Name: " << student.name
                  << ", Year: " << student.year_of_enrollment
                  << ", GPA: " << student.GPA << "\n";
    }
}

// Update a Student
void updateStudent(std::vector<Student>& students) {
    std::string name;
    std::cout << "Enter the name of the student to update: ";
    std::cin.ignore();
    std::getline(std::cin, name);

    int index = binarySearch(students, name);
    if (index == -1) {
        std::cout << "Student not found.\n";
        return;
    }

    std::cout << "Enter new year of enrollment: ";
    std::cin >> students[index].year_of_enrollment;
    std::cout << "Enter new GPA: ";
    std::cin >> students[index].GPA;

    std::cout << "Student updated successfully.\n";
}

// Remove a Student
void removeStudent(std::vector<Student>& students) {
    std::string name;
    std::cout << "Enter the name of the student to remove: ";
    std::cin.ignore();
    std::getline(std::cin, name);

    int index = binarySearch(students, name);
    if (index == -1) {
        std::cout << "Student not found.\n";
        return;
    }

    students.erase(students.begin() + index);
    std::cout << "Student removed successfully.\n";
}

// Sort Students by Name (Merge Sort implementation)
void sortStudents(std::vector<Student>& students) {
    std::sort(students.begin(), students.end(), [](const Student& a, const Student& b) {
        return a.name < b.name;
    });
    std::cout << "Students sorted successfully.\n";
}

// Binary Search to find a student by name
int binarySearch(const std::vector<Student>& students, const std::string& name) {
    int low = 0, high = students.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (students[mid].name == name) return mid;
        else if (students[mid].name < name) low = mid + 1;
        else high = mid - 1;
    }

    return -1; // Not found
}

