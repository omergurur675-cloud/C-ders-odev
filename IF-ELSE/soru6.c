/* 
SORU 6 : Bir öğrencinin aldığı notlara göre değerlendirme yapan bir algoritma tasalaynız:

SORU ALGORİTMASI:
1-başla
2-n1,n2,n3
3-ort = ( n1 + n2 + n3 ) / 3
4- if ( ort >= 85 )
     Yaz " GEÇTİ = ÇOK İYİ "
5-else ( ort >= 70 )
     Yaz " GEÇTİ = İYİ "
6-else ( ort >=50 )
     Yaz "  GEÇTİ = ORTA "
7-else ( ort < 50 )
     Yaz " KALDI "
8-bitir

*/

#include <stdio.h>

int main() {

    int n1, n2, n3;
    float ort;

    printf("Lütfen 1. sınav notunuzu giriniz:");
    scanf("%d", &n1);

    printf("Lütfen 2. sınav notunuzu giriniz:");
    scanf("%d", &n2);

    printf("Lütfen 3. sınav notunuzu giriniz:");
    scanf("%d", &n3);

    ort = (n1 + n2 + n3) / 3.0;  

    if (ort >= 85) {
        printf("GEÇTİ = ÇOK İYİ\n");
    }
    else if (ort >= 70) {
        printf("GEÇTİ = İYİ\n");
    }
    else if (ort >= 50) {
        printf("GEÇTİ = ORTA\n");
    }
    else {
        printf("GEÇEMEDİ = KALDI\n");
    }

    return 0;
}


