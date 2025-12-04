  //“Şifre Doğrulama Programı (C dili)”
  
  #include<stdio.h>
  int main(){
      
     int şifre;
     
     while(1){
         printf(" bir şifre gir:");
         scanf("%d", &şifre);
         
         if (şifre == 1234){
             printf( "giriş başarılı:");
             break;
         } else{
             printf("tekrar deneyiniz\n");
         }
     }
     
     return 0;
  }
