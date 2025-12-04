#include <stdio.h>

int main() {
    for(int i = 1; i <= 100; i++) {
        if(i % 5 != 0) continue;   // 5'in katı değilse atla
        printf("%d ", i);         // sadece 5 ve katları yazılır
    }
    return 0;
}
