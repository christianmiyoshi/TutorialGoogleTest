#include "school.h"
#include <algorithm>
#include <vector>

std::vector<Student> School::getNotApprovedStudents() const {
    std::vector<Student> result;
    std::copy_if(
        students.begin(), 
        students.end(), 
        std::back_inserter(result), 
        [](const Student& student) { return !student.isApproved();}
    );
    return result;
}