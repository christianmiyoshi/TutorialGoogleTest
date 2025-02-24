#include "student.h"

std::string Student::output() const {
    return name + " scored a " + std::to_string(grade);
}

bool Student::isApproved() const {
    return grade >= 5.0;
}
