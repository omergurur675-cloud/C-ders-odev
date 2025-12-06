/*
SORU 8 : Bu program, 10 ürünün stok miktarını alır ve stok değeri 0 olmayan ürünleri ekrana yazdırır.

SORU ALGORİTMASI:
1- Başla
2- i = 1
3- 10 ürün için tekrar et
4-     i. ürünün stok miktarını oku
5-     Eğer stok 0 ise devam et (atla)
6-     Değilse stok miktarını yazdır
7- Bitir

*/

#include<stdio.h>

  int main() {

    int stok, i;

    for(i = 1; i <= 10; i++) {
        printf("%d. ürünün stok: ",i);
        scanf("%d", &stok);
        if(stok == 0)
            continue;
        
       printf("Stok mevcut: %d adet\n",stok);
    }
   
    return 0;
  }
