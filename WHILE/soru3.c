/*
SORU 3 : Girilen sayının faktoriyelini bulan bir algoritma tasarlayınız:

SORU ALGORİTASI:
1. başla
2. int n, f = 1
3. while ( n > 0 )
4. f *= n
5. n--
6. bitir

*/

#include <stdio.h>

 int main() {
    int n, f = 1;
    printf("lütfen bir sayı giriniz:");
    scanf("%d", &n);

    while( n > 0 ) {
    
        f *= n;
        n--;
    }
    printf("faktoriyel = %d", f);
      return 0;
    
 }