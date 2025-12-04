/*
SORU 8 : Bir kullanıcının bankada kredi almasını sağlayacak şartlar soruluyor yaş ve gelir hakkında bilgi alınarak 
kredi alabilir veya kredi alamaz şeklinde yazan bir algoritma tasarlayınız:

SORU ALGORİTMASI:
1. başla
2. gelir, yaş
3. do
    if (gelir<2000 || yas<18)
    yaz "Kredi şartları sağlanmadı. Tekrar deneyin."
4. while(gelir<2000 || yas<18)
    yaz "Kredi onaylandı!"
5. bitir

*/

#include <stdio.h>

int main() {
    int gelir, yas;
    do {
        printf("Gelirinizi girin: ");
        scanf("%d",&gelir);
        printf("Yaşınızı girin: ");
        scanf("%d",&yas);

        if(gelir<2000 || yas<18)
            printf("Kredi şartları sağlanmadı. Tekrar deneyin.\n");
    } while(gelir<2000 || yas<18);

    printf("Kredi onaylandı!\n");

     return 0;
}