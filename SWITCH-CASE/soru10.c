/*
SORU 10 : Kullanıcının seçtiği kategoriye göre dakika, SMS veya internet paketlerinden birini seçmesini sağlayan, 
          seçilen paketin fiyatını hesaplayan ve ardından ödeme yöntemini belirleyen bir menü sistemidir.
          Program, hatalı girişleri kontrol ederek kullanıcıyı yönlendirir ve seçilen paket ile ödeme bilgisini ekrana yazdırır.
          
SORU ALGORİTMASI:
1. başla
2. paket, kategori, fiyat, ödeme
3. fiyat = 0
4. Kategori menüsünü yazdır:
       1 - DAKİKA
       2 - SMS
       3 - GB
5.  Switch (kategori)
       CASE 1:
           Dakika paketlerini yazdır
           Paketi oku 
           Switch (paket)
               CASE 1: 300 DK aldınız, fiyat = 40
               CASE 2: 500 DK aldınız, fiyat = 80
               CASE 3: 1000 DK aldınız, fiyat = 120
               DEFAULT: Geçersiz işlem, BİTİR
          Switch
       CASE 2:  
           SMS paketlerini yazdır
           Paketi oku 
           Switch (paket)
               CASE 1: 100 SMS aldınız, fiyat = 20
               CASE 2: 200 SMS aldınız, fiyat = 40
               CASE 3: 300 SMS aldınız, fiyat = 60
               DEFAULT: Geçersiz işlem, BİTİR
           switch
       CASE 3: 
           GB paketlerini yazdır
           Paketi oku 
           Switch(paket)
               CASE 1: 5 GB aldınız, fiyat = 100
               CASE 2: 10 GB aldınız, fiyat = 150
               CASE 3: 15 GB aldınız, fiyat = 200
               DEFAULT: Geçersiz işlem, BİTİR
           Switch
       DEFAULT:
           Geçersiz işlem, BİTİR
   switch

   
   "Seçtiğiniz ürünün fiyatı: " + fiyat yazdır

   
   Ödeme türünü yazdır:
       1 - Kredi Kartı
       2 - Nakit
   Ödeme türünü oku 

   Switch(ödeme)
       CASE 1: "Kredi kartı ile ödeme alınmıştır."
       CASE 2: "Nakit ödeme alınmıştır."
       DEFAULT: "Geçersiz ödeme yöntemi!"
   

6. Bitir



*/


#include<stdio.h>

  int main() {

    int paket, katagori, fiyat = 0, ödeme;

    printf("Merhabalar hoşgeldiniz.\nAşağıdaki katogarilerden birini seçip devam edebilirsiniz :\n");
    printf("1 - DAKİKA\n2 - SMS\n3 - GB\n\n");
    scanf("%d", &katagori);

    switch(katagori) {

        case 1 : printf("Aşagıdaki paketlerden birini seçiniz :\n");
                 printf("1 - 300 DK = 40 TL\n2 - 500 DK = 80 TL\n3 - 1000  DK = 120 TL\n\n");
                 scanf("%d", &paket);

                 switch(paket){
                    case 1 : printf("300 DK aldınız."); fiyat = 40; break;
                    case 2 : printf("500 DK aldınız."); fiyat = 80; break;
                    case 3 : printf("1000 DK aldınız."); fiyat = 120; break;
                    default : printf("Geçersiz işlem."); break;
                 }
                 break;
                
        case 2 : printf("Aşağıdaki paketlerden birini seçiniz : \n");
                 printf("1 - 100 SMS = 20 TL\n2 - 200 SMS = 40 TL\n3 - 300 SMS = 60 TL\n\n");
                 scanf("%d", &paket);

                 switch(paket) {
                    case 1 : printf("100 SMS aldınız."); fiyat = 20; break;
                    case 2 : printf("200 SMS aldınız."); fiyat = 40; break;
                    case 3 : printf("300 SMS aldınız."); fiyat = 60; break;
                    default: printf("Geçersiz işlem "); break;
                 }
                 break;

        case 3 : printf("Aşağıdaki paketlerden birini seçiniz : \n");
                 printf("1 - 5 GB = 100 TL\n2 - 10 GB = 150 TL\n3 - 15 GB = 200 TL\n\n");
                 scanf("%d", &paket);

                 switch(paket) {
                    case 1 : printf("5 GB aldınız."); fiyat = 100; break;
                    case 2 : printf("10 GB aldınız."); fiyat = 150; break;
                    case 3 : printf("15 GB aldınız."); fiyat = 200; break;
                    default : printf("Geçersiz işlem"); break;
                 }
                 break;

        default : printf("Geçersiz işlem"); break;

    }

     printf("\nSeçtiğiniz ürünün fiyatı : %d TL\n", fiyat);
     printf("Ödeme türünü seçiniz:\n");
     printf("1 - Kredi kartı\n2 - Nakit ödeme\n\n");
     scanf("%d", &ödeme);

     switch(ödeme) {
        case 1 : printf("Kredi kartı ile ödeme alınmıştır. Teşekkür ederiz :)"); break;
        case 2 : printf("Nakit ödeme alınmıştır. Teşekkür ederiz :)"); break;
        default : printf("Geçersiz ödeme yöntemi!"); break;
     }
      
       return 0;
}
