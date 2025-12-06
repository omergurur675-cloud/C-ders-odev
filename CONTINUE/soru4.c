/*
SORU 4 : Bu program, 5 tane girilen not içinden sadece 50 ve üzeri olanları ekrana yazdırır.

SORU ALGORİTMASI:
1- Başla
2- 5 kez tekrar et
3-     notu oku
4-     Eğer not < 50 ise devam et (atla)
5-     Değilse notu yazdır
6- Bitir

*/

#include <stdio.h>

int main() {
    int not;

    for(int i = 0; i < 5; i++) {
        scanf("%d", &not);
        if(not < 50) continue;
        printf("%d ", not);
    }
}
