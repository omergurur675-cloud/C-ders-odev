/*
SORU 3 : Kullanıcıdan girilen 5 sayıyın ortalamasını bulan ve ekrana yazan bir algoritma tasarlayınız:

SORU ALGORİTMASI:
1. başla
2. n,ort, toplam
3. n = 0, toplam = 0
3. for ( n = 0; n <= 5; n++)
      yaz "kullanıcıdan bir sayı giriniz"
      toplam += n
4. ort = toplam / 5.0
5. yaz "ort yı ekrana ver"
6.bitir

*/

#include<stdio.h>

  int main() {

    int n, toplam = 0;

    for ( n = 1; n <= 5; n++) {
        printf(" Lütfen bir sayı giriniz: " ,n);
        scanf("%d", &n);
        toplam += n;
    }
    float ort = toplam / 5.0;
    printf("%2.f", ort);
    
     return 0;
  }

