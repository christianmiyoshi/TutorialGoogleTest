#include <student.h>
#include <school.h>
#include <vector>
#include <iostream>
#include <algorithm>


int main()
{
    std::vector<Student> students;

    School school;
    school.addStudent(Student("João", 7.0));
    school.addStudent(Student("Maria", 10.0));
    school.addStudent(Student("Pedro", 5.0));
    school.addStudent(Student("Lucas", 8.0));
    school.addStudent(Student("Carolina", 3.0));
    school.addStudent(Student("Mateus", 4.0));
    school.addStudent(Student("Carlos", 7.0));

    students = school.getNotApprovedStudents();
    for (const auto& student : students) {
        std::cout << student.output() << std::endl;
    }

    return 0;
}