/*
SORU 4 :  kullanıcı tarafından girilen 10 sayının negatif ve pozitif sayılarını yazdıran bir algoritma tasarlayınız:

SORU ALGORİTMASI:
1. başla
2. sayı,pozitif, negatif
3. pozitif = 0, negatif = 0
4.for ( int i= 1; i <= 10; i++)
      yaz " sayıları ekrana yazdır"
      if ( sayı > 0) yaz "pozitif++"
      if ( sayı < 0) yaz "negatif++"
5. yaz ekrana 
6. bitir

*/

#include<stdio.h>

  int main () {

    int sayı, pozitif, negatif;
    pozitif = 0;
    negatif = 0;

    for ( int i = 1; i <= 10; i++) {
        printf("%d. ekrana sayıyı giriniz:", i);
        scanf("%d", &sayı);
       
        if ( sayı > 0 )  pozitif++;
        if ( sayı < 0 ) negatif++;
            
    }
    
     printf("Pozitif sayılar: %d\nNegatif sayılar: %d\n", pozitif, negatif);
     return 0;
}
