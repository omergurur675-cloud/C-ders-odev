 //“1’den 100’e kadar sayıların toplamını ve ortalamasını hesaplayan C programı.”
 
 #include<stdio.h>
  int main(){
      int toplam = 0;
      int sayac = 0;
      
      for( int i = 1; i <=100; i ++) {
      toplam += i;
      sayac++;
      }
      
      float ort = (toplam / sayac);
      printf( "toplam : %d\n", toplam);
      printf("ort: %.2f\n", ort);
      
      return 0;
  }