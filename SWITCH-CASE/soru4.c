/*
SORU 4 : Bir müşteri telefon hattındaki o numaradaki işlemleri kullanabilen ve ekrana yazan bir algoritma tasarlayınız.

SORU ALGORİTMASI:
1 başla
2. n
3. switch(n) "1-müşteri hizmetleri, 2-faturta işlemleri, 3-teknik servis"
4. ekrana ver
5. bitir

*/


#include<stdio.h>

  int main() {

    int n;

    printf("--İŞLEMLER--\n1 : müşteri hizmetleri\n2 : Fatura işlemleri\n3 : Teknik servis\n\n");
    scanf("%d", &n);

    switch(n) {

        case 1 : printf("Müşteri hizmetlerine bağlanıyorsunuz."); break;

        case 2 : printf("Fatura işlemlerine yönlendiriliyorsunuz"); break;

        case 3 : printf("Teknik servise yönlendiriliyorsunuz"); break;

        default : printf("Geçersiz tuş (1-2-3) tuşlarından birisine basınız");
    }
     
      return 0;
  }