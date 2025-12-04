// "Notun geçip geçmediğini kontrol eden C programı"

#include <stdio.h>

int main() {
    int note;

git:
    printf("Notunuzu giriniz:\n");
    scanf("%d", &note);

    while (note < 101) {

        if (note > 60) {
            printf("Dersten Gectiniz!\n");
            break;
        }
        else {
            printf("Dersten KALDINIZ!\n");
            break;
        }
    }

    if (note > 100) {
        printf("Tekrardan Sayı giriniz:\n");
        goto git;
    }

    return 0;
}