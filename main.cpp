#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;
Person::Person() {
    name="";
    id=0;
}
Person::Person(string n,int i) {
    name=n;
    id=i;
}
string Person::getName() {
    return name;
}
int Person::getId() {
    return id;
}
void Person::setName(string n) {
    name=n;
}
void Person::setId(int i) {
    id=i;
}
Person::~Person() {
}
void Person::display() {
    cout<<"Name: "<<name<<endl;
    cout<<"ID: "<<id<<endl;
}
Student::Student():Person() {
}
Student::Student(string n, int i, int y, string m):Person(n,i) {
    yearLevel=y;
    major=m;
}
Student::~Student(){
}
void Student::display() {
    Person::display();
    cout<<"Year: "<<yearLevel<<endl;
    cout<<"Major: "<< major<<endl;
}
string Student::getMajor() {
    return major;
}

int Student::getYearLevel() {
    return yearLevel;
}
void Student::setMajor(string m) {
    major=m;
}
void Student::setYearLevel(int y) {
    yearLevel=y;
}
Instructor::Instructor():Person() {
}
Instructor::Instructor(string n, int i, string dep, int ey):Person(n,i) {
    department=dep;
    experienceYears=ey;
}
Instructor::~Instructor() {
}
void Instructor::display() {
    Person::display();
    cout<<"Department: "<<department<<endl;
    cout<<"Experience: "<<experienceYears<<" years"<<endl;
}
string Instructor::getDepartment() {
    return department;
}
int Instructor::getExperienceYears() {
    return experienceYears;
}
void Instructor::setDepartment(string d) {
    department=d;
}
void Instructor::setExperienceYears(int ey) {
    experienceYears=ey;
}
Course::Course() {
}
Course::Course(string cc,string cn,int ms) {
    courseCode=cc;
    courseName=cn;
    maxStudents=ms;
    currentStudents=0;
    students=(Student*)malloc(sizeof(Student)*maxStudents);
}
Course::~Course() {
    free(students);
}
void Course:: addStudent(const Student& s) {
    if (currentStudents<maxStudents) {
        students[currentStudents]=s;
        currentStudents++;
    }else {
        cout<<"no place"<<endl;
    }
}
void Course:: displayCourseInfo() {
    cout<<"Course Name: "<<courseName<<endl;
    cout<<"Max Students: "<< maxStudents<<endl;
    for (int i=0;i<currentStudents;i++) {
        students[i].display();
    }
}
void Course::setStudents(Student *s) {
    students=s;
}

string Course:: getCourseCode() {
    return courseCode;
}
string Course:: getCourseName() {
    return courseName;
}
int Course:: getMaxStudents() {
    return maxStudents;
}
Student* Course::getStudents() {
    return students;
}
int Course:: getCurrentStudents() {
    return currentStudents;
}
void Course:: setCourseCode(string cc) {
    courseCode=cc;
}
void Course:: setCourseName(string cn) {
    courseName=cn;
}
void Course:: setMaxStudents(int ms) {
    maxStudents=ms;
}
void Course:: setCurrentStudents(int cs) {
    currentStudents=cs;
}
int main() {
   
    
    return 0;
}
