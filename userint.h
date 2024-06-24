#pragma once
//----------------------------------------------------------------------
//                         userint class
//----------------------------------------------------------------------
// This class implements the user interface for the Student Course
// Registration project.
//----------------------------------------------------------------------
#include <iostream>
#include <iomanip>
using namespace std;
#include "schedList.h"
#include "studentList.h"
#include "catalog.h"
#include "menu.h"

class userint {
public:
	userint();
	void go();
private:
	schedList   scList;
	catalog     cat;
	studentList stuList;
	menu        mainMenu;
	menu        regMenu;
	void registerStudent();
	void printSchedule(student stu, schedule sched);
	void addCourse(student stu, schedule & sched);
	void dropCourse(student stu, schedule & sched);
};