#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
class Course {
private:
    string courseCode;
    string courseName;
    int maxStudents;
    Student* students;
    int currentStudents;
public:
    Course();
    Course(string cc,string cn,int ms);
    ~Course();
    void addStudent(const Student& s);
    void displayCourseInfo();
    string getCourseCode();
    string getCourseName();
    int getMaxStudents();
    Student* getStudents();
    int getCurrentStudents();
    void setCourseCode(string cc);
    void setCourseName(string cn);
    void setMaxStudents(int ms);
    void setStudents(Student* s);
    void setCurrentStudents(int cs);
};
#endif
