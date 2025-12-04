/*
SORU 9 : Kullanıcı marketteki kasa sisteminden önce kategori seçimi yapar ardından o kategorideki ürün seçimi yapar program istediği 
kategoriyi ve istediği ürünü yazdıran bir algoritma tasarlayınız.

SORU ALGORİTMASI:
1. Başla
2. kategori, ürün
2. Kullanıcıya kategori seçeneklerini göster:
   1 - Gıda
   2 - Temizlik
   3 - İçecek
4. switch (kategori)
    Kategoriye göre ürün seçeneklerini göster:
   
   case = 1:  
       1 - Ekmek
       2 - Şeker
       3 - Peynir
       4 - Zeytin
       switch (urun)
       Eğer urun 1-4 arasında ise:
           Seçilen ürünün adını yazdır
           "Tekrar bekleriz, mutlu günler dileriz"
       Aksi halde:
           "Geçersiz ürün seçimi!"

   case = 2:  
       1 - Deterjan
       2 - Sabun
       3 - Çamaşır suyu
       4 - Cif
       switch (urun)
       Eğer urun 1-4 arasında ise:
           Seçilen ürünün adını yazdır
           "Tekrar bekleriz, mutlu günler dileriz"
       Aksi halde:
           "Geçersiz ürün seçimi!"

   case = 3:  
       1 - Su
       2 - Coca Cola
       3 - Sprite
       4 - Fanta
       switch(urun)
        urun 1-4 arasında ise:
           Seçilen ürünün adını yazdır
           "Tekrar bekleriz, mutlu günler dileriz"
       Aksi halde:
           "Geçersiz ürün seçimi!"

   Aksi halde:
       "Geçersiz kategori seçimi!"

3. Bitir



*/




#include<stdio.h>

 int main() {

   int kategori, ürün;

   printf("Market kasa sistemine hoşgeldiniz\n");
   printf("Kategori seçiniz:\n1 - Gıda\n2 - Temizlik\n3 - İçecek\n");
   scanf("%d", &kategori);

   switch(kategori) {
          
        case 1 : 
          printf("Gıda ürünün seçiniz:\n1 - Ekmek\n2 - Şeker\n3 - Peynir\n4 - Zeytin\n\n");
          scanf("%d", &ürün);

          switch(ürün) {
             case 1 : printf("Ekmek aldınız fiyat = 10 TL\nTekrar bekleriz\nMutlu günler dileriz :)"); break;
             case 2 : printf("Şeker aldınız fiyat = 50 TL\nTekrar bekleriz\nMutlu günler dileriz :)"); break;
             case 3 : printf("Peynir aldınız fiyat = 150 TL\nTekrar bekleriz\nMutlu günler dileriz :)"); break;
             case 4 : printf("Zeytin aldınıZ fiyat = 110 TL\nTekrar bekleriz\nMutlu günler dileriz :)"); break;
             default : printf("Geçersiz işlem\n(1-2-3-4) numaralı işlemlerden birini seçiniz."); break;
             
          }
          break;

        case 2 :
          printf("Temizlik ürünü seçiniz :\n1 - Deterjan\n2 - Sabun\n3 - Çamaşır suyu\n4 - Cif\n\n");
          scanf("%d", &ürün);

          switch(ürün) {
              case 1 : printf("Deterjan aldınız fiyat = 70 TL\nTekrar bekleriz\nMutlu günler dileriz :)"); break;
              case 2 : printf("Sabu aldınız fiyat = 40 TL\nTekrar bekleriz\nMutlu günler dileriz :)"); break;
              case 3 : printf("Çamaşır suyu aldınız fiyat = 60 TL\nTekrar bekleriz\nMutlu günler dileriz :)"); break;
              case 4 : printf("Cif aldınız fiyat = 40 TL\nTekrar bekleriz\nMutlu günler dileriz :)"); break;
              default : printf("Geçersiz işlem\n(1-2-3-4) numaralı işlemlerden birini seçiniz."); break;
        
          }
          break;
        
        case 3 : 
          printf("İçecek ürünün seçiniz :\n1 - Su\n2 - Coca Cola\n3 - Sprite\n4 - Fanta\n\n");
          scanf("%d", &ürün);

          switch(ürün) {
              case 1 : printf("Su aldınız fiyat = 20 TL\nTekrar bekleriz\nMutlu günler dileriz :)"); break;
              case 2 : printf("Coca cola aldınız fiyat = 50 TL\nTekrar bekleriz\nMutlu günler dileriz :)"); break;
              case 3 : printf("Sprite aldınız fiyat = 20 TL\nTekrar bekleriz\nMutlu günler dileriz :)"); break;
              case 4 : printf("Fanta aldınız fiyat = 50 TLTekrar bekleriz\nMutlu günler dileriz :)"); break;
              default : ("Geçersiz işlem\n(1-2-3-4) numaralı işlemlerden birini seçiniz."); break;
            
          }
          break;

    
             default : printf("Geçersiz kategori!"); break;
     }
      
    

       return 0;
}