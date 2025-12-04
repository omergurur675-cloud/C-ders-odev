/*
SORU 7 : Kargonun ağırlığına göre farklı ücretleri belirleyip hesaplıyayan bir algoritma tasarlayınız.

SORU ALGORİTMASI:
1- başla
2- ağırlık
3- if ( ağırlık <= 5 )
       ücret == 20 TL
4- else if( ağırlık <= 10 )
       ücret == 50 TL
5- else if( ağırlık <= 20 )
       ücret == 50 TL
6- else
       ücret == 100 TL
7- bitir


*/


#include<stdio.h>

 int main() {

   int ağırlık;

   printf("bir ağırlık miktarı giriniz:");
   scanf("%d", &ağırlık);

   if( ağırlık <= 5 ) {
       printf("KARGO ÜCRETİ == 20 TL\n");
   }
   else if( ağırlık <= 10 ) {
       printf("KARGO ÜCRETİ == 50 TL\n");
   }
   else if ( ağırlık <= 20 ) {
       printf("KARGO ÜCRETİ == 20 TL\n");
   }
   else {
       printf("KARGO ÜCRETİ == 100 TL\n");
   }

     return 0;

}
