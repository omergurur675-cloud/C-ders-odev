/*
SORU 10 : Bir sporcu günlük koşma mesafelerini kayıt altına alıyor. ve 10 günün sonunda toplam mesafesini ve en çok mesafe koştuğunu 
gösteren ve ekrana yazan bir akgoritma tasalayınız.

SORU ALGORİTMASI:
1. başla
2. mesafe, max, toplam
3. max = 0, toplam = 0
4. for( int i = 1; i <= 10; i++)
      yaz " o gün toplam koşulan mesafe"
      toplam += mesafe
      if ( mesafe > max ) max = mesafe
5. yaz "toplam mesafe"
   yaz "en uzun mesafe"
6. bitir

*/

#include<stdio.h>

 int main() {

    int mesafe, max = 0, toplam = 0;

     for( int i = 1; i <= 10; i++) {
        printf("%d. gün toplam koşulan mesafe: ", i);
        scanf("%d", &mesafe);
        toplam += mesafe;

        if ( mesafe > max ) max = mesafe;
     }

     printf("Toplam mesafe: %d m\n", toplam);
     printf("En uzun mesafe: %d m\n", max);

      return 0;
 }