// "dogru sayıyı bulma"

#include<stdio.h>

  int main() {
      int num;
      
      printf("Bir sayı giriniz:");
      scanf("%d", &num);
      
      if ( 0 <= num && num < 10) {
          
        switch (num) {
            case 0 :
              printf("cevabınız doğru:");
              break;
            
            case 1 :
             printf("cevabınız doğru:");
              break;
              
            case 2 :
             printf("cevabınız doğru:");
              break;
              
            case 3 :
             printf("cevabınız doğru:");
              break;
              
            case 4 :
             printf("cevabınız doğru:");
              break;
              
            case 5 :
             printf("cevabınız doğru:");
              break;
              
            case 6 :
             printf("cevabınız doğru:");
              break;
              
            case 7 :
             printf("cevabınız doğru:");
              break;
              
            case 8 :
             printf("cevabınız doğru:");
              break;
              
            case 9 :
             printf("cevabınız doğru:");
              break;
             
             default :
              printf("yanlış girdiniz tekrar giriniz:");

        }
        
        } else { 
            printf("cevanınız yanlış tekrar giriiz:");
            
        
         }
        
        
        
        return 0;
    
        
}
