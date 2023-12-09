#include <iostream>
using namespace std;

// Fungsi login
bool login(string username, string password) {
    return username == "fadli" && password == "123230049";
}

// fungsi stok
void stok(int jumlah) {
    cout << "Stok barang saat ini: "<< jumlah;
}

// fungsi tambah stok
void tambah_stok(int &jumlah, int tambahan) {
    jumlah += tambahan;
}

// fungsi kurangi stok
void kurangi_stok(int &jumlah, int kurangi) {
    jumlah -= kurangi;
}

int main() {

    // deklarasi variable main
    string user, pass, x;
    int nomor, penambahan, pengurangan, jumlah_stok = 0;
    bool menu;

    cout << "Silahkan login\n";

    // input username dan password
    do { // jika username atau password salah maka akan kembali ke login lagi, jika keduanya benar akan ke program selanjutnya
        cout << "Username: "; cin >> user;
        cout << "Password: "; cin >> pass;
        if (!login(user,pass))
            cout << "Username atau password anda salah, silahkan ulangi lagi\n\n";

    } while(!login(user, pass));
        cout << "Login berhasil";
    
    system("cls");

    cout << "Halo, selamat datang " << user;

    // menu manajemen stok
    do { 
    cout << "\nMenu";
    cout << "\n[1] Lihat stok barang";
    cout << "\n[2] Tambah stok barang";
    cout << "\n[3] Kurangi stok barang";
    cout << "\n[Lainnya] Keluar";
    cout << "\n\nPilih menu: "; 
    cin >> nomor;
    cout << endl;

    switch (nomor)
    {
    case 1: // jika pilih nomor 1
        stok(jumlah_stok); // memanggil fungsi stok
        break;
    
    case 2: // jika pilih nomor 2
        cout << "Masukkan jumlah barang yang masuk: "; 
        cin >> penambahan;
        tambah_stok(jumlah_stok, penambahan); // memanggil fungsi tambah stok
        cout << "Penambahan stok berhasil";
        cout << "\n\nStok barang saat ini adalah " << jumlah_stok;
        break;
    
    case 3: // jika pilih nomor 3
        cout << "Masukkan jumlah barang yang keluar: "; 
        cin >> pengurangan;
        if (jumlah_stok >= pengurangan ) {
            kurangi_stok(jumlah_stok, pengurangan); // memanggil fungsi kurangi stok
            cout << "Pengurangan stok berhasil";
            }

        else if (jumlah_stok < pengurangan) { // jika pengurangan stok melebihi stok yang tersedia
            cout << "Pengurangan stok gagal, karena stok anda kurang " << pengurangan - jumlah_stok;
        }
        
        cout << "\n\nStok barang saat ini adalah " << jumlah_stok;
        break;
    
    default: // jika pilih selain nomor 1 - 3
        cout << "Terima kasih";
        exit(0);
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