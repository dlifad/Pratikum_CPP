#include <iostream>
#include <cmath>
# define phi 3.14
using namespace std;

// Fungsi login
bool login (string username, string password) {
    return username == "fadli" && password == "123230049";
}

// fungsi volume tabung
float v_tabung(float r, float t) {
    float rumus = phi * pow(r,2) * t;
    return rumus;
}

// fungsi volume kerucut
float v_kerucut(float r, float t) {
    float rumus = (1.0 / 3.0) * phi * pow(r,2) * t; 
    return rumus;
}

// fungsi keliling segitiga
float k_segitiga(float a, float b, float c) {
    float rumus = a + b + c;
    return rumus;
}

// fungsi luas segitiga
float l_segitiga(float a, float b, float c) {
    float s = (a + b + c) / 2;
    float rumus = sqrt(s * (s - a) * (s - b) * (s - c));
    return rumus;
}

// fungsi keliling persegi panjang
float k_persegiPanjang(float p, float l) {
    float rumus = 2 * (p+l);
    return rumus;
}

// fungsi luas persegi panjang
float l_persegiPanjang(float p, float l) {
    float rumus = p * l;
    return rumus;
}

int main() {

    // deklarasi variable main
    string user, pass, x;
    int nomor;
    float jari_jari, tinggi, sisi_a, sisi_b, sisi_c, panjang, lebar;
    bool menu;

    cout << "Silahkan login" << endl;

    // input username dan password
    do { // jika username atau password salah maka akan kembali ke login lagi, jika keduanya benar akan ke program selanjutnya
        cout << "Username: "; cin >> user;
        cout << "Password: "; cin >> pass;
        if(!login(user, pass))
            cout << "Username atau password anda salah, silahkan ulangi lagi!\n\n";
    } while (!login(user, pass));
        cout << "Login anda berhasil";
    
    do {
    system("cls");
    // menu perhitungan 
    cout << "Menu perhitungan:";
    cout << "\n1. Volume tabung";
    cout << "\n2. Volume kerucut";
    cout << "\n3. Keliling dan Luas Segitiga";
    cout << "\n4. Keliling dan Luas Persegi Panjang";

    do { // input nomor menu, jika menginput nomor yang tidak ada di menu maka akan menginput ulang
    cout << "\n\nHitung nomor? "; cin >> nomor;

    if (nomor < 1 || nomor > 4) {
        cout << "Menu yang anda pilih tidak ada";
    }
    } while(nomor < 1 || nomor > 4);

    switch (nomor)
    {
    case 1 : // jika input nomor 1
        cout << "Menghitung volume tabung\n\n"; 
        cout << "Masukkan Jari-jari: "; cin >> jari_jari;
        cout << "Masukkan Tinggi: "; cin >> tinggi;
        cout << "\nVolumenya adalah " << v_tabung(jari_jari, tinggi); // memanggil fungsi volume tabung
        break;
    
    case 2 : // jika input nomor 2
        cout << "Menghitung volume kerucut\n\n";
        cout << "Masukkan Jari-jari: "; cin >> jari_jari;
        cout << "Masukkan Tinggi: "; cin >> tinggi;
        cout << "\nVolumenya adalah " << v_kerucut(jari_jari, tinggi); // memanggil fungsi volume kerucut
        break;
    
    case 3 : // jika input nomor 3
        cout << "Menghitung keliling dan luas segitiga\n\n";
        cout << "Masukkan sisi a: "; cin >> sisi_a;
        cout << "Masukkan sisi b: "; cin >> sisi_b;
        cout << "Masukkan sisi c: "; cin >> sisi_c;
        cout << "\nKelilingnya adalah " << k_segitiga(sisi_a, sisi_b, sisi_c); // memanggil fungsi keliling segitiga
        cout << "\nLuasnya adalah " << l_segitiga(sisi_a, sisi_b, sisi_c); // memanggil fungsi luas segitiga
        break;

    case 4 : // jika input nomor 4
        cout << "Menghitung keliling dan luas persegi panjang\n\n";
        cout << "Masukkan panjang: "; cin >> panjang;
        cout << "Masukkan lebar: "; cin >> lebar;
        cout << "\nKeliling persegi panjangnya adalah " << k_persegiPanjang(panjang, lebar); // memanggil fungsi keliling persegi panjang
        cout << "\nLuas persegi panjangnya adalah " << l_persegiPanjang(panjang, lebar); // memanggil fungsi luas persegi panjang
        break;

    default: // jika input nomor selain di menu
        cout << "Menu yang dipilih tidak ada";
        break;
    }

        do { 
        cout << "\n\nApakah anda ingin kembali ke menu? (y/n): "; cin >> x; // jika menginput 'y' maka akan kembali ke perhitungan, jika menginput 'n' maka akan keluar dari program 

        if (x != "y" && x != "n") { // jika menginput selain 'y' atau 'n', maka akan ulangi input lagi
            cout << "Kode yang anda masukkan tidak valid";
        }
        } while(x != "y" && x != "n");

        if (x == "n") {
            exit(0);
            }

    } while(!menu);

}