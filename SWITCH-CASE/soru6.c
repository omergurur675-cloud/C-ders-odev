/*
SORU 6 : Bir hasta verilen numaralarla randevu alır ve bunu ekrana girer bunun algoritmasını tasarlaınız.

SORU ALGORİTMASI:
1. Başla
2. işlem
3. Kullanıcıya hastane bölümleri göster:
   1 - Göz
   2 - Ortopedi
   3 - KBB

4. switch (islem)
   case = 1:
       "Göz randevusu alınmıştır. Sağlıklı günler dileriz."
   case = 2:
       "Ortopedi randevusu alınmıştır. Sağlıklı günler dileriz."
   case = 3:
       "KBB randevusu alınmıştır. Sağlıklı günler dileriz."
   default:
       "Geçersiz işlem."

5. Bitir


*/


#include<stdio.h>

  int main() {
int işlem;
  printf("İşlem numarasını giriniz:\n1 - Göz randevusu\n2 - Ortapedi\n3 - KBB\n");
  scanf("%d", &işlem);

  switch(işlem) {

    case 1 : printf("Göz randevusu alınmıştır.\nSağlıklı günler dileriz"); break;

    case 2 : printf("Ortapedi randevusu alınmıştır.\nSağlıklı günler dileriz"); break;

    case 3 : printf("KBB randevusu alınmıştır.\nSağlıklı günler dileriz"); break;
   
    default : printf("Geçersiz işlem ");
  
  }

   return 0;
   
}