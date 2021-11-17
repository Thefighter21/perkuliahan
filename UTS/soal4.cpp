#include <stdio.h>
void cetakUmur(int *umur){
printf("Berarti Usia Kalian sekarang adalah  %d tahun", *umur);
}
int main(){
int angka=21;
cetakUmur(&angka);
getchar();
return 0;
}