#ifndef LABCOURSE_H
#define LABCOURSE_H

#include <iostream>
#include "Course.h"

class LabCourse : public Course {
public:
    LabCourse(string code, int cr);
    void calculateGrade() const override;
    void displayInfo() const override;
};

#endif
