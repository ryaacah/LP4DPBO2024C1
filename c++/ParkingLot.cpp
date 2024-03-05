#pragma once
#include <iostream>
#include <string>
#include "Garage.cpp" // Assuming Garage class is defined in Garage.h

using namespace std;

class ParkingLot : public Garage {
private:
    string kapasitas;
    string jumlahKendaraan;

public:
    ParkingLot(string kapasitas = "", string jumlahKendaraan = "") {
        this->kapasitas = kapasitas;
        this->jumlahKendaraan = jumlahKendaraan;
    }

    string getKapasitas() {
        return kapasitas;
    }

    string getJumlahKendaraan() {
        return jumlahKendaraan;
    }

    void setKapasitas(string kapasitas) {
        this->kapasitas = kapasitas;
    }

    void setJumlahKendaraan(string jumlahKendaraan) {
        this->jumlahKendaraan = jumlahKendaraan;
    }
};
