#pragma once

#include "course.h"

const int MAX_COURSES = 50;

class catalog{
    private:
        course courses[MAX_COURSES];
        int numCourses;
    public:
        catalog();
        course getCourse(int idx);
        int getNumCourses();
        int search(string id);
        void read();
        void print();
};