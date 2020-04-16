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

void GetRational(int *num, int *den){
  while(true){
    string numstr, denstr, r;
    cout << "Please enter a fraction (n/d): " << endl;
      getline(cin, r);
    stringstream rational(r);
    getline(rational, numstr, '/');
    getline(rational, denstr, '/');
    *num = stoi(numstr);
    *den = stoi(denstr);
    if(*den == 0){
      cout << "Denominator cannot be 0";
    }
    else{
      break;
    }
  }
}

void reduce(int *num, int *den){
  int R, gcd;
    R = *num % *den;
  while(R != 0){
    *num = *den;
    *den = R;
    R = *num % *den; 
  }
}

void AddRational(int* anum, int* aden, int num1, int den1, int num2, int den2){
    *anum = (num1 * den2) + (num2 * den1);
    *aden = (den1 * den2);
  //reduce(anum, aden);
}

void SubtactRational(int* anum, int* aden, int num1, int den1, int num2, int den2){
  *anum = (num1 * den2) - (num2 * den2);
  *aden = (den1 * den2);
}

void DisplayRational(int num, int den){
  if(den == 1){
    cout << num << endl;
  }
  else{
    cout << num << "/" << den << endl;
  }
}


void add(){
  system("cls");
  int num1, den1, num2, den2, anum, aden;
  while(true){
    cout << "Addition of Rational Numbers" << endl;
    GetRational(&num1, &den1);
    GetRational(&num2, &den2);
    AddRational(&anum, &aden, num1, den1, num2, den2);
    cout << "The Sum is ";
    DisplayRational(anum, aden);
  }
}

void subtract(){
  system("cls");
  int num1, den1, num2, den2, anum, aden;
  while(true){
    cout << "Subtraction of Rational Numbers" << endl;
    GetRational(&num1, &den1);
    GetRational(&num2, &den2);
    AddRational(&anum, &aden, num1, den1, num2, den2);
    cout << "The Difference is ";
    DisplayRational(anum, aden);
}
