#include "student.h"

student::student(){
    id, last, first = "";
    tothours = 0;
}
void student::setId(string newId){
    id = newId;
}
void student::setTotHours(int newHrs){
    tothours = newHrs;
}
void student::setLast(string newLast){
    last = newLast;
}
void student::setFirst(string newFirst){
    first = newFirst;
}
string student::getId(){return id;}
int student::getTotHours(){return tothours;}
string student::getLast(){return last;}
string student::getFirst(){return first;}
void student::print(){
    cout << setw(5) << left << id << " " << setw(3) << right << tothours << " " << setw(15) << left << last << " " << setw(15) << left << first << endl;
}