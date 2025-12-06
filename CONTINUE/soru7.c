/*
SORU 7 : Bu program, kullanıcıdan 10 kez sayı alır ve sadece tek olan sayıları ekrana yazdırır.

SORU ALGORİTMASI:
1- Başla
2- i = 0
3- 10 kere tekrar et
4-     Kullanıcıdan sayı s al
5-     Eğer s çift ise devam et (atla)
6-     Değilse s değerini "tek sayı" olarak yazdır
7- Bitir

*/

#include<stdio.h>

  int main() {

    int s, i;

    for( i = 0; i <= 10; i++) {
        printf("Bir sayı giriniz: ");
        scanf("%d", &s);

        if( s % 2 == 0) {
            continue;
        }
         printf("Tek olan sayılar: %d\n",s);   
    }
      return 0;
  }
