/*
SORU 7 : Oyuncunun görevi tamamlaması ile geri dönuş almalı bir algoritma tasarlayınız:

SORU ALGORİTMASI:
1. başla
2.cevap
3. yaz "Görevi tamamladın mı? ( evet ise = E , hayır ise = H ):
4. while ( cevap != 'E' && cevap != 'e')
   yaz "Tebrikler! görevi başarıyla tamamladınız"
5. bitir


*/


#include<stdio.h>

 int main () {
     
    char cevap;
    
    do {
        printf("Görevi tamamladın mı? ( evet ise = E , hayır ise = H ): ");
        scanf("%c", &cevap);
    }
        while( cevap != 'E' && cevap != 'e');
        printf("Tebrikler! görevi başarıyla tamamladınız.\n");

         return 0;
}