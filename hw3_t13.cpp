/*Team #13        CSCI/CMPE 1370       Spring 2020     Homework #3
Jesus Guajardo
        Addition and Subtraction Calculator for Rationals 
        while also returning the answer in its simplest form
*/

#include <iostream>
#include <stdlib.h>
#include "hw3functions.h"
using namespace std;

int main(){
    char option = '\0';
    system("cls");
    while(true){
        showMenu();
        cin >> option;
        cin.ignore();
    if((option == 'A') || (option == 'a')){
        add();
    }
    else if((option == 'S') || (option == 's')){
        subtract();
    }
    else{
        break;
    }
}
        cout << "Thank You!" << endl;
return 0;
}
