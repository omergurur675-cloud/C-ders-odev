#include<stdio.h>

  int main() {

    int i;

    for( i = 0; i < 49; i++) {

        if( i % 7 != 0){
            continue;
        }
         printf("%d\n",i);
    }
    
    return 0;
  }