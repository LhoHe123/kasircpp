#include<iostream>
using namespace std;

int main(){
    int pilihan, harga, banyak, hasil=0, uang, kembalian;
    char yn;
    int x=0;
    int jumlahSeluruhPesanan[x];

    do{
        cout << "sopi ceode\n1. Ayam Goreng (Rp 15.000)\n2. Bebek Goreng (Rp 17.000)\n3. Es Krim (Rp 8.000)\nPilih pesanan ";
        cin >> pilihan;
        switch(pilihan){
            case 1:{
                harga=15000;
                cout << "Berapa porsi? ";
                cin >> banyak;

                jumlahSeluruhPesanan[x] = banyak*harga;

                cout << "Apakah masih ada pesanan lain? (y/n) ";
                cin >> yn;
                break;
            }
            case 2:{
                harga=17000;
                cout << "Berapa porsi? ";
                cin >> banyak;

                jumlahSeluruhPesanan[x] = banyak*harga;

                cout << "Apakah masih ada pesanan lain? (y/n) ";
                cin >> yn;
                break;
            }
            case 3:{
                harga=8000;
                cout << "Berapa porsi? ";
                cin >> banyak;

                jumlahSeluruhPesanan[x] = banyak*harga;

                cout << "Apakah masih ada pesanan lain? (y/n) ";
                cin >> yn;
                break;
            }
            default:{
                cout << "Menu tidak tersedia" << endl;
                harga = 0;
                break;
            }
        }
        x++;
    }while(yn == 'y' || yn == 'Y');
    for (int i = 0; i < x; i++)
    {
        hasil=hasil+jumlahSeluruhPesanan[i];
    }
    cout << "==========================\nPembayaran\n==========================\nTotal pesanan: Rp " << hasil << "\n==========================" << endl;

    do{
        cout << "Masukkan uang yang diberikan : ";
        cin >> uang;
        if(uang < hasil){
            cout << "Uang tidak cukup!" << endl;
        }
    }while(uang < hasil);
    
    kembalian = uang - hasil;
    cout << "Transaksi berhasil!\nKembalian : Rp " << kembalian << endl;
}