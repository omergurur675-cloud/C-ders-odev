#include<stdio.h>

  int main() {

    int s, i;

    for( i = 0; i <= 10; i++) {
        printf("Bir sayı giriniz: ");
        scanf("%d", &s);

        if( s % 2 == 0) {
            continue;
        }
         printf("Tek olan sayılar: %d\n",s);   
    }
      return 0;
  }