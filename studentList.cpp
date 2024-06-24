#include "studentList.h"

studentList::studentList(){
    numStu = 0;
    for(int i = 0; i < MAX_STUDENTS; i++){
        student emptyStudent;
        stuList[i] = emptyStudent;
    }
}
student studentList::search(string searchId){
    for(int i = 0; i < numStu; i++){
        if(stuList[i].id == searchId){
            return stuList[i];
        }
    }
    student emptystudent;
    return emptystudent;
}
student studentList::search(int idx){
    if(idx < 0 || idx > MAX_STUDENTS){
        student emptystudent;
        return emptystudent;
    }
    return stuList[idx];
}
void studentList::read(){
    ifstream f;
    string filename = "stuList.txt";
    f.open(filename);
    if(f.fail()){
        cout << "Unable to open " << filename << endl;
        return;
    }
    string id, last, first;
    int tothours;
    f >> numStu;
    for(int i = 0; i < numStu; i++){
        f >> id >> last >> first >> tothours;
        stuList[i].setId(id);
        stuList[i].setFirst(first);
        stuList[i].setLast(last);
        stuList[i].setTotHours(tothours);
    }
    f.close();
}
void studentList::print(){
    cout << "================ STUDENT LIST (" << numStu << ") ========\n"
         << "IDNUM HRS LAST            FIRST\n"
         << "----- --- --------------- ---------------\n";
    for(int i=0; i < numStu; i++){
        stuList[i].print();
    }
    cout << endl;
}