/*
SORU 8 : Kulanıcıdan 10 sayısı alana kadar sürekli sayı giren o sayının çiftlerini toplayan bir algoritma tasarlayınız:

SORU ALGORITMASI:
1. başla
2. n, toplam
3.while(1)
    if(n == 0 ) break
    if( n % 2 = 0)
      toplam += n
4. yaz "toplam"
5. bitir

*/
 
#include<stdio.h>

  int main() {

    int n, toplam = 0;
    

    printf("MERHABA HOŞ GELDİNİZ!\n");

    while (1) {
        printf("Lütfen bir sayı giriniz:");
        scanf("%d", &n );
        if ( n == 0 ) {
            break;
        }
        else if( n % 2 == 0){
            toplam += n;
        }

    }
    
     printf("toplam:%d", toplam);

      return 0;
}