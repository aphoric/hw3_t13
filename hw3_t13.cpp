/*Team #13        CSCI/CMPE 1370       Spring 2020     Homework #3
Jesus Guajardo
Jacob Castro
                     ~Description of Program~
*/

#include <iostream>
#include "hw3functions.h"
using namespace std;

int main(){
    char option = '\0';
    while(true){
        showMenu();
        cin >> option;
        cin.ignore();
    if((option == 'A') || (option == 'a')){
        add();
        break;
    }
    else if((option == 'S') || (option == 's')){
        subtract();
        break;
    }
    else{
        break;
    }
}

return 0;
}
