#ifndef FLIGHT_H_INCLUDED
#define FLIGHT_H_INCLUDED
#include <iostream>
using namespace std;

struct jadwalPenerbangan {
    string Kode, Jenis, Tanggal, Waktu, Asal, Tujuan;
    int Kapasitas;
};

typedef struct elemenJadwal *adr_jadwalP;
typedef jadwalPenerbangan infotype;

struct elemenJadwal {
    infotype info;
    adr_jadwalP next;
};

struct ListJadwal {
    adr_jadwalP first;
};

void createListJadwal_1301213217(ListJadwal &L);
adr_jadwalP createElemenJadwal_1301213217(infotype X);
void InsertLastJ_1301213217(ListJadwal &L, adr_jadwalP P);
void ShowJadwal_1301213217(ListJadwal L);
void DeleteFirstJ_1301213217(ListJadwal &L, adr_jadwalP P);
bool SearchJ_1301213217(ListJadwal L, string dari, string ke, string tanggal);

#endif // FLIGHT_H_INCLUDED
