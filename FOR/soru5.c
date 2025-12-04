/*
SORU 5 : girilen 10 sayının tek çift negatif oldugu bulan ve ekrana yazan bir algoritma tasarlayınız:

SORU ALGORİTMASI:
1. başla
2. sayı, tek, çift, negatif
3. tek, çift, negatif = 0
4. for ( int i = 1; i <= 10; i++)
      yaz "bir sayı giriniz"
      if ( sayı % 2 == 0 ) çift++
      if ( sayı % 2 == 1 ) tek++
      else( sayı < 0 ) negatif++
5. yaz "ekrana yazdır"
6. bitir

*/

#include<stdio.h>

  int main() {

    int sayı, tek, çift, negatif;
    tek = 0, çift = 0, negatif = 0;

    for( int i = 1; i <= 10; i++) {
        printf("%d.Bir sayı giriniz: ", i);
        scanf("%d", &sayı);

        if ( sayı < 0 ) negatif++;
        if ( sayı % 2 == 1 ) tek++;
        else
         çift++;

    }
    
    printf("SONUÇ: \ntek: %d\nçift: %d\nnegatif: %d\n", tek, çift, negatif);

     return 0;
  }