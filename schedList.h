#pragma once

#include "schedule.h"

const int MAX_SCHEDULES = 50;

class schedList{
    private:
        int numSchedules;
        schedule schedules[MAX_SCHEDULES];
    public:
        schedList();
        int getNumSchedules();
        schedule getSchedule(int idx);
        schedule getSchedule(string sId);
        void addSchedule(schedule s);
        void print();
        void read();
        void write();
};