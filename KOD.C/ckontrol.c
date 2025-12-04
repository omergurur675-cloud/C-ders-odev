 // 10-vize - final notuna güre geçme
 
#include<stdio.h>

  int main() {
      
    int vize,final;
    float ort;
    
    printf("Vize sınav notunuzu giriniz:");
    scanf("%d", &vize);
    
    printf("Final sınav notunuzu giriniz:");
    scanf("%d", &final);
      
    ort = ( vize * 0.40 + final * 0.60 );
   
    if( ort >= 60 ) {
        printf("sonuç: GEÇTİ\n");
    }
    else if ( ort >= 50 ) {
        printf("sonuç: ŞARTLI GEÇTİ\n");
    }
    else {
        printf("sonuç: KALDI\n");

    }
    
     return 0;
}