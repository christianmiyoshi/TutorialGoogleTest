#ifndef SCHOOL_H
#define SCHOOL_H

#include <vector>
#include <string>
#include "student.h"

class School {
public:
    void addStudent(const Student& student) {
        students.push_back(student);
    }
    std::vector<Student> getNotApprovedStudents() const;
private:
    std::vector<Student> students;
};

#endif