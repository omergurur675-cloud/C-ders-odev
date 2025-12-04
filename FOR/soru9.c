/*
 SORU 9 : Bir kullanıcının markette aldığı ürünlerin toplamını ekrana giren bir algoritma tasarlayınız.
 
 SORU ALGORİTMASI:
 
 1. başla
 2. fiyat, toplam
 3. for( int i = 1; i <= 7; i++)
       yaz " ürün fiyat"
       toplam += fiyat
4. yaz " Bütün ürünlerin fiyatları toplamı"
5. sonucunu ekrana yazdır
6. bitir

*/


#include<stdio.h>

 int main() {

    float fiyat, toplam = 0;

     for( int i = 1; i <= 7; i++) {
        printf("%d. ürün fiyatı: ", i);
        scanf("%f", &fiyat);
        toplam += fiyat;
     }
      printf("Bütün ürünlerin fiyatları toplamı: %2.f TL\n", toplam);

       return 0;
 }