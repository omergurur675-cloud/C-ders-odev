/*
SORU 9 : Bu program, kullanıcıdan 5 kez isim alır ve boş olmayan isimleri ekrana yazdırır.

SORU ALGORİTMASI:
1- Başla
2- 5 kez tekrar et
3-     Kullanıcıdan isim al
4-     Eğer ismin ilk karakteri boş ise devam et (atla)
5-     Değilse ismi yazdır
6- Bitir

*/

#include<stdio.h>

  int main() {

    char isim[20];

    for(int i = 1; i <= 5; i++) {
        printf("Bir isim giriniz: ");
        scanf("%s", &isim);

        if( isim[0] == '\0')
            continue;
    
        printf("Girilen isim: %s\n", isim);
    }
      
     return 0;

  }
