#include <iostream>
using namespace std;
int main() {

    // Deklarasi variable
    string user, password, cekuser="fadli", cekpw="123230049", x;
    bool ulang = true;
    int i, bilangan1, bilangan2, jumlah, penjumlahan;

    // input username dan password
    do { // jika username atau password salah maka akan kembali ke login lagi, jika keduanya benar akan ke program selanjutnya
    cout << "Username: "; cin >> user;
    cout << "Password: "; cin >> password;

    if ((user != cekuser) || (password != cekpw)) { 
        cout << "Username atau Password anda salah, silahkan ulangi kembali!" << endl;
        cout << endl;
    }
    }
    while ((user != cekuser) || (password != cekpw)); 
    cout << "Login berhasil" << endl;

    do {
        jumlah = 0;
        penjumlahan = 0;
        system ("cls");        
        cout << "Menentukan bilangan ganjil pada suatu bilangan\n\n"; // menentukan kedua bilangan dahulu
        cout << "Masukan batas bilangan pertama: "; cin >> bilangan1;
        cout << "Masukan batas bilangan terakhir: "; cin >> bilangan2;

        cout << "\nBilangan ganjil yang ada di antara " << bilangan1 << " sampai dengan " << bilangan2 << " adalah ";
        
        for (i = bilangan1; i <= bilangan2; i++) // akan mengulangi pernyataan ini selama kondisinya true
            {
            if ((i % 2) == 1) {
                cout << i << " "; // menampilkan bilangan ganjil
                jumlah++; // menampilkan jumlah bilangan ganjil
                }
            }
        cout << "\n\nJumlah bilangan ganjil di antara " << bilangan1 << " sampai dengan " << bilangan2 <<  " adalah "  << jumlah;

        do { // jika menginput 'y' maka akan kembali ke perhitungan, jika menginput 'n' maka akan keluar dari program 
        cout << "\n\nApakah anda ingin mengulangi? (y/n): "; cin >> x;
        if (x != "y" && x != "n") { // jika menginput selain 'y' atau 'n', maka akan ulangi input lagi
            cout << "kode yang anda masukkan tidak valid";}
        } 
        while(x != "y" && x != "n");
        if (x == "y") {
            ulang = false;
            }
        else if (x == "n") {
                exit(0);
                }
            
    } 
    while (!ulang);
}


