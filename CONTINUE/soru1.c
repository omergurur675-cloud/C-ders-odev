#include<stdio.h>

  int main() {

    int i, toplam = 0;

    for(i = 1; i <= 20; i++) {

        if (i % 2 == 0) {
            continue;
        }
        toplam += i;

    }
    printf("Toplam = %d",toplam);

     return 0;
  }