#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
class Student : public Person{
private:
    int yearLevel;
    string major;
public:
    Student();
    Student(string n,int i,int y,string m);
    ~Student();
    void display();
    string getMajor();
    int getYearLevel();
    void setMajor(string m);
    void setYearLevel(int y);
};
#endif
