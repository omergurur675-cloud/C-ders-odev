/*
SORU 10 : ChatGPT:

Bu sözde kod, öğrencinin vize ve final notlarını alıp ağırlıklı ortalamasını hesaplar ve ortalamaya göre geçme durumunu 
“GEÇTİ”, “ŞARTLI GEÇTİ” veya “KALDI” olarak belirleyen bir algoritma tasarlayınız.

SORU ALGORİTMASI:
1. başla
2- vize, final
3- ort = (vize * 0,40 + final * 0,60)
4- if (ort >= 60)
       yaz "GEÇTİ"
 else if (ort >= 50)
       yaz "ŞARTLI GEÇTİ"
 else
       yaz "KALDI"
5- bitir


*/


#include<stdio.h>

 int main() {

   int vize,final;
   float ort;

   printf("Vize sınav notunuzu giriniz:");
   scanf("%d", &vize);

   printf("Final sınav notunuzu giriniz:");
   scanf("%d", &final);

   ort = ( vize * 0.40 + final * 0.60 );

   if( ort >= 60 ) {
       printf("sonuç: GEÇTİ\n");
   }
   else if ( ort >= 50 ) {
       printf("sonuç: ŞARTLI GEÇTİ\n");
   }
   else {
       printf("sonuç: KALDI\n");

   }

    return 0;
}
