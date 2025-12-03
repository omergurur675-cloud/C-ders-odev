/*
SORU 9 : Kullanıcı tarafından girilen bir sayının asal olup olmadıgını yazan bir algoritma tasarlayınız:

SORU ALGORİTMASI:
1 - Başla

2 - Kullanıcıdan bir sayı al = n

3 - i = 2 yap
4 - asal = 1 yap   (1 = asal varsay, 0 = asal değil)

5 - i < n olduğu sürece döngüye gir:
        Eğer n mod i == 0 ise:
            asal = 0 yap
            döngüyü kır  (çık)
        i'yi 1 arttır

6 - Eğer asal == 1 ise:
        "Sayı asaldır" yaz
    değilse:
        "Sayı asal değildir" yaz

7 - Bitir
 
*/


#include <stdio.h>

int main() {
    int n, i = 2, asal = 1;
    printf("Sayi giriniz: ");
    scanf("%d", &n);

    while (i < n) {
        if (n % i == 0) {
            asal = 0;
            break;
        }
        i++;
    }

    if (asal == 1) printf("Asal");
    else printf("Asal degil");

    return 0;
}
