#ifndef INCLUDED_STUDENT
#define INCLUDED_STUDENT

#include <string>

class Student {
public:
    Student(std::string name, float grade)
        : name(name), grade(grade) {};

    std::string name;
    float grade;
    std::string output() const;
    bool isApproved() const;
};

#endif