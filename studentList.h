#pragma once

#include "student.h"

const int MAX_STUDENTS = 50;

class studentList{
    private:
        student stuList[MAX_STUDENTS];
        int numStu; 
    public:
        studentList();
        student search(string searchId);
        student search(int idx);
        void read();
        void print();

};