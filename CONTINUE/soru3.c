/*
SORU 3 : Bu program, 1’den 100’e kadar olan sayılar içinden sadece 5’in katlarını ekrana yazdırır.

SORU ALGORİTMASI:
1- Başla
2- i = 1
3- 100’e kadar i’yi 1 artırarak tekrar et
4-     Eğer i, 5’in katı değilse devam et (atla)
5-     Değilse i’yi yazdır
6- Bitir

*/

#include <stdio.h>

int main() {
    for(int i = 1; i <= 100; i++) {
        if(i % 5 != 0) continue;   
        printf("%d ", i);         
    }
    return 0;
}
