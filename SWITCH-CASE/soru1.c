/*
SORU 1 : Bir kullanıcının banka atm sindeki işlemleri ekrana veren bir algoritma tasarlayınız.

SORU ALGORİTMASI:
1. Başla
2. bakiye = 5000
3. işlemleri göster
4. işlem seç

5 switch(işlem):

  case 1:
      çekilecek tutarı al
      eğer tutar > bakiye ise "yetersiz bakiye"
      değilse bakiye = bakiye - tutar
      yeni bakiyeyi yaz
      break

  case 2:
      yatırılacak tutarı al
      bakiye = bakiye + tutar
      yeni bakiyeyi yaz
      break

  case 3:
      havale tutarı al
      eğer tutar > bakiye ise "yetersiz bakiye"
      değilse bakiye = bakiye - tutar
      yeni bakiyeyi yaz
      break

  case 4:
      bakiyeyi yaz
      break

  case 5:
      "kart iade" yaz
      break

  default:
      "geçersiz işlem" yaz

6. Bitir


*/


#include<stdio.h>

  int main() {

    int işlem;
    int bakiye = 5000;
    int tutar;

    printf("İşlemler\n1: para çekme\n2: para yatırma\n3: havale yapma\n4: bakiye sorgulama\n5: kart iade\n\n");
   
    printf("Lütfen bir işlem seçiniz: ");
    scanf("%d", &işlem);


    switch(işlem){

        case 1 : 
          printf("Bakiyeniz: %d TL\n", bakiye);
          printf("Çekilecek tutar giriniz: ");
          scanf("%d", &tutar);

           if( tutar > bakiye ) {
               printf("Yetersiz bakiye.\n");
            }
            bakiye -= tutar;
            printf("Bakiyeniz: %d TL\n", bakiye);
            break;
        
        case 2 :
          printf("Bakiyeniz: %d TL\n", bakiye);
          printf("Yatırılacak tutar giriniz: ");
          scanf("%d", &tutar);

            bakiye += tutar;
            printf("Bakiyeniz: %d TL\n", bakiye);
            break;
    
    
        case 3 :
          printf("Bakiyeniz: %d TL\n", bakiye);
          printf("Havale yapılıcak tutar giriniz: ");
          scanf("%d", &tutar);

            if( tutar > bakiye ) {
                printf("Yetersiz bakiye\n");

            }
            bakiye -= tutar;
            printf("Bakiyeniz: %d TL\n", bakiye);
            break;
            
        case 4 :
          printf("bakiyeniz: %d TL\n", bakiye);
          break;
    
       
        case 5 :
          printf("Kart iade edildi.\n");
          break;
        
        default :
          printf("Bilinmeyen işlem.")

    }

     return 0;
    
}