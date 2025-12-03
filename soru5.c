/*
SORU 5 : Bir kullanıcının arabasındaki bazı işlemleri aktive etmek ister ve bu adımları ekrana yazan bir akgoritma tasarlayınız.

SORU ALGORİTMASI:
1.başla
2. mod
3. yaz "1-soğutma, 2-ısıtma"
4. switch (mod)
      case 1 = soğutma
      case 2 = isıtma
      default = geçersiz işlem
5.bitir


*/


#include<stdio.h>

  int main() {

    int mod;

    printf("Birini seçin:\n1 : soğutma\n2 : ısıtma\n");
    scanf("%d", &mod);

    switch(mod) {

         case 1 : printf("Soğutma özelliği aktive oluyor"); break;

         case 2 : printf("Isıtma özelliği aktive oluyor"); break;

         default : printf("Geçersiz mod");
    }
     return 0;
}