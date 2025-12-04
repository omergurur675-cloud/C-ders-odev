#include<stdio.h>

  int main() {

    int i;

    for( i = 0; i <= 30; i++) {
        if( i % 3 != 0 && i % 5 != 0) {
            continue;
        }
        printf("%d\n",i);

    }
     printf("%d",i);
      
     return 0;
  }