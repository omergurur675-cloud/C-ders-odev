/*
SORU 2 : 1 den 100 e kadar olan çift sayıları toplayan ve ekrana veren bir algoritma tasarlayınız:

SORU ALGORİTMASI:
1. başla
2. n = 0, toplam = 0
3. while ( n <= 100 )
     toplam += n
     n += 2
4.yazdır
bitir

*/

#include<stdio.h>

 int main () {

    int n = 0, toplam = 0;

    while ( n <= 100 ) {
        toplam += n;
        n += 2;
    }
    printf("%d, toplam:",toplam);

     return 0;
 }