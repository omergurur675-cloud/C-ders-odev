/*
SORU 1: kafenin 7 gün boyunca yaptığı satışları dizi içinde toplayıp haftalık toplam satış tutarını ekrana yazdırır.



SORU ALGORİTMASI:
1- BAŞLA
2- 7 elemanlı "satis" dizisini tanımla
3- toplam = 0 olarak ata
4- i = 0 olarak ata
5- i < 7 olduğu sürece döngüye gir:
6-     toplam = toplam + satis[i]
7-     i = i + 1
8- döngüyü bitir
9- " toplam satış: " toplam değerini yazdır
10- BİTİR

*/


#include<stdio.h> 

 int main() {

    int satış[7] = {500,600,750,1000,450,670,850};
    int toplam = 0;
    for(int i = 0; i < 7; i++) {
        toplam += satış[i];
    }
     printf("Toplam satış = %d TL dir",toplam);

      return 0;
 }