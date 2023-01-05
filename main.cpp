#include <iostream>
#include "flight.h"
using namespace std;

int main()
{
    ListJadwal L;
    int n = 3;
    int i = 1;
    string Kode, Jenis, Tanggal, Waktu, Asal, Tujuan, dari, ke, tanggal;
    int Kapasitas;
    adr_jadwalP P;
    infotype X;

    createListJadwal_1301213217(L);
    while(i <= n){
        cout << "data ke- " << i << endl;
        cout<< "Masukkan Kode      : ";
        cin >> Kode;
        X.Kode = Kode;
        cout<< "Masukkan Jenis     : ";
        cin >> Jenis;
        X.Jenis = Jenis;
        cout<< "Masukkan Tanggal   : ";
        cin >> Tanggal ;
        X.Tanggal = Tanggal ;
        cout<< "Masukkan Waktu     : ";
        cin >> Waktu;
        X.Waktu = Waktu;
        cout<< "Masukkan Asal      : ";
        cin >> Asal;
        X.Asal = Asal;
        cout<< "Masukkan Tujuan    : ";
        cin >> Tujuan;
        X.Tujuan = Tujuan;
        cout<< "Masukkan Kapasitas : ";
        cin >> Kapasitas;
        cout <<endl;
        X.Kapasitas = Kapasitas;
        P = createElemenJadwal_1301213217(X);
        InsertLastJ_1301213217(L, P);
        i++;
    }

    cout <<endl;
    cout << "Sebelum Dihapus"<<endl;
    ShowJadwal_1301213217(L);
    DeleteFirstJ_1301213217(L,P);
    cout <<endl;
    cout << "Setelah Dihapus"<<endl;
    ShowJadwal_1301213217(L);
    cout <<endl;

    cout << "-- Jadwal --"<<endl;
    cout << " Asal : ";
    cin >> dari;
    cout << " Tujuan : ";
    cin >> ke;
    cout << " Tanggal : ";
    cin >> tanggal;
    cout <<endl;

    if(SearchJ_1301213217(L, dari, ke, tanggal)){
        cout << "Jadwal Ditemukan"<<endl;
        adr_jadwalP P = ((L).first);
        if ((P)->info.Asal == dari && (P)->info.Tujuan == ke && (P)->info.Tanggal == tanggal){
            cout <<"Kode penerbangan      : "<< (P)->info.Kode << endl;
            cout <<"Jenis penerbangan     : "<< (P)->info.Jenis << endl;
            cout <<"Tanggal penerbangan   : "<< (P)->info.Tanggal << endl;
            cout <<"Waktu penerbangan     : "<< (P)->info.Waktu << endl;
            cout <<"Asal penerbangan      : "<< (P)->info.Asal << endl;
            cout <<"Tujuan penerbangan    : "<< (P)->info.Tujuan << endl;
            cout <<"Kapasitas penerbangan : "<< (P)->info.Kapasitas << endl;
        }else{
            P = (P)->next;
        }
    if(!SearchJ_1301213217(L, dari, ke, tanggal)){
        cout << "Tidak Ada Jadwal Penerbangan"<<endl;
    }
    return 0;
    }
}
