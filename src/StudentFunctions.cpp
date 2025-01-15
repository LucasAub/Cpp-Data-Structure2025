#include "StudentFunctions.h"
#include <iostream>

void addStudent(std::vector<Student> &students, BST &bst)
{
    std::string name;
    int year;
    float gpa;

    std::cout << "Enter name: ";
    std::cin.ignore();
    std::getline(std::cin, name);
    std::cout << "Enter year of enrollment: ";
    std::cin >> year;
    std::cout << "Enter GPA: ";
    std::cin >> gpa;

    students.emplace_back(name, year, gpa);
    bst.insert(year, students.size() - 1);
    std::cout << "Student added successfully.\n";
}

void displayStudents(const std::vector<Student> &students, BST &bst)
{
    bst.display(students);
}

void removeStudent(std::vector<Student> &students, BST &bst)
{
    int year;
    std::cout << "Enter the year of the student to remove: ";
    std::cin >> year;

    TreeNode *node = bst.search(year);
    if (!node)
    {
        std::cout << "Student not found.\n";
        return;
    }

    // Remove the student from the vector
    students[node->index] = students.back();
    students.pop_back();

    // Remove the node from the BST
    bst.remove(year);
    std::cout << "Student removed successfully.\n";
}

void retrieveStudent(const std::vector<Student> &students, BST &bst)
{
    int year;
    std::cout << "Enter the year of enrollment to retrieve: ";
    std::cin >> year;

    const Student *student = bst.retrieve(students, year);
    if (!student)
    {
        std::cout << "Student not found.\n";
        return;
    }

    std::cout << "Name: " << student->name << ", Year: " << student->year_of_enrollment << ", GPA: " << student->GPA << "\n";
}
