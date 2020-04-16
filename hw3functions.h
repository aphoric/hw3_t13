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

void getRational(int *num, int *den){
  while(true){
    string numstr, denstr, str;
    cout << "Please enter a fraction (n/d): " << endl;
      getline(cin, str);
    stringstream s_string1(str);
    getline(s_string1, numstr, '/');
    getline(s_string1, denstr, '/');
    *num = stoi(numstr);
    *den = stoi(denstr);
      if(*den == 0){
        cout << "Denominator cannot be 0 " << endl;
      }
      else{
        break;
      }
  }
}

void AddRational(int* anum, int* aden, int num1, int den1, int num2, int den2){
    *anum = (num1 * den2) + (num2 * den1);
    *aden = (den1 * den2);
}

void SubtactRational(){

}

void DisplayRational(){

}

void reduce(){
 
}

void add(){
  system("cls");
   
}

void subtract(){
   system("cls");
   cout << "sub";
}
