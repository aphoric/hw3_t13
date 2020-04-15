/*Team #13        CSCI/CMPE 1370       Spring 2020     Homework #3
Jesus Guajardo
Jacob Castro
                     ~Description of Program~
*/

#include <iostream>
using namespace std;
void showMenu(){
  cout << "Rational Numbers Calculator" << endl << endl;
  cout << "(A)ddition" << endl;
  cout << "(S)ubtraction" << endl;
  cout << "(Q)uit" << endl << endl;
  cout << "Enter your option: ";
}
int main(){
char option;
    showMenu();
    cin >> option;

cout << option;

return 0;
}
