/*
SORU 4 : Bir kişinin yaşı ile ehliyet alabilir mi yoksa alamaz mı yazan bir algoritma tasarlayınız

SORU ALGORİTMASI:
1-başla
2-yaş gir = yaş1
3-if( yaş1 <= 18 )
    **Yaz "Ehliyet alabilir"**

4-else
    **Yaz "Ehliyet alamaz"**

5-bitir

*/

#include <stdio.h>

int main() {

    int yas;

    printf("Bir yaş giriniz: ");
    scanf("%d", &yas);

    if (yas < 18) {
        printf("Ehliyet alamaz\n");
    } else {
        printf("Ehliyet alabilir\n");
    }

    return 0;
}
