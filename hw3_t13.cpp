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
    showMenu();
    cin >> option;
if(option == 'A'){
    add();
}
else if(option == 'S')
    subtract();
return 0;
}
