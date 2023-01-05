#include "flight.h"

void createListJadwal_1301213217(ListJadwal &L) {
    ((L).first) = NULL;
}

adr_jadwalP createElemenJadwal_1301213217(infotype X) {
    adr_jadwalP P = new elemenJadwal;
    (P)->info = X;
    (P)->next = NULL;
    return P;
}

void InsertLastJ_1301213217(ListJadwal &L, adr_jadwalP P) {
    if (((L).first) == NULL) {
        ((L).first) = P;
    } else {
        adr_jadwalP Q;
        Q = ((L).first);
        while ((Q)->next != NULL) {
            Q = (Q)->next;
        }
        (Q)->next = P;
    }
}

void ShowJadwal_1301213217(ListJadwal L) {
    if (((L).first) == NULL) {
        cout << "Kosong" <<endl;
    }else {
        adr_jadwalP P = ((L).first);
        while ((P)->next != NULL){
            cout <<"Kode penerbangan : "<< (P)->info.Kode <<endl;
            cout <<"Jenis penerbangan : "<< (P)->info.Jenis <<endl;
            cout <<"Tanggal penerbangan : "<< (P)->info.Tanggal <<endl;
            cout <<"Waktu penerbangan : "<< (P)->info.Waktu <<endl;
            cout <<"Asal penerbangan : "<< (P)->info.Asal <<endl;
            cout <<"Tujuan penerbangan : "<< (P)->info.Tujuan <<endl;
            cout <<"Kapasitas penerbangan : "<< (P)->info.Kapasitas <<endl;

            P = (P)->next;
        }
        cout <<"Kode penerbangan : "<< (P)->info.Kode <<endl;
        cout <<"Jenis penerbangan : "<< (P)->info.Jenis <<endl;
        cout <<"Tanggal penerbangan : "<< (P)->info.Tanggal <<endl;
        cout <<"Waktu penerbangan : "<< (P)->info.Waktu <<endl;
        cout <<"Asal penerbangan : "<< (P)->info.Asal <<endl;
        cout <<"Tujuan penerbangan : "<< (P)->info.Tujuan <<endl;
        cout <<"Kapasitas penerbangan : "<< (P)->info.Kapasitas <<endl;
    }
}

void DeleteFirstJ_1301213217(ListJadwal &L, adr_jadwalP P) {
   if (((L).first) == NULL) {
        cout << "Kosong" <<endl;
    }else if ((((L).first))->next == NULL){
        P = ((L).first);
        ((L).first) = NULL;
    }else {
        P = ((L).first);
        ((L).first) = (((L).first))->next;
        (P)->next = NULL;
    }
}

bool SearchJ_1301213217(ListJadwal L, string dari, string ke, string tanggal) {
adr_jadwalP Find = ((L).first);
    while (Find != NULL){
        if ((Find)->info.Asal == dari && (Find)->info.Tujuan == ke && (Find)->info.Tanggal == tanggal){
            return true;
        }else{
            Find = (Find)->next;
        }
    }
    return false;
}
