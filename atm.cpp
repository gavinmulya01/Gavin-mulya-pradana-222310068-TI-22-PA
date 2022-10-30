#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int pin=1234;  
    cout<<"\n\t Masukkan Pin Anda :";
    cin>>pin;
    if (pin==124578)
    {
        char y;
        cout<<" \t Pin Yang Anda Masukkan Benar! \n";
        cout<<" \t Tekan Tombol 'y' kemudian enter : ";
        cin>>y;
    }
    else
    {
        cout<<"Pin Yang Anda Masukkan Salah!!! \n";
        exit(0);
    }
        int pilihan, saldo=5000000, tf, tn, sisa, tujuan, top;
        menu :
        system("cls");
        cout<<"\n";
        cout<<"\t ===BANK MANJA=== \n";
        cout<<"\n";
        cout<<"\tMENU : \n\n";
        cout<<"\t\t1. Cek Saldo \n";
        cout<<"\t\t2. Transfer \n";
        cout<<"\t\t3. Tarik Tunai \n";
        cout<<"\t\t4. TopUp Tunai \n";
        cout<<"\t\t5. Exit \n\n";
        cout<<"\t  Masukkan Pilihan Anda :";
        cin>>pilihan;
            switch(pilihan)
    {
        case 1:
            {
                menu1:
                system("cls");
                char a;
                cout<<"\n\n";
                cout<<" Saldo Anda "<<saldo<<endl<<endl<<endl;
                cout<<" Kembali Ke Menu Utama y/n :"; cin>>a;
                if (a=='y'||a=='Y')
                {
                    goto menu;
                }
                else if(a=='n'||a=='N')
                {
                    goto menu1;
                }
                break;
            }
        case 2:
            {
                menu2:
                system("cls");
                char a;
                cout<<"\n\n";
                cout<<" Transfer \n";
                cout<<" Masukkan Rekening Tujuan : \n"; cin>>tujuan;
                cout<<" Masukkan Jumlah Transfer : \n"; cin>>tf;
                sisa=saldo-tf;
                cout<<" Sisa Saldo Saat Ini : \n"<<sisa;
                cout<<" Kembali Ke Menu Utama y/n :"; cin>>a;
                if (a=='y'||a=='Y')
                {
                    goto menu;
                }
                else if(a=='n'||a=='N')
                {
                    goto menu2;
                }
                break;
            }
        case 3:
            {
                menu3:
                system("cls");
                char a;
                cout<<"\n\n";
                cout<<" Tarik Tunai \n";
                cout<<" Masukkan Jumlah Yang Akan Ditarik : \n"; cin>>tn;
                sisa=saldo-tn;
                cout<<"Sisa Saldo Sekarang :"<<sisa<<endl;
                cout<<" Kembali Ke Menu Utama y/n :"; cin>>a;
                if (a=='y'||a=='Y')
                {
                    goto menu;
                }
                else if(a=='n'||a=='N')
                {
                    goto menu3;
                }
                break;
            }
        case 4:
            {
                menu4:
                system("cls");
                char a;
                cout<<"\n\n";
                cout<<" TopUp Tunai \n";
                cout<<" Masukkan Jumlah TopUp : \n"; cin>>top;
                sisa=saldo+top;
                cout<<" Anda Berhasil TopUp \n";
                cout<<"Jumlah saldo ketika ini :"<<sisa<<endl;
                cout<<" Kembali Ke Menu Utama y/n :"; cin>>a;
                if (a=='y'||a=='Y')
                {
                    goto menu;
                }
                else if(a=='n'||a=='N')
                {
                    goto menu4;
                }
                break;
            }
        case 5:
            {
                char a;
                system("cls");
                cout<<"\n\n";
                cout<<"Apakah Anda Yakin Akan Keluar : y/n \n";
                cin>>a;
                if (a=='y'||a=='Y')
                {
                cout<<" Terimakasih Telah Menggunakan layanan Kami";
                exit (0);
                }
                else if(a=='n'||a=='N')
                {
                    goto menu;
                }
            }
    }
}