/*
SORU 4 : Kullanıcıdan bir isim alıp ekrana tekrar yazdırır.

SORU ALGORİTMASI:
1- BAŞLA
2- 20 karakterlik "isim" dizisini tanımla
3- kullanıcıdan bir isim girmesini iste
4- girilen ismi "isim" dizisine kaydet
5- isim dizisini ekrana yazdır
6- BİTİR


*/

#include <stdio.h>

  int main() {

    char isim[20];

    printf("Bir isim giriniz: ");
    scanf("%s", &isim);

    printf("%s", isim);

    return 0;
  }