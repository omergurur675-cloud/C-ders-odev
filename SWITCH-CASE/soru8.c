/*
SORU 6 : Bir kullanıcı verilen numaralarla şeçim ve bunu ekrana girer bunun algoritmasını tasarlaınız.

SORU ALGORİTMASI:
1. Başla
2. ı
3. Kullanıcıya bölümleri göster:
   1 - salon
   2 - mutfak
   3 - çocuk odası

4. switch (ı)
   case = 1:
       "Salonnun ışığı açıldı."
   case = 2:
       "Mutfağın ışığı açıldı."
   case = 3:
       "Çocuk odsının ışığı açıldı."
   default:
       "Geçersiz işlem."

5. Bitir


*/

#include<stdio.h>

  int main() {
int ı;
  printf("Hangi odanın ışığını açmak istiyorsunuz:\n1 - Salon\n2 - Mutfak\n3 - Çocuk odası\n");
  scanf("%d", &ı);

  switch(ı) {

    case 1 : printf("Salonnun ışığı açıldı."); break;

    case 2 : printf("Mutfağın ışığı açıldı."); break;

    case 3 : printf("Çocuk odsının ışığı açıldı."); break;
   
    default : printf("Geçersiz işlem ");
  
  }

   return 0;
   
}