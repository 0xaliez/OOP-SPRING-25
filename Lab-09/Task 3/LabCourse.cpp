#include <iostream>
#include "LabCourse.h"
using namespace std;

LabCourse::LabCourse(string code, int cr) : Course(code, cr) {}

void LabCourse::calculateGrade() const {
    cout << "Calculating grade for Lab Course " << courseCode << ": 50% lab work, 30% project, 20% report.\n";
}

void LabCourse::displayInfo() const {
    cout << "Lab Course: " << courseCode << ", Credits: " << credits << endl;
}
