/*
SORU 7 : Bir kullanıcı verilen numaralarla seçim yapar ve bunu ekrana girer bunun algoritmasını tasarlaınız.

SORU ALGORİTMASI:
1. Başla
2. K
3. Kullanıcıya bölumlere girer:
   1 - kitap ekle
   2 - kitap sil
   3 - kitap ara

4. switch (k)
   case = 1:
       "kitap eklendi."
   case = 2:
       "kitap silindi."
   case = 3:
       "kitap aranıyor..."
   default:
       "Geçersiz işlem."

5. Bitir

*/


#include<stdio.h>

  int main() {
int k;
  printf("İşlem numarasını giriniz:\n1 - Kitap ekle\n2 - Kitap sil\n3 - Kitap ara\n");
  scanf("%d", &k);

  switch(k) {

    case 1 : printf("Kitap eklendi."); break;

    case 2 : printf("Kitap silindi."); break;

    case 3 : printf("Kitap araniyor..."); break;
   
    default : printf("Geçersiz işlem ");
  
  }

   return 0;
   
}
