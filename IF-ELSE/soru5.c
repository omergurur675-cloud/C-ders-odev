/*
SORU 5 : Bir üniversite öğrencisinin notları giriliyor. Bu notların harf notuna çeviren bir algoritma tasarlayınız

SORU ALGORİTMASI:
1-başla
2-not
3-if( not >= 90 )
    **Yaz " AA "

4-else if( not >= 80 )
    Yaz " BA "

5-else if( not >= 70 )
    Yaz " BB "

6-else if( not >= 60 )
    Yaz " CB "

7-else if( not >= 50 )
    Yaz " CC "

8-else if( not >= 40 )
    Yaz " DC "

9-else
    Yaz " FF "

10-bitir

*/

#include <stdio.h>

int main() {

    int notu;

    printf("Notunuzu giriniz: ");
    scanf("%d", &notu);

    if (notu >= 90) {
        printf("AA\n");
    }
    else if (notu >= 80) {
        printf("BA\n");
    }
    else if (notu >= 70) {
        printf("BB\n");
    }
    else if (notu >= 60) {
        printf("CB\n");
    }
    else if (notu >= 50) {
        printf("CC\n");
    }
    else if (notu >= 40) {
        printf("DC\n");
    }
    else {
        printf("FF\n");
    }

    return 0;
}

