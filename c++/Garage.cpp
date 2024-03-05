#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Vehicle.cpp" // Assuming Vehicle class is defined in Vehicle.h

using namespace std;

class Garage : public Vehicle{
private:
    string nama;
    string luas;
    vector<Vehicle> daftarKendaraan;

public:
    Garage(string nama = "", string luas = "") {
        this->nama = nama;
        this->luas = luas;
    }

    string getNama() {
        return nama;
    }

    string getLuas() {
        return luas;
    }

    vector<Vehicle> getDaftarKendaraan() {
        return daftarKendaraan;
    }

    void setNama(string nama) {
        this->nama = nama;
    }

    void setLuas(string luas) {
        this->luas = luas;
    }

    void tambahKendaraan(const Vehicle& kendaraan) {
        daftarKendaraan.push_back(kendaraan);
    }
};
