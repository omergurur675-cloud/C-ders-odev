/*
SORU 6 : Bir öğrencinin sınav notlarını harf nota çevirme ve ortalaması alınacaktır bunu ekrana yazan bir algorıtma tasarlayınız:

SORU ALGORİTMASI:
1. başla
2. not, toplam ort
3. for ( i = 1, i <= 100, i yi bir arrtir)
      yaz notları
      toplam += not
4. ort = toplam / 5.0
5. if ( not >= 90 ) = AA
   else lf ( not >= 80 ) = BA
   else lf ( not >= 70 ) = BB
   else lf ( not >= 60 ) = CB
   else lf ( not >= 50 ) = CC
   elSe = FF
6. bitir

*/

#include<stdio.h>

  int main () {

    int not, toplam = 0;

    for( int i = 1; i <= 5; i++) {
        printf("%d. dersi giriniz: ", i);
        scanf("%d", &not);
        toplam += not;
    }

      float ort = toplam / 5.0;

      if ( not >= 90 ) printf("Harf notunuz: AA\n");
      else if ( not >= 80 ) printf("BA\n");
      else if ( not >= 70 ) printf("BB\n");
      else if ( not >= 60 ) printf("CB\n");
      else if ( not >= 50 ) printf("CC\n");
      else printf ("FF\n");

      return 0;
  }