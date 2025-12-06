/*
SORU 3 : Bir kullanıcının restorantta belli numaralardan spariş vererek yemeğini yemektedir. Bunu ekrana yazan bir algoritma tasarlayınız.

SORU ALGORİTMASI:
1. başla
2. menü
3. switch(menü)
4. 1-döner, 2-hatay soslu dürüm, 3-iskender
5. ekrana yazdır
6. bitir


*/


#include<stdio.h>

  int main() {
int menü;
  printf("Menü numarasını giriniz:\n1 - Hatay soslu dürüm\n2 - Tavuk pilav\n3 - İskender\n\n");
  scanf("%d", &menü);

  switch(menü) {

    case 1 : printf("Hatay soslu dürüm spariş edildi. Afiyet olsun"); break;

    case 2 : printf("Tavuk pilav spariş edildi. Afiyet olsun"); break;

    case 3 : printf("İskender spariş edildi. Afiyet olsun"); break;
   
    default : printf("Geçersiz menü numarası\nLütfen (1 - 2 - 3) numaradan birini seçip sparişinizi verebilirsiniz\nAfiyet olsun");
  
  }

   return 0;
   
}
