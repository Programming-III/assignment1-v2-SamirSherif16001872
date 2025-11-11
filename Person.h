#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;
class Person {
private:
    string name;
    int id;
public:
    Person();
    Person(string n,int i);
    string getName();
    int getId();
    void setName(string n);
    void setId(int i);
    ~Person();
    void display();
};
#endif
