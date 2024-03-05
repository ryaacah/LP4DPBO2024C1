#pragma once
#include <iostream>
#include <string>
#include "Vehicle.cpp"
using namespace std;

class Car : public Vehicle {
private:
    string jumlahKursi;
    string jumlahPintu;

public:
    Car(string jumlahKursi = "", string jumlahPintu = "") {
        this->jumlahKursi = jumlahKursi;
        this->jumlahPintu = jumlahPintu;
    }

    string getJumlahKursi() {
        return jumlahKursi;
    }

    string getJumlahPintu() {
        return jumlahPintu;
    }

    void setJumlahKursi(string jumlahKursi) {
        this->jumlahKursi = jumlahKursi;
    }

    void setJumlahPintu(string jumlahPintu) {
        this->jumlahPintu = jumlahPintu;
    }
};
