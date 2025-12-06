/*
SORU 10 : Bu program, 0’dan 48’e kadar olan sayılar içinden sadece 7’nin katlarını ekrana yazdırır.

SORU ALGORİTMASI:
1- Başla
2- i = 0
3- 49’a kadar i’yi 1 artırarak tekrar et
4-     Eğer i, 7’nin katı değilse devam et (atla)
5-     Değilse i değerini yazdır
6- Bitir

*/


#include<stdio.h>

  int main() {

    int i;

    for( i = 0; i < 49; i++) {

        if( i % 7 != 0){
            continue;
        }
         printf("%d\n",i);
    }
    
    return 0;
  }
