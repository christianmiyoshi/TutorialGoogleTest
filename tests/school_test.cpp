#include <gtest/gtest.h>
#include "school.h"

TEST(SchoolTest, studentsNotApproved) {
    School school;

    school.addStudent(Student("João", 7.0));
    school.addStudent(Student("Maria", 10.0));
    school.addStudent(Student("Pedro", 5.0));
    school.addStudent(Student("Lucas", 8.0));
    school.addStudent(Student("Carolina", 3.0));
    school.addStudent(Student("Mateus", 4.0));
    school.addStudent(Student("Carlos", 7.0));

    std::vector<Student> studentsNotApproved = school.getNotApprovedStudents();

    EXPECT_EQ(studentsNotApproved.size(), 2);
    EXPECT_TRUE(std::any_of(
        studentsNotApproved.begin(), 
        studentsNotApproved.end(), 
        [](Student student){return student.name == "Carolina";})
    );

    EXPECT_TRUE(std::any_of(
        studentsNotApproved.begin(), 
        studentsNotApproved.end(), 
        [](Student student){return student.name == "Mateus";})
    );
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}