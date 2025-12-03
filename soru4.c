/*
soru 4 : Bir kullanıcı mağazadaki alışverişini bütçesini aşma durumunu kontrol eden bir algoritma tasarlayınız:

SORU ALGORİTMASI:
1. başla
2. bütçe, toplam
3. toplam = 0
3. do
    oku fiyat
    if ( toplam + fiyatı <= bütçe)
        toplam = toplam + fiyat
        yaz "ürün alındı, toplam:"
        else 
        yaz "ürün bütçeyi aşıyor. başka ürün seçin"
4.    while ( toplam < bütçe )
        yaz " bütçe doldu toplam harcama:"
5. bitir

*/

#include<stdio.h>

  int main() {
     
    int bütçe, fiyat, toplam = 0;

    printf("Bütçenizi giriniz:");
    scanf("%d", &bütçe);

    do {
       printf("alacağınız ürünün fiyatini giriniz:");
       scanf("%d", &fiyat);
       
        if ( toplam + fiyat <= bütçe) {
        toplam += fiyat;
        printf("Ürün alındı.\nToplam:%d\n", toplam);
        }  
        else {
        printf("Ürün alınamadı bütçeyi aşıyor başka bir ürün alın.\n");
        }
    
    }    while ( toplam < bütçe );
       printf("Bütçe doldu! Toplam harcama: %d\n", toplam);

       return 0;
}