/*
SORU 8 : Bir kullanıcının bankadaki bakiyesini ekrana girmiştir her ay %2 faize biner. 6 ay sonundaki faizli yeni bakiyeyi ekrana veren
bir algoritma tasarlayınız.

SORU ALGORİTMASI:
1. başla
2. bakiye
3. yaz "başlangıçdaki paranız"
4. for(int i = 1; i <= 6; i++) {
        bakiye = bakiye * 1.02;
5. yaz "6 ay sonundaki bakiyeniz"
6. bitir

*/


#include<stdio.h>

  int main() {

    float bakiye;
    printf("Baslangic paraniz: ");
    scanf("%f", &bakiye);

    for(int i = 1; i <= 6; i++) {
        bakiye = bakiye * 1.02;
    }

    printf("6 ay sonraki bakiyeniz: %.2f TL\n", bakiye);
    return 0;

       return 0;
  }