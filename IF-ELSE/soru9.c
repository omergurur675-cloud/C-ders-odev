/*
SORU 9 : Bu sözde kod, kullanıcıdan iki sayı ve bir işlem seçmesini alır, seçilen işleme göre toplama, çıkarma, çarpma veya bölme yapar;
 geçersiz işlem girilirse uyarı veren bir algoritma tasarlayınız.
 
SORU ALGORİTMASI:
1- başla
2- x, y, işlem
3- if (işlem == 1)
       yaz x + y
4- else if (işlem == 2)
       yaz x - y
5- else if (işlem == 3)
       yaz x * y
6- else if (işlem == 4)
       yaz x / y
7- else
       yaz "geçersiz işlem"
8- bitir


*/


#include<stdio.h>

 int main() {

  int x, y, işlem;

   printf("Birinci sayıyı giriniz:");
   scanf("%d", &x);

   printf("İkinci sayıyı giriniz:");
   scanf("%d", &y);

   printf("\nişlem seçiniz:\n");
   printf(" 1 - toplama\n 2 - çıkartma\n 3 - çarpma\n 4 - bölme\n");
   scanf("%d", &işlem);

   if ( işlem == 1 ) {
       printf("sonuç:%d\n", x + y );
   }
   else if ( işlem == 2 ) {
       printf("sonuç:%d\n", x - y );
   }
   else if ( işlem == 3 ) {
       printf("sonuç:%d\n", x * y );
   }
   else if ( işlem == 4 ) {
       printf("sonuç:%d\n", x / y );
   }
   else {
       printf("Yalnız 4 seçenek vardır. Onlardan birini seçip işleminizi yapınız");
   }

    return 0;

}
