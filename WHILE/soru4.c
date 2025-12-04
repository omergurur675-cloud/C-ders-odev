/*
SORU 4 : Gizli olan bir sayıyı tahmin etme ile doğru yanıtı bulmaya çalışan bir algoritma tasarlayınız:

SORU ALGORİTMASI:
"1. başla
2. tahmin , gizli 
3. gizli = 23 ,
4. while ( tahmin != gizli)
5. yaz " doğru bildin!
6. bitir

*/

#include <stdio.h>

int main() {
    int gizli = 23;
    int tahmin = 0;

    printf("Sayi tahmin oyununa hosgeldin!\n");
    printf("1 ile 50 arasinda bir sayi tutdum. Tahmin et bakalim!\n");

    while(tahmin != gizli) {
        printf("Tahminin: ");
        scanf("%d", &tahmin);

        if(tahmin < gizli) {
            printf("Daha buyuk bir sayi soyle :)\n");
        } else if(tahmin > gizli) {
            printf("Daha kucuk bir sayi soyle :)\n");
        }
    }

    printf("TEBRIKLER! Dogru bildin! Gizli sayi %d idi.\n", gizli);

    return 0;
}
