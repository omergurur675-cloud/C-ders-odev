/*
SORU 9 : 2 aşamalı bir güvenlik sorusu vardır. Birisi PİN kodu ile diğeri ONAY harfi ile bunları doğrulayarak yazan bir algoritma yazınız:

SORU ALGORİTMASI:
1. başla
2. pin, doğru_pin, onay
3. doğru_pin = 4444
4. do 
    yaz ("Bir pin kodu giriniz ( 4 haneli olacak şekilde ):
    if ( pin != doğru_pin )
    yaz ("Hatalı pin.)
5.  while( pin != doğru_pin )
6. do 
     yaz (" onaylamak için ( 'A' ) yazın:")
    if( onay != 'A') 
    yaz ("Hatalı harf.\n")
7. while( onay !='A' )
    yaz ("TEBRİKLER! Güvenikten geçtiniz.)
8. bitir

*/


#include<stdio.h>

  int main() {

    int pin, doğru_pin = 4444;
    char onay;

    do {
        printf("Bir pin kodu giriniz ( 4 haneli olacak şekilde ):");
        scanf("%d", &pin);

        if ( pin != doğru_pin ) {
            printf("Hatalı pin.\n");
        }
    } while( pin != doğru_pin );


    do {
        printf(" onaylamak için ( 'A' ) yazın:");
        scanf("%c", &onay);

        if( onay != 'A') {
            printf("Hatalı harf.\n");
        }
    } while( onay !='A' );
    
           printf("TEBRİKLER! Güvenikten geçtiniz.\n");

         return 0;
  }