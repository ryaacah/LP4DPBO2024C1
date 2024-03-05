#pragma once
#include <iostream>
#include <string>
#include "Vehicle.cpp"
using namespace std;

class Motorcycle : public Vehicle {
private:
    string jenisMotor;
    string kapasitasTangki;

public:
    Motorcycle(string jenisMotor = "", string kapasitasTangki = "") {
        this->jenisMotor = jenisMotor;
        this->kapasitasTangki = kapasitasTangki;
    }

    string getJenisMotor() {
        return jenisMotor;
    }

    string getKapasitasTangki() {
        return kapasitasTangki;
    }

    void setJenisMotor(string jenisMotor) {
        this->jenisMotor = jenisMotor;
    }

    void setKapasitasTangki(string kapasitasTangki) {
        this->kapasitasTangki = kapasitasTangki;
    }
};
