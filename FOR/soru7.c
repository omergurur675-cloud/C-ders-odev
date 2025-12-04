/*
SORU 7 : Bir kullanıcının 1 yıl boyunca biriktirdiği parasını ekrana ay ay ekrana giren ve toplam biriktirdiği parasını gösteren bir 
bir algoritma tasarlayınız.

SORU ALGORİTMASI:
1. başla
2. para, toplam
3. toplam = 0
4. for ( i = 1, i <= 12, i bir arttır)
       yaz "bu ay kaç para biriktirdiniz"
       toplam += para
5. yaz " yıl boyu biriktirdiğiniz para" 
6. sonucu ekrana verir
7. bitir

*/


#include<stdio.h>

  int main() {

    int para, toplam = 0;

     for( int i = 1; i  <= 12; i++) {
        printf("%d. ayda kaç para biriktirdin: ", i);
        scanf("%d", &para);
        toplam += para;
     }

      printf("Yıl boyu biriktirdiğiniz toplam paranız :%d TL\n", toplam);

       return 0;
  }