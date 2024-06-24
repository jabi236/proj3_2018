#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

class student{
    friend class studentList;
    private:
        string id;
        int tothours;
        string last;
        string first;
    public:
        student();
        void setId(string newId);
        void setTotHours(int newHrs);
        void setLast(string newLast);
        void setFirst(string newFirst);
        string getId();
        int getTotHours();
        string getLast();
        string getFirst();
        void print();
};