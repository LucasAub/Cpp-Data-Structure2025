#ifndef STUDENT_H
#define STUDENT_H

#include <string>

struct Student {
    std::string name;
    int year_of_enrollment;
    float GPA;

    Student(std::string n, int y, float g) : name(n), year_of_enrollment(y), GPA(g) {}
};

#endif // STUDENT_H
