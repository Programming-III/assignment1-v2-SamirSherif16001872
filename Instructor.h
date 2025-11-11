#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
class Instructor:public Person {
private:
    string department;
    int experienceYears;
public:
    Instructor();
    Instructor(string n,int i,string dep,int ey);
    ~Instructor();
    void display();
    string getDepartment();
    int getExperienceYears();
    void setDepartment(string d);
    void setExperienceYears(int ey);
};
#endif
