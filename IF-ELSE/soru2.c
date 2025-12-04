/*
SORU 2 : kkavyeden girilen bir sayının tek mi yoksa çiftmi olduğunu gösteren bir algoritma tasarlayınız

SORU ALGORİTMASI:
1-başla
2-klavyeden bir sayı gir = a
3- if( a % 2 = 0 )
    Yaz "sayı çifftir"
4-else
    Yaz "sayı tektir"
5-bitir

*/

#include <stdio.h>

int main() {

    int S1;

    printf("bir sayı giriniz:");
    scanf("%d", &S1);

    if (S1 % 2 == 0) {
        printf("sayı çifttir\n");
    }
    else {
        printf("sayı tektir\n");
    }

    return 0;
}
