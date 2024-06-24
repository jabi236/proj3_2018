#include "menu.h"

menu::menu(){
    title, errorMsg = "";
    numOpts = 0;
    for(int i = 0; i < MAX_MENU_OPTIONS; i++){
        optDesc[i] = "";
    }
}

void menu::setTitle(string newTitle){
    title = newTitle;
}

void menu::setErrorMsg(string newErrorMsg){
    errorMsg = newErrorMsg;
}

void menu::addOption(char opt, string desc){
    if(numOpts < MAX_MENU_OPTIONS){
        validOpts[numOpts] = opt;
        optDesc[numOpts] = desc;
        numOpts++;
    }
    else{
        cout << "No room for more options\n";
        return;
    }
}

char menu::doMenu(){
    string optionInput;
    char option;
    cout << title << endl;
    for(int i = 0; i < numOpts; i++){
        cout << validOpts[i] << " - " << optDesc[i] << endl;
    }
    cout << "Enter a option: ";
    cin >> optionInput;

    option = toupper(optionInput[0]);

    while(!validOption(option)){
        cout << errorMsg << endl;
        option = doMenu();
    }
    return option;
}

bool menu::validOption(char opt){
    for(int i = 0; i < numOpts; i++){
        if(validOpts[i] == opt){
            return true;
        }
    }
    return false;
}
