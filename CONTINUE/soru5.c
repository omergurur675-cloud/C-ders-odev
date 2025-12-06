*/
SORU 5 : Bu program, 0’dan 50’ye kadar olan sayılardan 7’nin katı olmayanları ekrana yazdırır ve en sonda i’nin son değerini gösterir.

SORU ALGORİTMASI:
1- Başla
2- i = 0
3- 50’ye kadar i’yi 1 artırarak tekrar et
4-     Eğer i, 7’nin katı ise devam et (atla)
5-     Değilse i’yi yazdır
6- Döngü biterse i değerini yazdır
7- Bitir

*/

#include<stdio.h>

  int main() {

    int i;
    for(i = 0; i <= 50; i++) {
        if( i % 7 == 0){
            continue;
        } 
        printf("%d\n",i); 
    }  
      printf("%d",i);
  
        return 0;
  }
