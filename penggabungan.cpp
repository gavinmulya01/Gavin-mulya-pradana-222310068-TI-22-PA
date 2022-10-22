#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;
int main(){
  char a1[20], a2[20];

  cout << " masukan kata pertama = ";
  cin >> a1;
  cout << " masukan kata kedua = ";
  cin >> a2;

  strcat(a1,a2);
  cout << " hasil penggabungannya = " <<a1;
  getchar();
  }