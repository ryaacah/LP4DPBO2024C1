# platNomor 
# merk
# tahunProduksi
# warna

class Vehicle(): 
    __platNomor = ""
    __merk = ""
    __tahunProduksi = ""
    __warna = ""

    def __init__(self, platNomor="", merk="", tahunProduksi="", warna=""):
        self.__platNomor = platNomor
        self.__merk = merk
        self.__tahunProduksi = tahunProduksi
        self.__warna = warna

    # getset
        
    def getplatNomor(self):
        return self.__platNomor
    
    def getmerk(self):
        return self.__merk
    
    def gettahunProduksi(self):
        return self.__tahunProduksi
    
    def getwarna(self):
        return self.__warna
    
    
    
    def setplatNomor(self, platNomor):
        self.__platNomor = platNomor

    def setmerk(self, merk):
        self.__merk = merk

    def settahunProduksi(self, tahunProduksi):
        self.__tahunProduksi = tahunProduksi

    def setwarna(self, warna):
        self.__warna = warna

    
