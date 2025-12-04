/*
SORU 7 : Kullanıcı istediği sayıları girebilir 0 girirse döngü biter tüm tahminleri ekrana yazdıran bir algoritma tasarlayınız

SORU ALGORİTMASI:
1. başla
2. toplam  = 0
3. whlle ( true )
    if ( tahmin == 0 )
    break
    toplam += tahmin
4. yazdır "toplam puan" , toplam
5. bitir
    
*/


#include<stdio.h>

  int main() {
    
     int tahmin;
     int toplam = 0;


    printf("Merhaba hoş geldin\n");

    while(1){
        printf("Bir tahminde bulunuz:\n");
        scanf("%d", &tahmin);

        if(tahmin == 0 ){
        break;
        }
        toplam += tahmin;

    }
    printf("Toplam puan %d\n", toplam);

      return 0;
 

}

