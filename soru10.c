/*
SORU 10 : Bir kullanıcı ilk önce ehliyet sınavına girecektir ve ardından 3 hak ile sınırlı olan bir direksiyon sınavına girecektir bunu yazan bir algoritma tasarlayınız.

SORU ALGORİTMASI:
1. başla
2. ehliyet_s, direksiyon_s, hak
3. hak = 1
4. if ( ehliyet_s >= 70 )
      yaz "ehliyet sınavından geçtiniz"
5. while ( hak <= 3)
      yaz (direksiyon sonucu : (1 = GEÇTİ , 0 = GEÇEMEDİ))
6.   if("direksiyon == 1")
      yaz "tebrikler ehliyet almaya hak kazandınız"
7. hak ++
    yaz "maalesef 3 hakkınız bitti "
8.bitir

*/

#include <stdio.h>

int main() {
    int yazili, direksiyon;
    int hak = 1;

    printf("Yazili not: ");
    scanf("%d", &yazili);

    if (yazili < 70) {
        printf("Yazili sinavdan kaldiniz.\n");
        return 0;
    }

    printf("Yazili sinavini gectiniz.\n");

    while (hak <= 3) {
        printf("%d. hak - Direksiyon sonucu (1=Gecti, 0=Kaldi): ", hak);
        scanf("%d", &direksiyon);

        if (direksiyon == 1) {
            printf("Tebrikler! Ehliyeti aldiniz.\n");
            return 0;
        }

        hak++;
    }

    printf("3 hak bitti. Direksiyon sinavindan kaldiniz.\n");

    return 0;
}


       
