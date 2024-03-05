#include <iostream>
#include <vector>
#include "Car.cpp"
#include "Motorcycle.cpp" 
#include "ParkingLot.cpp"

using namespace std;

int main() {
    vector<Car> listCar;
    Car car1;
    car1.setPlatNomor("F1234AB");
    car1.setMerk("avansa");
    car1.setTahunProduksi("2010");
    car1.setWarna("putih");
    car1.setJumlahKursi("8");
    car1.setJumlahPintu("4");
    listCar.push_back(car1);

    Car car2;
    car2.setPlatNomor("A6543BC");
    car2.setMerk("mersi");
    car2.setTahunProduksi("2020");
    car2.setWarna("silver");
    car2.setJumlahKursi("2");
    car2.setJumlahPintu("2");
    listCar.push_back(car2);

    vector<Motorcycle> listmtr;
    Motorcycle mtr1;
    mtr1.setPlatNomor("A4256RW");
    mtr1.setMerk("supra");
    mtr1.setTahunProduksi("2019");
    mtr1.setWarna("merah");
    mtr1.setJenisMotor("kopling");
    mtr1.setKapasitasTangki("50");
    listmtr.push_back(mtr1);

    Motorcycle mtr2;
    mtr2.setPlatNomor("H5678OW");
    mtr2.setMerk("scoppi");
    mtr2.setTahunProduksi("2008");
    mtr2.setWarna("hitam");
    mtr2.setJenisMotor("matic");
    mtr2.setKapasitasTangki("30");
    listmtr.push_back(mtr2);

    ParkingLot pr1;
    pr1.setNama("mobil");
    pr1.setLuas("100");
    pr1.setKapasitas("10");
    // pr1.setDaftarKendaraan(listCar);
    pr1.setJumlahKendaraan("2");

    ParkingLot pr2;
    pr2.setNama("motor");
    pr2.setLuas("10");
    pr2.setKapasitas("5");
    // pr2.setDaftarKendaraan(listmtr);
    pr2.setJumlahKendaraan("2");

    cout << "-------------LIST MOBIL-------------" << endl;
    for (size_t i = 0; i < listCar.size(); ++i) {
        int no;
        for (size_t no = 1; i < listCar.size(); ++i) {
            cout << "   " << no << ". Plat Nomor               : " << listCar[i].getPlatNomor() << endl;  
            cout << "      Merk Kendaraan           : " << listCar[i].getMerk() << endl;
            cout << "      Tahun Produksi           : " << listCar[i].getTahunProduksi() << endl;
            cout << "      Warna                    : " << listCar[i].getWarna() << endl;
            cout << "      Jumlah Kursi             : " << listCar[i].getJumlahKursi() << endl;
            cout << "      Jumlah Pintu             : " << listCar[i].getJumlahPintu() << endl;
         ++no;
        }
    }
    cout << endl;

    cout << "-------------LIST MOTOR-------------" << endl;
    for (size_t i = 0; i < listmtr.size(); ++i) {
        int no;
        for (size_t no = 1; i < listmtr.size(); ++i) {
            cout << "   " << no << ". Plat Nomor               : " << listmtr[i].getPlatNomor() << endl;  
            cout << "      Merk Kendaraan           : " << listmtr[i].getMerk() << endl;
            cout << "      Tahun Produksi           : " << listmtr[i].getTahunProduksi() << endl;
            cout << "      Warna                    : " << listmtr[i].getWarna() << endl;
            cout << "      Jenis Motor              : " << listmtr[i].getJenisMotor() << endl;
            cout << "      Kapasitas Tangki(L)      : " << listmtr[i].getKapasitasTangki() << endl;
         ++no;
        }
    }
    cout << endl;

    cout << "-------------LIST TEMPAT PARKIR MOBIL-------------" << endl;
    cout << "   Nama Garasi                 : " << pr1.getNama() << endl;
    cout << "   Luas Garasi(m2)             : " << pr1.getLuas() << endl;
    cout << "   Kapasitas Kendaraan         : " << pr1.getKapasitas() << endl;
    cout << "   Daftar Kendaraan            :" << endl;
    for (size_t i = 0; i < listCar.size(); ++i) {
        int no;
        for (size_t no = 1; i < listCar.size(); ++i) {
            cout << "   " << no << ". Plat Nomor               : " << listCar[i].getPlatNomor() << endl;  
            cout << "      Merk Kendaraan           : " << listCar[i].getMerk() << endl;
            cout << "      Tahun Produksi           : " << listCar[i].getTahunProduksi() << endl;
            cout << "      Warna                    : " << listCar[i].getWarna() << endl;
            cout << "      Jumlah Kursi             : " << listCar[i].getJumlahKursi() << endl;
            cout << "      Jumlah Pintu             : " << listCar[i].getJumlahPintu() << endl;
         ++no;
        }
    }
    cout << "   Jumlah Kendaraan            : " << pr1.getJumlahKendaraan() << endl;
    cout << endl;

    cout << "-------------LIST TEMPAT PARKIR MOTOR-------------" << endl;
    cout << "   Nama Garasi                 : " << pr2.getNama() << endl;
    cout << "   Luas Garasi(m2)             : " << pr2.getLuas() << endl;
    cout << "   Kapasitas Kendaraan         : " << pr2.getKapasitas() << endl;
    cout << "   Daftar Kendaraan            :" << endl;
    for (size_t i = 0; i < listmtr.size(); ++i) {
        int no;
        for (size_t no = 1; i < listmtr.size(); ++i) {
            cout << "   " << no << ". Plat Nomor               : " << listmtr[i].getPlatNomor() << endl;  
            cout << "      Merk Kendaraan           : " << listmtr[i].getMerk() << endl;
            cout << "      Tahun Produksi           : " << listmtr[i].getTahunProduksi() << endl;
            cout << "      Warna                    : " << listmtr[i].getWarna() << endl;
            cout << "      Jenis Motor              : " << listmtr[i].getJenisMotor() << endl;
            cout << "      Kapasitas Tangki(L)      : " << listmtr[i].getKapasitasTangki() << endl;
         ++no;
        }
    }
    cout << "   Jumlah Kendaraan            : " << pr2.getJumlahKendaraan() << endl;

    return 0;
}
