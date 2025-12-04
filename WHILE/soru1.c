/*
SORU 1 : Döngüyü tekrar ederek on sefer "merhaba yazılımcılar" yazan bir algoritma tasrlayınız

SORU ALGORİTMASI:
1. başla
2. while sayaç <= 10 
     Yaz "Merhaba yazılımcılar"
4. sayaç += sayaç 
5. bitir

*/

#include <stdio.h> 

  int main() {

    int sayaç = 1;
    while ( sayaç <= 10) {
        printf("merhaba yazılımcılar\n");
       
        sayaç++;
    }
     return 0;
  }