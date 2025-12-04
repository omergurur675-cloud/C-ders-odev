/* 
SORU 1 : kullanıcıdan girilen bir sayının rakamları toplamı ve kaç haneli olduğunu bulan bir algoritma tasarlayınız:

SORU ALGORİTMASI:
1. başla
2. n, hane, toplam
3. hane = 0, toplam = 0
4. sayıyı giriniz
5. do  
    toplam  += ( n % 10 )
    hane++;
    n = n/10
6. while ( n < 0 )
    yaz " "rakamları toplamı, hane sayısı, toplam, hane"
7. bitir

*/

#include<stdio.h>

  int main() {

    int n, toplam = 0, hane = 0;

    printf("Lütfen bir sayı griniz:");
    scanf("%d", &n);

    do {
        toplam += ( n % 10 );
        hane++;
        n = n / 10;
    
    }
     while ( n > 0 );
        printf("Rakamları toplamı: %d\nHane sayısı: %d\n", toplam, hane);
    

      return 0;
     
    
  }