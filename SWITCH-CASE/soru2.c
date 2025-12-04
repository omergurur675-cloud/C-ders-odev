/*
SORU 2 : Bir marketteki ürünlerin kod ile fiyatın öğrenilmektedir. Bunu ekrana veren bir algoritma tasarlayınız.

SORU ALGORİTMASI:
1. başla
2. ürün kodu al
3. switch(kod):
  1 → fiyat = 10
  2 → fiyat = 20
  3 → fiyat = 5
  diğer = geçersiz
4. fiyatı yaz
5. bitir

*/


#include<stdio.h>

  int main() {

    int kod;
    printf("işlemler\n1 - 2 - 3 \nnumaralı kodlardan hangisine gitmek istersiniz\n");
    printf("ürün kodunu girin: ");
    scanf("%d", &kod);

    switch(kod) {
        case 1 : printf("Fiyatı = 10 TL");
                 break;
            
        case 2 : printf("Fiyatı = 20 TL");
                 break;
                
        case 3 : printf("Fiyatı = 30 TL");
                 break;
        
        default: printf("Geçersiz işlem.");
                 
    }
     
     return 0;
  }