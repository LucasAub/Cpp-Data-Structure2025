#include "Student.h"
#include "BST.h"
#include "StudentFunctions.h"
#include <vector>
#include <iostream>

int main() {
    std::vector<Student> students;
    BST bst;
    int choice;

    do {
        std::cout << "\n--- Student Management System ---\n";
        std::cout << "1. Add Student\n";
        std::cout << "2. Display Students\n";
        std::cout << "3. Remove Student\n";
        std::cout << "4. Retrieve Student\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: addStudent(students, bst); break;
            case 2: displayStudents(students, bst); break;
            case 3: removeStudent(students, bst); break;
            case 4: retrieveStudent(students, bst); break;
            case 5: std::cout << "Exiting...\n"; break;
            default: std::cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 5);

    return 0;
}
