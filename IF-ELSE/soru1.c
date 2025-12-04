/*
1.SORU : Klavyeden girilen bir sayının pozitif mi negatif mi oldugunu bulan algoritma tasarlayınız 
 
SORU ALGORİTMASI:
1-başla
2-klavyeden bir sayı gir = sayı1
3-if( sayı1 < 0 )
    Yaz "sayı negatiftir"
4-else( sayı1 > 0 )
    Yaz "sayı negatiftir"
5-bitir

*/

#include <stdio.h>

 int main() {

   int sayı1;
 
    printf("Klavyeden bir sayı giriniz:");
    scanf("%d", &sayı1);
 
    if ( sayı1 < 0 ) {
         printf("sayı negatiftir\n");
    }
 
    if ( sayı1 > 0 ) {
         printf("sayı pozitiftir\n");
    }

    if ( sayı1 == 0 ) {
        printf("sayı sıfırdır\n");
    }
    
      return 0;
}


