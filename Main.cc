//
// Created by DongChan on 2020/9/10.
//
#include <iostream>

void arith();

using namespace std;

void hexoct1(){
  int chest = 42;
  int waist = 0x42;
  int inseam = 042;

  cout << "Monsieur cuts a striking figure!\n";
  cout << "chest = " << chest << " (42 in decimal)\n";
  cout << "waist = " << waist << "\n";
  cout << "inseam = " << inseam << "\n";
}

void hexoct2(){
  int chest = 42;
  int waist = 42;
  int inseam = 42;

  cout << "Monsieur cuts a striking figure!"  << endl;
  cout << "chest = " << chest << " (decimal for 42)" << endl;
  cout << hex;
  cout << "waist = " << waist << " (hexadecimal for 42)" << endl;
  cout << oct;      // manipulator for changing number base
  cout << "inseam = " << inseam << " (octal for 42)" << endl;


}
int main(){
  cout << "Come on C++" << endl;
//  arith();
  hexoct2();
}


void arith() {
  float hats, heads;

  cout.setf(ios_base::fixed, ios_base::floatfield);
  cout << "Enter a number: ";
  cin >> hats;
  cout << "Enter another number: ";
  cin >> heads;

  cout << "hats = " << hats << "; heads = " << heads;
  cout << "hats + heads = " << hats + heads << endl;

}