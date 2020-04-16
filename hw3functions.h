#include <iostream>
#include <sstream>
using namespace std;

void showMenu(){
  cout << "Rational Numbers Calculator" << endl << endl;
  cout << "(A)ddition" << endl;
  cout << "(S)ubtraction" << endl;
  cout << "(Q)uit" << endl << endl;
  cout << "Enter your option: ";
}

void getRational(int *num, int *den);
  string numstr, denstr, str;
  cout << "Please enter a fraction (n/d): " << endl;
    getline(cin, str);
    