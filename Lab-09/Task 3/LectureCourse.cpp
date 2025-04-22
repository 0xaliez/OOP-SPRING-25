#include <iostream>
#include "LectureCourse.h"
using namespace std;

LectureCourse::LectureCourse(string code, int cr) : Course(code, cr) {}

void LectureCourse::calculateGrade() const {
    cout << "Calculating grade for Lecture Course " << courseCode << ": 70% exams, 30% assignments.\n";
}

void LectureCourse::displayInfo() const {
    cout << "Lecture Course: " << courseCode << ", Credits: " << credits << endl;
}
