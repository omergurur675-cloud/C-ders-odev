/* 
SORU 3 : Klavyeden girilen iki sayıdan en büyük sayıyı bulan bir algoritma tasarlayınız

SORU ALGORİTMASI:
1-başla
2-a,b
3-if( a < b )
    Yaz"b sayısı büyüktür"
4-if( a > b )
    Yaz "a sayısı büyüktür"
5-else 
    Yaz " iki sayı birbirine eşittir"
6-bitir

*/

#include <stdio.h>

int main() {

    int a, b;

    printf("İki sayı giriniz:");
    scanf("%d %d", &a, &b);

    if (a < b) {
        printf("b sayısı büyüktür\n");
    }
    else if (a > b) {
        printf("a sayısı büyüktür\n");
    }
    else {
        printf("iki sayı birbirine eşittir\n");
    }

    return 0;
}
