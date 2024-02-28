# jumlahKursi
# jumlahPintu

from Vehicle import Vehicle

class Car(Vehicle):
    __jumlahKursi = ""
    __jumlahPintu = ""

    def __init__(self, jumlahKursi = "", jumlahPintu = ""):
        self.__jumlahKursi = jumlahKursi
        self.__jumlahPintu = jumlahPintu

    # getter
        
    def getjumlahKursi(self):
        return self.__jumlahKursi
    
    def getjumlahPintu(self):
        return self.__jumlahPintu
    
    # setter
    
    def setjumlahKursi(self, jumlahKursi):
        self.__jumlahKursi = jumlahKursi

    def setjumlahPintu(self, jumlahPintu):
        self.__jumlahPintu = jumlahPintu