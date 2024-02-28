# jenisMotor
# kapasitasTangki

from Vehicle import Vehicle

class Motorcycle(Vehicle):
    __jenisMotor = ""
    __kapasitasTangki = ""

    def __init__(self, jenisMotor = "", kapasitasTangki = ""):
        self.__jenisMotor = jenisMotor
        self.__kapasitasTangki = kapasitasTangki

    # getter
        
    def getjenisMotor(self):
        return self.__jenisMotor
    
    def getkapasitasTangki(self):
        return self.__kapasitasTangki
    
    # setter
    
    def setjenisMotor(self, jenisMotor):
        self.__jenisMotor = jenisMotor

    def setkapasitasTangki(self, kapasitasTangki):
        self.__kapasitasTangki = kapasitasTangki