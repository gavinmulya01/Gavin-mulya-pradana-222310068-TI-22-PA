#include <iostream>
using namespace std;

int main(){
int a = 3; int b = 2; int c = 1, bil;
  cout << "bil-A | bil-B | bil-C\n";
  cout <<"=========================";
  for(bil = 1;bil <= 10; ++bil){
    a+=b; b+=c; c+=2;
    cout << "\n" << a <<"\t|" << b <<"\t |"<< c;
    if( c == 13)
      break;
    }
  return 0;
  }
    