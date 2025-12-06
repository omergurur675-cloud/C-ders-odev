/*
SORU 10 : Kart şifresi doğru mu kontrol edilecek.

          3 yanlışta kart bloke olacak.

          Doğru girilirse menü açılacak (bakiye görüntüle, para çek, para yatır).

          Kullanıcı “0” tuşlayınca sistem kapanacak.

SORU ALGORİTMASI:
1. Başla
2. dogruSifre = 5675
3. bakiye = 5000
4. hak = 3
5. do
       Ekrana "Kart şifresini giriniz:" yaz
       Kullanıcıdan sifre al

       if (sifre != dogruSifre )
            hak = hak - 1
            Ekrana "Hatalı şifre, kalan hak: hak" yaz
       else if
            Ekrana "Şifre doğru, hoşgeldiniz." yaz
            Döngüden çık
   hak > 0 iken devam et

6- Eğer hak == 0 ise
       Ekrana "Kart bloke edildi" yaz
       Bitir

7- Tekrarla (do-while)

       Menü yaz:
          1- Bakiye görüntüle
          2- Para çek
          3- Para yatır
          0- Çıkış

       Kullanıcıdan secim al

       if secim == 1 ise
            Ekrana bakiye yaz

      else if secim == 2 ise
            Ekrana "Çekilecek miktar:" yaz
            miktar al
            Eğer miktar > 0 VE miktar <= bakiye ise
                 bakiye = bakiye - miktar
            Değilse
                 Ekrana "Yetersiz bakiye ya da geçersiz miktar" yaz

       else if secim == 3 ise
            Ekrana "Yatırılacak miktar:" yaz
            miktar al
            Eğer miktar > 0 ise
                 bakiye = bakiye + miktar
            Değilse
                 Ekrana "Geçersiz miktar" yaz

       else if secim != 0 ve (1,2,3 değilse)
            Ekrana "Geçersiz seçim" yaz

   secim != 0 iken devam et

8- Ekrana "İyi günler" yaz

9- Bitir


*/


#include <stdio.h>

int main() {
    int doğru_ş = 5675;
    int girdi_şifre;
    int hak = 3;
    int bakiye = 5000;
    int seçim, miktar;

   
    do {
        printf("Lütfen şifrenizi giriniz: ");
        scanf("%d", &girdi_şifre);

        if (girdi_şifre != doğru_ş) {
            hak--;
            if (hak > 0)
                printf("Yanlış şifre! %d hakkınız kaldı.\n", hak);
        } else {
            printf("Şifre doğru, hoş geldiniz.\n");
            break;
        }

    } while (hak > 0);

    if (hak == 0) {
        printf("Kart bloke edildi.\n");
        return 0;
    }

    do {
        printf("\n--- ATM MENÜ ---\n");
        printf("1. Para çekme\n");
        printf("2. Para yatırma\n");
        printf("0. Çıkış\n");
        printf("Seçiminiz: ");
        scanf("%d", &seçim);

        if (seçim == 1) {
            printf("Bakiyeniz: %d\n", bakiye);
            printf("Çekmek istediğiniz miktar: ");
            scanf("%d", &miktar);
            if (miktar > 0 && miktar <= bakiye) {
                bakiye -= miktar;
                printf("%d TL başarıyla çekildi. İyi günler.\n", miktar);
            } else {
                printf("Geçersiz miktar veya yetersiz bakiye.\n");
            }
        }
        else if (seçim == 2) {
            printf("Yatırmak istediğiniz miktar: ");
            scanf("%d", &miktar);
            if (miktar > 0) {
                bakiye += miktar;
                printf("%d TL başarıyla yatırıldı. İyi günler.\n", miktar);
            } else {
                printf("Geçersiz miktar.\n");
            }
        }
        else if (seçim != 0) {
            printf("Geçersiz seçim.\n");
        }

    } while (seçim != 0);

    printf("İyi günler.\n");
    return 0;
}

            
        


          
    
  
