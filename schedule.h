#pragma once

#include "course.h"

const int MAX_REG_COURSES = 10;

class schedule{
    friend class schedList;
    private:
        string stuId;
        course regCourses[MAX_REG_COURSES];
        int numRegCourses;
    public:
        schedule();
        void setStudentId(string newId);
        string getStudentId();
        int getNumCourses();
        string getCourseId(int idx);
        int addCourse(string cId);
        int dropCourse(string cId);
        void print();
};