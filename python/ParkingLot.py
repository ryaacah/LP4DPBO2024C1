# kapasitas
# jumlahKendaraan

from Garage import Garage

class ParkingLot(Garage):
    __kapasitas = ""
    __jumlahKendaraan = ""

    def __init__(self, kapasitas = "", jumlahKendaraan = ""):
        self.__kapasitas = kapasitas
        self.__jumlahKendaraan = jumlahKendaraan

    # getter
        
    def getkapasitas(self):
        return self.__kapasitas
    
    def getjumlahKendaraan(self):
        return self.__jumlahKendaraan
    
    # setter
    
    def setkapasitas(self, kapasitas):
        self.__kapasitas = kapasitas

    def setjumlahKendaraan(self, jumlahKendaraan):
        self.__jumlahKendaraan = jumlahKendaraan