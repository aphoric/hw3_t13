/*Team #13        CSCI/CMPE 1370       Spring 2020     Homework #3
Jesus Guajardo*/
#include <iostream>
#include <sstream>
#include <string>
#include <stdlib.h>
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
      cout << "Denominator cannot be 0" << endl;
    }
    else{
      break;
    }
  }
}

//Elucid's Algorithm, Reduces the result from AddRational and Subtract Rational
void reduce(int *num, int *den){
  int gcd, R, a, b;
a = *num;
b = *den;
if(a < 0){
  a *= -1;
}
R = a % b;
  while(R != 0){
    a = b;
    b = R;
    R = a % b;
  }
  gcd = b;
  *num /= gcd;
  *den /= gcd;
} 

//Adds the given rationals: (a/b) + (c/d) = (a*d)+(c*b)/(b*d)
void AddRational(int* anum, int* aden, int num1, int den1, int num2, int den2){
    *anum = (num1 * den2) + (num2 * den1);
    *aden = (den1 * den2);
  reduce(anum, aden);
}

//Subtracts the given rationals: (a/b) - (c/d) = (a*d)-(c*b)/(b*d)
void SubtractRational(int* anum, int* aden, int num1, int den1, int num2, int den2){
  *anum = (num1 * den2) - (num2 * den1);
  *aden = (den1 * den2);
  reduce(anum, aden);
}


//Displays the result after it was reduced
void DisplayRational(int num, int den){
  if(den == 1){
    cout << num << endl;
  }
  else if(num == 0){
      cout << num << endl;
  }
  else{
    cout << num << "/" << den << endl;
  }
}

//Calls to functions to get rational, then add them and reduce 
void add(){
  int num1, den1, num2, den2, anum, aden;
  while(true){
    system("cls");
    cout << "Addition of Rational Numbers" << endl;
      GetRational(&num1, &den1);
      GetRational(&num2, &den2);
      AddRational(&anum, &aden, num1, den1, num2, den2);
    cout << "The Answer for ";
    cout << num1 << "/" << den1 << " + " << num2 << "/" << den2 << " = ";
      DisplayRational(anum, aden);
    char choice = '\0';
    cout << "Do you want to do more additions? (Y/N):";
      cin >> choice; cin.ignore();
    if (choice == 'N' || choice == 'n'){
       break;
    }
  }
}

//Calls to functions to get rational, then subtract them and reduce 
void subtract(){
  int num1, den1, num2, den2, anum, aden;
  while(true){
    system("cls");
    cout << "Subtraction of Rational Numbers" << endl;
      GetRational(&num1, &den1);
      GetRational(&num2, &den2);
      SubtractRational(&anum, &aden, num1, den1, num2, den2);
    cout << "The Answer for ";
    cout << num1 << "/" << den1 << " - " << num2 << "/" << den2 << " = ";
      DisplayRational(anum, aden);
    char choice = '\0';
    cout << "Do you want to do more subtractions? (Y/N):";
      cin >> choice; cin.ignore();
    if (choice == 'N' || choice == 'n'){
      break;
    }
  }
}
