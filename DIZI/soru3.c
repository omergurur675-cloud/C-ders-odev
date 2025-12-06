/*
SORU 3 : Kullanıcıdan alınan 5 sayının ortalamasını hesaplayıp ekrana yazdırır.

SORU ALGORİTMASI:
1- BAŞLA
2- toplam değişkenini 0 olarak ayarla
3- 5 elemanlı "sayı" dizisini tanımla
4- i = 0
5- i < 5 oldukça:
6-     kullanıcıdan bir sayı iste ve sayı[i]'ye kaydet
7-     i = i + 1
8- ikinci döngü için i = 0 yap
9- i < 5 oldukça:
10-    toplam = toplam + sayı[i]
11-    i = i + 1
12- toplamı 5'e bölerek ortalamayı ekrana yazdır
13- BİTİR


*/


#include<stdio.h>

  int main() {

    float toplam = 0.0;
    float sayı[5];

    for(int i = 0; i < 5; i++){
        printf("Bir sayı giriniz:");
        scanf("%f", &sayı[i]);
    
    }
    for(int i = 0; i<5; i++){
        toplam += sayı[i];
    }
     
     printf("Girdiğiniz sayıların ortalaması: %2.f dir", toplam / 5);
    

      return 0;


  }