/*
SORU 6 : Bir oyuncu canı 0 olana kadar oyuna devam eden ve bunu yazan bir algoritma tasarlayınız:

SORU ALGORİTMASI:
1.başla
2.can, hasar
3. can = 100, hasar = 0
4. do 
    yaz "hasarımızı giriniz:"
    if ( can > 0 )
    yaz "canınız:"
    else
    yaz " oyun bitti:"
5. while ( can > 0 )
6. bitir

*/


#include<stdio.h>

 int main() {

    int can = 100, hasar = 0;

    do {
        printf("Alacağın hasarı giriniz:");
        scanf("%d", &hasar );
        can -= hasar;

        if ( can > 0 ) {
        printf("Canınız: %d\n", can);
        }

        else {
        printf("Oyun bitti!\n");
        }
    }
    while( can > 0 );

     return 0;
 }