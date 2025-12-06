/*
SORU 6 : Bu program, 0’dan 30’a kadar olan sayılardan sadece 3’ün veya 5’in katı olanları ekrana yazdırır ve en sonda i’nin son değerini gösterir.

SORU ALGORİTMASI:
1- Başla
2- i = 0
3- 30’a kadar i’yi 1 artırarak tekrar et
4-     Eğer i ne 3’ün katı ne de 5’in katı ise devam et (atla)
5-     Değilse i’yi yazdır
6- Döngü bitince i’nin son değerini yazdır
7- Bitir

*/

#include<stdio.h>

  int main() {

    int i;

    for( i = 0; i <= 30; i++) {
        if( i % 3 != 0 && i % 5 != 0) {
            continue;
        }
        printf("%d\n",i);

    }
     printf("%d",i);
      
     return 0;
  }
