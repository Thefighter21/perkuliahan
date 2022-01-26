#include <iostream>
 
using namespace std;
 
int main()
{
  string kd_matkul = "KJ09";
  string nama_matkul = "Bahasa Pemograman";
 
  cout << "Kode Matakuliah Anda"<<kd_matkul << endl;
  cout << "Nama Matakuliah Anda"<<nama_matkul << endl;
  
  cout << endl;
 
  cout << "Alamat Memory Kode Matakuliah Anda :"<<&kd_matkul << endl;
  cout << "Alamat Memory Kode Matakuliah Anda :"<<&nama_matkul << endl;
 
  return 0;
} 