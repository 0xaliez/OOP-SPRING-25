#ifndef LECTURECOURSE_H
#define LECTURECOURSE_H

#include <iostream>
#include "Course.h"

class LectureCourse : public Course {
public:
    LectureCourse(string code, int cr);
    void calculateGrade() const override;
    void displayInfo() const override;
};

#endif
