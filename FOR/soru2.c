/*
SORU 2 : Fibonacci serisini oluşturan ve ekrana yazan bir algoritma tasarlayınız:

SORU ALGORİTMASI:
1. başla
2. ilk_sayı = 1, ikinci_sayı = 1, i
3. yaz ("%d\n%d\n", ilk_sayı,ikinci_sayı)
4. for(i = 0; i < 10; i++ )
    int temp = ikinci_sayı
    ikinci_sayı += ilk_sayı
    ilk_sayı = temp;  
     yaz ("%d\n", ikinci_sayı)
5. bitir


*/


#include<stdio.h>

  int main() {
     
    int ilk_sayı = 1, ikinci_sayı = 1, i;

    printf("%d\n%d\n", ilk_sayı,ikinci_sayı);

    for(i = 0; i < 10; i++ ) {

        int temp = ikinci_sayı;
        ikinci_sayı += ilk_sayı;
        ilk_sayı = temp;

        printf("%d\n", ikinci_sayı);
    }
    return 0;
}
  