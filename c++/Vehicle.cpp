#pragma once
#include <iostream>
#include <string>

using namespace std;

class Vehicle {
private:
    string platNomor;
    string merk;
    string tahunProduksi;
    string warna;

public:
    Vehicle(string platNomor="", string merk="", string tahunProduksi="", string warna="") {
        this->platNomor = platNomor;
        this->merk = merk;
        this->tahunProduksi = tahunProduksi;
        this->warna = warna;
    }

    // getter
    string getPlatNomor() {
        return platNomor;
    }

    string getMerk() {
        return merk;
    }

    string getTahunProduksi() {
        return tahunProduksi;
    }

    string getWarna() {
        return warna;
    }

    // setter
    void setPlatNomor(string platNomor) {
        this->platNomor = platNomor;
    }

    void setMerk(string merk) {
        this->merk = merk;
    }

    void setTahunProduksi(string tahunProduksi) {
        this->tahunProduksi = tahunProduksi;
    }

    void setWarna(string warna) {
        this->warna = warna;
    }
};
