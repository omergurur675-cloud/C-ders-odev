// “dikdörtgenin çevresini hesaplayan C programı”

#include <stdio.h>

 int main(){

    int  a_kenar, b_kenar;
    printf("ekrana a kenarını giriniz:");
    scanf("%d",&a_kenar);

    printf("ekrana b kenarını giriniz:");
    scanf("%d", &b_kenar);

    int çevre = (a_kenar + b_kenar) * 2;
    printf("%d", çevre);


    return 0;
 }