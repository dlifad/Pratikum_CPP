#include <iostream>
using namespace std;
main(){

    // Deklarasi variable
    string username, password, jabatan;
    int lama_bekerja;

    cout <<"======================================" <<endl;
    cout <<"|                                    |" <<endl;
    cout <<"| Selamat Datang di Penghitung Bonus |" <<endl;
    cout <<"|            Silahkan Login          |" <<endl;
    cout <<"|                                    |" <<endl;
    cout <<"======================================" <<endl;

    // input username dan password
    cout <<"username: "; getline(cin,username);
    cout <<"password: "; cin >>password;


    // Statment pengendalian if-else

    // jika username dan password benar maka akan lanjut ke program selanjutnya
    if (username=="Zainur Fadli" && password=="zainurfadli"){
        cout <<"Selamat Login Anda Berhasil"; 
        {
            system ("cls");

            // Membuat menu
            cout <<"=====================================" <<endl;
            cout <<"|                                   |" <<endl;
            cout <<"| Halo, Selamat Datang Zainur Fadli |" <<endl;
            cout <<"|          Silahkan Pilih Menu!     |" <<endl;
            cout <<"|                                   |" <<endl;
            cout <<"=====================================" <<endl;
            cout <<"\nBerikut Jabatan yang Dapat Dipilih:"; 
            cout <<"\n- Karyawan";
            cout <<"\n- Manajer";
            cout <<"\n- CEO";
            cout <<endl;

            // input jabatan
            cout <<"\nJabatan anda: "; cin >>jabatan; 
                if (jabatan=="Karyawan" || jabatan=="Manajer" || jabatan=="CEO"){}

                // jika menginput jabatan yang tidak ada di menu, maka akan keluar dari program
                else {cout <<"Jabatan tidak ditemukan"; return 0;} 
            
            // input berapa tahun lama bekerja
            cout <<"Berapa tahun anda bekerja: "; cin >>lama_bekerja; 
                if (lama_bekerja > 0){} 

                // jika tidak menginput bilangan asli, maka akan keluar dari program
		else {cout <<"Lama tahun bekerja tidak valid"; return 0;} 
        
            // jika jabatan karyawan dan masa kerja kurang dari 5 tahun
            if (jabatan=="Karyawan" && lama_bekerja < 5) 
                cout << "Bonus anda adalah Rp" << (1000000*lama_bekerja);

                // jika jabatan karyawan dan masa kerja di antara 5 dan 15 tahun
            else if (jabatan=="Karyawan" && (lama_bekerja >= 5 && lama_bekerja <=15)) 
                    cout <<"Bonus anda adalah Rp" << (1250000*lama_bekerja);

                // jika jabatan karyawan dan masa kerja lebih dari 15 tahun
            else if (jabatan=="Karyawan" && lama_bekerja > 15) 
                    cout <<"Bonus anda adalah Rp" << (1500000*lama_bekerja);
                
                // jika jabatan manajer dan masa kerja kurang dari 5 tahun
            else if (jabatan=="Manajer" && lama_bekerja < 5) 
                    cout <<"Bonus anda adalah Rp" << (2000000*lama_bekerja); 

                // jika jabatan manajer dan masa kerja di antara 5 dan 15 tahun
            else if (jabatan=="Manajer" && (lama_bekerja >= 5 && lama_bekerja <=15)) 
                    cout <<"Bonus anda adalah Rp" << (3000000*lama_bekerja);

                // jika jabatan manajer dan masa kerja lebih dari 15 tahun 
            else if (jabatan=="Manajer" && lama_bekerja > 15) 
                    cout <<"Bonus anda adalah Rp" << (4000000*lama_bekerja);
                
                // jika jabatan CEO dan masa kerja kurang dari 5 tahun
            else if (jabatan=="CEO" && lama_bekerja < 5) 
                    cout <<"Bonus anda adalah Rp" << (5000000*lama_bekerja);

                // jika jabatan CEO dan masa kerja di antara 5 dan 15 tahun
            else if (jabatan=="CEO" && (lama_bekerja >= 5 && lama_bekerja <=15)) 
                    cout <<"Bonus anda adalah Rp" << (6000000*lama_bekerja);

                // jika jabatan CEO dan masa kerja lebih dari 15 tahun
            else if (jabatan=="CEO" && lama_bekerja > 15) 
                    cout <<"Bonus anda adalah Rp" << (6000000*lama_bekerja);                                       
        }
    }

    // jika username atau password salah maka akan keluar dari program
    else{
        cout <<"username atau password anda salah"; 
    }            
}