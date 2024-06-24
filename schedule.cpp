#include "schedule.h"

schedule::schedule(){
    stuId = "";
    numRegCourses= 0;
    for(int i = 0; i < MAX_REG_COURSES; i++){
        course emptyCourse;
        regCourses[i] = emptyCourse;
    }
}
void schedule::setStudentId(string newId){
    stuId = newId;
}

string schedule::getStudentId(){return stuId;}
int schedule::getNumCourses(){return numRegCourses;}
string schedule::getCourseId(int idx){
    if(idx < 0 || idx > MAX_REG_COURSES){
        return "";
    }
    else{
        return regCourses[idx].getId();
    }
}

int schedule::addCourse(string cId){
    if(numRegCourses >= MAX_REG_COURSES - 1){
        return -1;
    }
    regCourses[numRegCourses].setId(cId);
    numRegCourses++;
    return 0;
}

int schedule::dropCourse(string cId){
    for(int i = 0; i < numRegCourses; i++){
        if(regCourses[i].getId() == cId){
            numRegCourses--;

            for(int j = i; j < numRegCourses; j++){
                regCourses[j] = regCourses[j+1];
            }
            regCourses[numRegCourses].setId("");
            return 0;
        }
    }
    return -1;
}

void schedule::print(){
    cout << setw(5) << left << stuId << " " << setw(2) << right << numRegCourses << " " ;

    for(int i = 0; i < numRegCourses; i++){
        cout << regCourses[i].getId() << " ";
    } 
    cout << endl;
}