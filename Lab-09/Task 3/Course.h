#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>
using namespace std;

class Course {
protected:
    string courseCode;
    int credits;

public:
    Course(string code, int cr) : courseCode(code), credits(cr) {}
    virtual void calculateGrade() const = 0;
    virtual void displayInfo() const = 0;
    virtual ~Course() {}
};

#endif
