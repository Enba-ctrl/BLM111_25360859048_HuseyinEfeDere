#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define PI 3.14159265358979323846
#define G_sayi 8

// Menü Yazdirma Fonksiyonu
void menuGoster() {
    printf("\n---- DENEY LISTESI ----\n");
    printf("1. Serbest Dusme Deneyi\n");
    printf("2. Yukari Atis Deneyi\n");
    printf("3. Agirlik Deneyi\n");
    printf("4. Kutlecekimsel Potansiyel Enerji Deneyi\n");
    printf("5. Hidrostatik Basinc Deneyi\n");
    printf("6. Arsimet Kaldirma Kuvveti Deneyi\n");
    printf("7. Basit Sarkac Periyodu Deneyi\n");
    printf("8. Sabit Ip Gerilmesi Deneyi\n");
    printf("9. Asansor Deneyi\n");
}

// Mutlak Deger Alma Fonksiyonu
double mutlakDeger(double deger) {
    return (deger < 0) ? -deger : deger;
}

// 1. Serbest Düsme Deneyi Fonksiyonu
void serbestDusme(double *ptr, char **isim, int boyut) {
    double t, h;
    printf("\n-SERBEST DUSME DENEYI-\n");
    printf("Sureyi (t) saniye cinsinden giriniz: ");
    scanf("%lf", &t);
    t = mutlakDeger(t);

    printf("Yercekimi ivmesi = g\n");
    printf("-----------------------------------------------------------\n");

    for (int i = 0; i < boyut; i++) {
        double g = *(ptr + i);
        h = 0.5 * g * t * t;
        printf("%s | g= %.2f | \n", *(isim + i), g);
        printf("Cismin kat ettigi yol: %.2f metre \n", h);
        printf("-----------------------------------------------------------\n");
    }
}

// 2. Yukari Atis Deneyi Fonksiyonu
void yukariAtis(double *ptr, char **isim, int boyut) {
    double v0, h_max;
    printf("\n[2] YUKARI ATIS DENEYI\n");
    printf("Firlatma hizini (v0) m/s cinsinden giriniz: ");
    scanf("%lf", &v0);
    v0 = mutlakDeger(v0);

    printf("Yercekimi ivmesi = g\n");
    printf("-----------------------------------------------------------\n");

    for (int i = 0; i < boyut; i++) {
        double g = *(ptr + i);
        h_max = (v0 * v0) / (2 * g);
        printf("%s | g= %.2f | \n", *(isim + i), g);
        printf("Cismin cikabildigi maksimum yukseklik: %.2f metre \n", h_max);
        printf("-----------------------------------------------------------\n");
    }
}

// 3. Agirlik Deneyi Fonksiyonu
void agirlikDeneyi(double *ptr, char **isim, int boyut) {
    double m, G;
    printf("\n[3] AGIRLIK DENEYI\n");
    printf("Cismin kutlesini (m) kg cinsinden giriniz: ");
    scanf("%lf", &m);
    m = mutlakDeger(m);

    printf("Yercekimi ivmesi = g\n");
    printf("-----------------------------------------------------------\n");

    for (int i = 0; i < boyut; i++) {
        double g = *(ptr + i);
        G = m * g;
        printf("%s | g= %.2f | \n", *(isim + i), g);
        printf("Cismin Agirligi: %.2f Newton\n", G);
        printf("-----------------------------------------------------------\n");
    }
}

// 4. Kütlecekimsel Potansiyel Enerji Deneyi Fonksiyonu
void potansiyelEnerji(double *ptr, char **isim, int boyut) {
    double m, h, Ep;
    printf("\n[4] KUTLECEKIMSEL POTANSIYEL ENERJI DENEYI\n");
    printf("Cismin kutlesini (m) kg cinsinden giriniz: ");
    scanf("%lf", &m);
    m = mutlakDeger(m);

    printf("Yuksekligi (h) metre cinsinden giriniz: ");
    scanf("%lf", &h);
    h = mutlakDeger(h);

    printf("Yercekimi ivmesi = g\n");
    printf("-----------------------------------------------------------\n");

    for (int i = 0; i < boyut; i++) {
        double g = *(ptr + i);
        Ep = m * g * h;
        printf("%s | g= %.2f | \n", *(isim + i), g);
        printf("Cismin kütlecekimsel potansiyel enerjisi: %.2f Joule\n", Ep);
        printf("-----------------------------------------------------------\n");
    }
}

// 5. Hidrostatik Basinc Deneyi Fonksiyonu
void hidroBasinc(double *ptr, char **isim, int boyut) {
    double rho, h, P;
    printf("\n[5] HIDROSTATIK BASINC DENEYI\n");
    printf("Sivinin yogunlugunu (rho) kg/m^3 cinsinden giriniz: ");
    scanf("%lf", &rho);
    rho = mutlakDeger(rho);

    printf("Derinligi (h) metre cinsinden giriniz: ");
    scanf("%lf", &h);
    h = mutlakDeger(h);

    printf("Yercekimi ivmesi = g\n");
    printf("-----------------------------------------------------------\n");

    for (int i = 0; i < boyut; i++) {
        double g = *(ptr + i);
        P = rho * g * h;
        printf("%s | g= %.2f | \n", *(isim + i), g);
        printf("Sivinin yuzeye uyguladigi hidrostatik basinc: %.2f Pascal\n", P);
        printf("-----------------------------------------------------------\n");
    }
}

// 6. Arsimet Kaldirma Kuvveti Deneyi Fonksiyonu
void kaldirmaKuvveti(double *ptr, char **isim, int boyut) {
    double rho, V, Fk;
    printf("\n[6] ARSIMET KALDIRMA KUVVETI DENEYI\n");
    printf("Sivinin yogunlugunu (rho) kg/m^3 cinsinden giriniz: ");
    scanf("%lf", &rho);
    rho = mutlakDeger(rho);

    printf("Batan hacmi (V) m^3 cinsinden giriniz: ");
    scanf("%lf", &V);
    V = mutlakDeger(V);

    printf("Yercekimi ivmesi = g\n");
    printf("-----------------------------------------------------------\n");

    for (int i = 0; i < boyut; i++) {
        double g = *(ptr + i);
        Fk = rho * g * V;
        printf("%s | g= %.2f | \n", *(isim + i), g);
        printf("Sivi tarafindan uygulanan kaldirma kuvveti: %.2f Newton\n", Fk);
        printf("-----------------------------------------------------------\n");
    }
}

// 7. Basit Sarkaç Periyodu Deneyi Fonksiyonu
void sarkaPeriyodu(double *ptr, char **isim, int boyut) {
    double L, T;
    printf("\n[7] BASIT SARKAC PERIYODU DENEYI\n");
    printf("Sarkac uzunlugunu (L) metre cinsinden giriniz: ");
    scanf("%lf", &L);
    L = mutlakDeger(L);

    printf("Yercekimi ivmesi = g\n");
    printf("-----------------------------------------------------------\n");
    for (int i = 0; i < boyut; i++) {
        double g = *(ptr + i);
        T = 2 * PI * sqrt(L / g);
        printf("%s | g= %.2f | \n", *(isim + i), g);
        printf("Sistemin periyodu: %.2f saniye\n", T);
        printf("-----------------------------------------------------------\n");
    }
}

// 8. Sabit Ip Gerilmesi Deneyi Fonksiyonu
void ipGerilmesi(double *ptr, char **isim, int boyut) {
    double m, T;
    printf("\n[8] SABIT IP GERILMESI DENEYI\n");
    printf("Cismin kutlesini (m) kg cinsinden giriniz: ");
    scanf("%lf", &m);
    m = mutlakDeger(m);

    printf("Yercekimi ivmesi = g\n");
    printf("-----------------------------------------------------------\n");

    for (int i = 0; i < boyut; i++) {
        double g = *(ptr + i);
        T = m * g;
        printf("%s | g= %.2f | \n", *(isim + i), g);
        printf("Ipin gerilme kuvveti: %.2f Newton\n", T);
        printf("-----------------------------------------------------------\n");
    }
}

// 9. Asansör Deneyi Fonksiyonu
void asansorDeneyi(double *ptr, char **isim, int boyut) {
    double m, a, N;
    int durum = 0;

    printf("\n[9] ASANSOR DENEYI\n");
    printf("Cismin kutlesini (m) kg cinsinden giriniz: ");
    scanf("%lf", &m);
    m = mutlakDeger(m);

    printf("Asansor ivmesini (a) m/s^2 cinsinden giriniz: ");
    scanf("%lf", &a);
    a = mutlakDeger(a);

    printf("Asansor Hareket Durumu:\n");
    printf("1. Yukari Hizlanma veya Asagi Yavaslama (g + a)\n");
    printf("2. Asagi Hizlanma veya Yukari Yavaslama (g - a)\n");

    // while ile güvenli giris döngüsü
    while (durum != 1 && durum != 2) {
        printf("Seciminiz (1 veya 2): ");

        if (scanf("%d", &durum) != 1){
            printf("Harf girdiniz! Lutfen sayi girin.\n");
            while(getchar() != '\n'); // Buffer temizle
            durum = 0;
        }
        else if (durum != 1 && durum != 2){
            printf("Hatali sayi! Sadece 1 veya 2 giriniz.\n");
        }
    }

    printf("Yercekimi ivmesi = g\n");
    printf("-----------------------------------------------------------\n");

    for (int i = 0; i < boyut; i++) {
        double g = *(ptr + i); //

        N = (durum == 1) ? (m * (g + a)) : (m * (g - a));

        if (N < 0) N = 0;

        printf("%s | g= %.2f | \n", *(isim + i), g);
        printf("Cismin etkin agirligi: %.2f Newton\n", N);
        printf("-----------------------------------------------------------\n");
    }
}

int main() {
    // Gezegenlerin yercekimi ivmeleri (m/s^2)
    double yercekimi_ivmeleri[G_sayi] = {3.70, 8.87, 9.81, 3.71, 24.79, 10.44, 8.69, 11.15};

    // Gezegen isimleri
    char *gezegen_isimleri[G_sayi] = {"Merkur", "Venus", "Dunya", "Mars","Jupiter", "Saturn", "Uranus", "Neptun"};

    char bilim_insani[50];
    int secim = 0;

    // Bilim insani adi alma
    printf("====UZAY SIMULASYONU ====\n");
    printf("Lutfen Bilim Insani Adini Giriniz: ");
    fgets(bilim_insani, sizeof(bilim_insani), stdin);

    printf("\nHosgeldiniz, Sayin %s", bilim_insani);
    printf("Tum deneyler sizin adinizla kayit altina alinacaktir.\n\n");

    // Menü döngüsü (-1 girilene kadar devam eder)
    while (secim != -1) {
        menuGoster();
        printf("\nSeciminiz (Cikis icin -1): ");
        if (scanf("%d", &secim) != 1) {
            while(getchar() != '\n'); // Buffer temizle
            secim = 0;
        }

        if (secim == -1) {
            printf("Simulasyon sonlandiriliyor... Iyi calismalar %s.\n", bilim_insani);
            break;
        }

        switch (secim) {
            case 1: serbestDusme(yercekimi_ivmeleri, gezegen_isimleri, G_sayi); break;
            case 2: yukariAtis(yercekimi_ivmeleri, gezegen_isimleri, G_sayi); break;
            case 3: agirlikDeneyi(yercekimi_ivmeleri, gezegen_isimleri, G_sayi); break;
            case 4: potansiyelEnerji(yercekimi_ivmeleri, gezegen_isimleri, G_sayi); break;
            case 5: hidroBasinc(yercekimi_ivmeleri, gezegen_isimleri, G_sayi); break;
            case 6: kaldirmaKuvveti(yercekimi_ivmeleri, gezegen_isimleri, G_sayi); break;
            case 7: sarkaPeriyodu(yercekimi_ivmeleri, gezegen_isimleri, G_sayi); break;
            case 8: ipGerilmesi(yercekimi_ivmeleri, gezegen_isimleri, G_sayi); break;
            case 9: asansorDeneyi(yercekimi_ivmeleri, gezegen_isimleri, G_sayi); break;
            default: printf("Hatali secim! Lutfen tekrar deneyiniz.\n"); break;
        }
        printf("\n-------------------------------------------------\n");
    }

    return 0;
}
