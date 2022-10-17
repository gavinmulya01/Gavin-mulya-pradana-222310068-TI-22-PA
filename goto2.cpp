#include <iostream>
using namespace std;

int main (){
  int a, b;
  char lagi;
  atas:
  cout <<"masukan bilangan =";
  cin >> a;
  b = a%2;
  cout <<"nilai bilangan modulus 2 adalah = "<< b;
  cout <<"\n\ningin hitung lagi[Y/T] : ";
  cin >> lagi;
  if(lagi == 'Y' || lagi == 'y')
    goto atas;
  return 0;
  }