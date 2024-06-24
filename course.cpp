#include "course.h"
//-------------------------------------------------------------------
//                               constructor
//-------------------------------------------------------------------
course::course(){
    id, department, num, title = "";
    hours = 0;
}
//-------------------------------------------------------------------
//                                  sets
//-------------------------------------------------------------------
void course::setId(string newId){
    id = newId;
}
void course::setDepartment(string newDep){
    department = newDep;
}
void course::setNum(string newNum){
    num = newNum;
}
void course::setHours(int newHours){
    if(newHours < 0){
        hours = 0;
    }
    else{
        hours = newHours;
    }
}
void course::setTitle(string newTitle){
    title = newTitle;
}
//-------------------------------------------------------------------
//                                  gets
//-------------------------------------------------------------------
string course::getId(){return id;}
string course::getDepartment(){return department;}
string course::getNum(){return num;}
int course::getHours(){return hours;}
string course::getTitle(){return title;}
//-------------------------------------------------------------------
//                                  print
//-------------------------------------------------------------------
void course::print(){
    cout << setw(5) << left << id << " " << setw(4) << left << department << " " << setw(4) << left << num << " " << setw(3) << right << hours << " " << setw(20) << left << title << endl;
}