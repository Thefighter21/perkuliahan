Source Code 1

Berikut Penjelasan Source Code 1 :

#include <stdio.h> void cetakUmur(int *umur){

printf("Halo, Umur kamu adalah %d tahun", *umur);

} int main(){

int angka=20; cetakUmur(&angka); getchar(); return 0; }

void cetakUmur(int *umur){ printf("Halo, Umur kamu adalah %d tahun", *umur); adalah untuk memanggil variabel usia

int angka=20; Adalah mendeklarasikan umur didalam fungsi main

cetakUmur(&angka); Merupakan memanggil cetak dengan mengirim isi umur

getchar(); Digunakan untuk membaca data yang bertipe karakter, penggunaan fungsi getchar harus diakhiri dengan penekanan tombol enter. Karakter yang dimasukkan akan terlihat pada layar dan pergantian baris akan dilakukan secara otomatis tanpa penekanan tombol enter.

return 0; Menyatakan hasil keluaran dari fungsi main() adalah 0. Pada C++, return 0 dalam main() menyatakan bahwa program berakhir dengan normal.


Dalam source ke 2 ini membahas tentang Iterasi sederhana

#include <iostream>       
using namespace std;
main (){       
 int n,k;    
 cout<<"Masukkan sebuah angka ";cin>>k;
 for (n=0; n<=k; n++)
 cout<<"angka = "<<n<<endl;
}
Dalam source ke 2 ini membahas tentang Iterasi sederhana
#include = merupakan Preprocessor Directive yang mana berfungsi sebagai sebuah intruksi untuk memanggil file-header yang akan di gunakan yang mana dalam hal ini iostream
iostream = yang ktai sebut file-header yang mana yang akan kita bahas dalam artikel ini. Yang mana iostream adalah file header yang merupakan kepanjangan dari Input Output Stream yang digunakan untuk memanggil fungsi yang ada pada library file-header tersebut seperti fungsi input yaitu cin dan fungsi output yaitu  cout.
using namespace std; = fungsinya ialah berguna untuk meminimalisir kesalahan akbiat tidak dikenalinya fungsi cout dan cin apabila dalam penulisan secara langsung. 
main (){    = merupakan sebuah titik awal dan titik akhir eksekusi program dan tanda { di awal fungsi merupakan awal tubuh fungsi dan } di akhir fungsi merupakan akhir sebuah tubuh fungsi sekaligus akhir dari eksekusi program, jangan keliru ya antara fungsi dan tubuh fungsi.
int n,k;    (tipe data integer untuk mendeklarasikan n (nomer awal) dan k (sampai no yang dipilih)
cout<<"Masukkan sebuah angka ";cin>>k;  =  untuk menampilkan masukan sebuah angka  dan cin>> k adalah untuk memasukan data ke (k).
for (n=0; n<=k; n++)  = merupakan perulangan for berfungsi untuk menyimpan nilai hitungan. Hitungan akan dimulai dari 0 (n = 0); , hitungannya sampai dari data (k) yang sudah di isi. n < k, Lalu di setiap perulangan n akan bertambah +1 (n++).
cout<<"angka = "<<n<<endl; = merupakan menampilkan hasil data dari nilai n   