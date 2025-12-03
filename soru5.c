/*
SORU 6 : Kullanıcı tarafından girilen bir sayıyın rakamlarını toplayan bir algpritma tasarlayınız.


SORU ALGORİTMASI:
1. başla
2. n, toplam
3. toplam = 0
4. while ( n > 0)
   toplam += n % 10
   n /= 10
5. yaz toplam
6. bitir

*/









#include <stdio.h>
int main() {
    int n, toplam=0;

    printf("bir sayı giriniz:");
    scanf("%d",&n);
    while(n > 0) {
        toplam += n % 10;
        n /= 10;
    }
    printf("Rakamlar Toplami: %d\n", toplam);
    return 0;
}
