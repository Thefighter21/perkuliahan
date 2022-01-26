#include <iostream>
#include <fstream>

using namespace std;

int pilih;
char kembali;

void insert()
{
    string kd_matkul;
    string nama_matkul;
    ofstream file;
    file.open("soalganjil.txt", ios::app);
    cout << "Masukan Kode Mata kuliah yang anda pilih: "; cin >> kd_matkul;
    file << kd_matkul;
    file <<"\n";
    cout << "Masukan Nama Mata kuliah yang anda pilih: "; cin >> nama_matkul;
    file << nama_matkul;
    file.close();
}

void view(){
    string getdata;
    string kd_matkul;
    string nama_matkul;
    ifstream txt ("soalganjil.txt");
    if(txt.is_open())
    {
        while(! txt.eof())
        {
            getline(txt, kd_matkul);
            cout<<"Kode Mata kuliah yang anda pilih:"<< kd_matkul<<endl;
            getline(txt, nama_matkul);
            cout<<"Nama Mata kuliah yang anda pilih:"<< nama_matkul<<endl;
        }
    }
}

int main(){
    do{
        cout<<"=======   Menu Utama   ======="<<endl;
        cout<<"\n 0. Keluar(Exit)"<<endl;
        cout<<"\n 1. Buat(Create) "<<endl;
        cout<<"\n 2. Baca(Read) "<<endl;
        cout<<"\n Pilihan Anda : "; cin>>pilih;

        switch(pilih){
            case 0:
                cout<<"Terima kasih dan sampai jumpa\n"<<endl;
                return 0;
            case 1:
				insert();
                break;
            case 2:
                cout << "List Data Anda\n";
				view();
                break;
            default:
                cout<<"Pilihan Salah"<<endl;
                break;
            }
            cout<<"Ingin memilih menu lain (y/t)? ";
            cin>>kembali;
            cout<<endl;
        }
        while (kembali!= 't');
        cout<<"Terima kasih dan sampai jumpa"<<endl;
    return 0;
}