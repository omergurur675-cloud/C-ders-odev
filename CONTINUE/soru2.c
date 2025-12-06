/*
SORU 2 : Bu program 0’dan 10’a kadar olan sayılar içinde sadece çift olanları ekrana yazdırır.

SORU ALGORİTMASI:
1- Başla
2- i = 0
3- 10’a kadar i’yi 1 artırarak tekrar et
4-     Eğer i tek ise devam et (atla)
5-     Değilse i değerini yazdır
6- Bitir

*/


#include<stdio.h>

  int main() {

    int i;

    for(i = 0; i <= 10; i++) {

        if ( i % 2 == 1){
            continue;
        }
   
        printf("%d\n",i);
    
    }
   
     return 0;
  }
