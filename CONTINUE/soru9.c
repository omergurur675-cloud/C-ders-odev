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