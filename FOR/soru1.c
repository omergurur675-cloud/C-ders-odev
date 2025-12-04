/*
SORU 1 : Klavyeden girilen 10 sayının toplamını bulan algoritma tasarlıyınız:

SORU ALGORİTMASI:
1. başla
2. toplam, sayı
3. toplam = 0
4. for (int i = 1; i <= 10; i++)
5. yaz "sayı giriniz"
6. toplam += sayı
7. yaz ("Toplam: %d\n", toplam)
8. bitir

*/


#include<stdio.h>

  int main() {

    int toplam = 0, sayı;

     for (int i = 1; i <= 10; i++) {
  
         printf("%d.Bir sayı giriniz: ", i);
         scanf("%d", &sayı);
         toplam += sayı;
      
     }
     printf("Toplam: %d\n", toplam);
     return 0;
  }