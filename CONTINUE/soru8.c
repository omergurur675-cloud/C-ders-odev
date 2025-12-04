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