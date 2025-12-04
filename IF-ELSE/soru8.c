/*
SORU 8 : Bu sözde kod, girilen şifrenin uzunluğunu kontrol ederek zayıf, orta veya güçlü olduğunu bildirir 
ve 15 karakterden uzun şifreleri reddeden bir algoritma tasarlayınız.

SORU ALGORİTMASI:
1- başla
2- şifreyi metin olarak oku
3- uzunluk
4- if (uzunluk <= 4)
       yaz "şifre zayıftır"
5- else if (uzunluk <= 8)
       yaz "şifre ortadır"
6- else if (uzunluk <= 15)
       yaz "şifre güçlüdür"
7- else
       yaz "şifre maksimum 15 karakter olabilir"
8- bitir


*/
 

#include<stdio.h>
#include<string.h>

 int main() {

   char şifre[30];

   printf("bir şifre giriniz:");
   scanf("%s", şifre);

   int uzunluk = strlen(şifre);

   if( uzunluk <= 4 ) {
       printf("ŞİFRE ZAYIFTIR\n");
   }
   else if( uzunluk <= 8 ) {
       printf("ŞİFRE ORTADIR\n");
   }
   else if ( uzunluk <= 15 ) {
       printf("ŞİFRE GÜÇLÜDÜR\n");
   }
   else {
       printf("ŞİFRE MAXİMUM 15 KARAKTER OLABİLİR\n");
   }
     return 0;

}
