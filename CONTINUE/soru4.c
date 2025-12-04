#include <stdio.h>

int main() {
    int not;

    for(int i = 0; i < 5; i++) {
        scanf("%d", &not);
        if(not < 50) continue;
        printf("%d ", not);
    }
}
