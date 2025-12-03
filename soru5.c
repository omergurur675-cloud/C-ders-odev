/*
SORU 5 : Bir kullanıcı bankadar para çekmek istiyor bakiyesine göre işlemler yapılıyor:

SORU ALGORİTMASI:
1. başla
2. bakiye, cekilen
3. bakiye = 5000
4. do
    yaz " çekilecek tuturı giriniz"
    if ( cekilen <= bakiye)
      yaz "para çekildi kalan bakiyeniz:"
    else 
      yaz "yetersiz bakiye"
5. while ( bakiye > 0 )   
      yaz"hesapta para kalmadı"
6. bitir

*/


#include<stdio.h>

  int main() {

    int bakiye = 5000, cekilen;

    do {
        printf("çekilecek tutarı giriniz:");
        scanf("%d", &cekilen);

        if ( cekilen <= bakiye ) {
            bakiye -= cekilen;
            printf("Para çekildi kalan bakiyeniz %d\n", bakiye, cekilen);
            
        }

       else {
           printf("YETERSİZ BAKİYE!\n");
       }
    }
       while ( bakiye > 0 );
        
       
        printf("HESAPTA PARA KALMADI!\n");

         return 0;
 
}