# nama
# luas
# daftarKendaraan
from Vehicle import Vehicle

class Garage():
    __nama = ""
    __luas = ""
    __daftarKendaraan = Vehicle()

    def __init__(self, nama="", luas="", daftarKendaraan=""):
        self.__nama = nama
        self.__luas = luas
        self.__daftarKendaraan = daftarKendaraan

    # getset
        
    def getnama(self):
        return self.__nama
    
    def getluas(self):
        return self.__luas
    
    def getdaftarKendaraan(self):
        return self.__daftarKendaraan

    
    def setnama(self, nama):
        self.__nama = nama

    def setluas(self, luas):
        self.__luas = luas

    def setdaftarKendaraan(self, daftarKendaraan):
        self.__daftarKendaraan = daftarKendaraan

    
