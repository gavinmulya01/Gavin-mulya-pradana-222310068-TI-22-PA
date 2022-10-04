#include <iostream>
using namespace std;

string nama, hadiah;
int nilai1,nilai2,nilai3,rata;

int main ()
 {
  
  int x;
  cout << "nama siswa :"; //type a number and press enter
  cin >> nama; //get user input from key board

  cout << "nilai pertandingan I :";
  cin >> nilai1;

  cout << "nilai pertandingan II :";
  cin >> nilai2;

  cout << "nilai pertandingan III :";
  cin >> nilai3;

  rata = (nilai1+nilai2+nilai3)/3;

  if(rata>=85){
    hadiah=" seperangkat komputer core i5 ";

    }else if(rata >=70){
    hadiah=" hadiah uang sebesar Rp.2,500,000 ";

    }else if(rata <=70){
    hadiah=" hadiah hiburan ";
      
    }
   cout <<nama<<" nilai rata-ratanya adalah "<<rata<<" maka dia mendapatkan "<< hadiah;
   
   return 0;
   }
