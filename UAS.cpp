#include <iostream>
using namespace std;

struct daftar_angkutan{
    string angkot,bus,elef;
};
struct user_password{
    string username,password;
};
void rafi(){
    //Array harga
    daftar_angkutan dfr[3];
    dfr[0].angkot   = "5.000,00";
    dfr[1].bus      = "15.000,00";
    dfr[2].elef     = "30.000,00";

    //array login
    user_password usp[3];
    usp[0].username = "rafi";
    usp[1].password = "123";

        login:
        string uss,pss;
        cout << "masukan username :";
        cin >> uss;
        cout << "masukan password :";
        cin >> pss;
            if( uss == usp[0].username && pss == usp[1].password ){
                goto menu;
            } else if( uss!= usp[0].username && pss != usp[0].username ){
                system("cls");
                cout << "username dan password salah\n";
                goto login;
            } else if ( uss != usp[0].username ) {
                system("cls");
                cout << "username salah\n";
                goto login;
            } else if ( pss != usp[0].username ) {
                system("cls");
                cout << "password salah\n   ";
                goto login;
            }

    menu:
    int pilihan;
    char ulang;
    do
        {

                system("cls");
                cout << "====daftar harga angkutan umum====" << endl;
                cout << "1.Angkot \t\n";
                cout << "2.Bus \t\n";
                cout << "3.Elef \t\n";
                cout << "4.Exit \t\n";
                cout << endl;

                cout << "Pilihan anda: ";
                cin >> pilihan;

            switch(pilihan){
            case 1:
                cout << "Harga angkot : ";
                cout << dfr[0].angkot << endl;
                break;
            case 2:
                cout << "Harga bus : ";
                cout << dfr[1].bus << endl;
                break;
            case 3:
                cout << "Harga elf : ";
                cout << dfr[2].elef << endl;
                break;
            case 4:
                goto exit;
                break;
            default:
                cout << "Menu tidak tersedia" << endl;
            }
                cout << endl;
                cout << "Ingin memilih menu lain (y/t)? ";
                cin >> ulang;
                cout << endl;
        } while (ulang!= 't');

        exit:
          cout << "Terimakasih...";


}
int main(){
    rafi();
    return 0;
}
