/*
SORU 2 : 1 den başlayarak 50 ye kadar olan çift sayıları yazdıran bir algoritma tasarlayınız.

SORU ALGORİTMASI:
1. başla
2. n
3. n = 1
3. do
    if( n % 2 == 0 )
    yaz 
4. while ( n <= 50)
bitir

*/

#include<stdio.h>

  int main() {

   int n = 0;
   do {
       if ( n % 2 == 0 )
        printf("%d\n", n );
        n++;
   }while( n <= 50 );
   
     return 0;
     
}