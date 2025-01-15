#ifndef STUDENT_FUNCTIONS_H
#define STUDENT_FUNCTIONS_H

#include <vector>
#include "Student.h"
#include "BST.h"

void addStudent(std::vector<Student> &students, BST &bst);
void displayStudents(const std::vector<Student> &students, BST &bst);
void removeStudent(std::vector<Student> &students, BST &bst);
void retrieveStudent(const std::vector<Student> &students, BST &bst);

#endif // STUDENT_FUNCTIONS_H
