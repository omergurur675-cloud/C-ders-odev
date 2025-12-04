/*
SORU 3 : Kullanıcı şifreyi doğru girene kadar deneme yaptıran bir algoritma tasarlayınız.

SORU ALGORİTMASI:
1. başla
2. n, şifre
3. do
   yaz " şifreyi giriniz"
4. while ( şifre != 1234 )
   yaz "tekrar deneyiniz"
5. bitir

*/

#include<stdio.h>

  int main() {

    int n, şifre;

    do {
        printf("Bir şifre denemesinde bulununuz:");
        scanf("%d", &şifre);

    }while( şifre != 1234 );
        printf("giriş başarılı");
     
        return 0;   
    
}

  