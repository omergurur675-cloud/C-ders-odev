/*
SORU 6 : Gizli bir şifreyi kullanıcı sayı tahmin ederek o şifreyi 3 hak ile bulmaya çalışanve  yazabilen bir algoritma tasarlayınız.

SORU ALGORİTMASI:
1. başla
2. tahmin, gizli_ş, hak
3. gizli_ş = 1234, hak = 3
4. while ( tahmin != gizli_ş )
    yaz "şifre yanlış tekrar deneyiniz tahmin hakkınız 2 kaldı!"
    hak--
    yaz 
5. bitir

*/

#include <stdio.h>

int main() {
    int gizli_sifre = 1234;  
    int tahmin;
    int hak = 3;           
    int sayac = 0;

    printf("Sayi tahmin oyununa hosgeldiniz! 3 hak ile gizli sayiyi bulun.\n");

    while(sayac < hak) {
        printf("Tahmininizi giriniz: ");
        scanf("%d", &tahmin);

        if(tahmin == gizli_sifre) {
            printf("Tebrikler! Sifreyi dogru bildiniz.\n");
            break;
        } else {
            sayac++;
            if(sayac < hak)
                printf("Yanlis! Kalan hak: %d\n", hak - sayac);
            else
                printf("Hakkiniz bitti. Gizli sifre: %d\n", gizli_sifre);
        }
    }

    return 0;
}
