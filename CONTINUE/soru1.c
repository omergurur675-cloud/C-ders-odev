/*
SORU 1 : Bu program, 1’den 20’ye kadar olan sayılar içinden sadece tek sayıların toplamını hesaplar

SORU ALGORİTMASI:
1- Başla
2- toplam = 0
3- i = 1
4- 20’ye kadar i’yi 1 artırarak tekrar et
5-     Eğer i çift ise devam et (atla)
6-     Değilse toplam = toplam + i
7- Döngü bitince toplam değerini yazdır
8- Bitir

*/

#include<stdio.h>

  int main() {

    int i, toplam = 0;

    for(i = 1; i <= 20; i++) {

        if (i % 2 == 0) {
            continue;
        }
        toplam += i;

    }
    printf("Toplam = %d",toplam);

     return 0;
  }
