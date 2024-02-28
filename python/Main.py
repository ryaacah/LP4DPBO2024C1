from ParkingLot import ParkingLot
from Car import Car
from Motorcycle import Motorcycle

listCar = []

car1 = Car()
car1.setplatNomor("F1234AB")
car1.setmerk("avansa")
car1.settahunProduksi("2010")
car1.setwarna("putih")
car1.setjumlahKursi("8")
car1.setjumlahPintu("4")
listCar.append(car1)

car2 = Car()
car2.setplatNomor("A6543BC")
car2.setmerk("mersi")
car2.settahunProduksi("2020")
car2.setwarna("silver")
car2.setjumlahKursi("2")
car2.setjumlahPintu("2")
listCar.append(car2)

listmtr = []

mtr1 = Motorcycle()
mtr1.setplatNomor("A4256RW")
mtr1.setmerk("supra")
mtr1.settahunProduksi("2019")
mtr1.setwarna("merah")
mtr1.setjenisMotor("kopling")
mtr1.setkapasitasTangki("50")
listmtr.append(mtr1)

mtr2 = Motorcycle()
mtr2.setplatNomor("H5678OW")
mtr2.setmerk("scoppi")
mtr2.settahunProduksi("2008")
mtr2.setwarna("hitam")
mtr2.setjenisMotor("matic")
mtr2.setkapasitasTangki("30")
listmtr.append(mtr2)

# listparkir = []

pr1 = ParkingLot()
pr1.setnama("mobil")
pr1.setluas("100")
pr1.setkapasitas("10")
pr1.setdaftarKendaraan(listCar)
pr1.setjumlahKendaraan("2")
# listparkir.append(pr1)

pr2 = ParkingLot()
pr2.setnama("motor")
pr2.setluas("10")
pr2.setkapasitas("5")
pr2.setdaftarKendaraan(listmtr) 
pr2.setjumlahKendaraan("2")
# listparkir.append(pr2)

print(" -------------LIST TEMPAT PARKIR MOBIL-------------")

print("   Nama Garasi                 :", pr1.getnama())
print("   Luas Garasi(m2)             :", pr1.getluas())
print("   Kapasitas Kendaraan         :", pr1.getkapasitas())
print("   Daftar Kendaraan            :")
no = 1
for mobil in listCar:
    print("   "+str(no)+". Flat Nomor                ", mobil.getplatNomor())
    print("      Merk Kendaraan           :", mobil.getmerk())
    print("      Tahun Produksi           :", mobil.gettahunProduksi())
    print("      Warna                    :", mobil.getwarna())
    print("      Jumlah Kursi             :", mobil.getjumlahKursi())
    print("      Jumlah Pintu             :", mobil.getjumlahPintu())
no=+1
print("   Jumlah Kendaraan            :", pr1.getjumlahKendaraan())

print(" -------------LIST TEMPAT PARKIR MOTOR-------------")

print("   Nama Garasi                 :", pr2.getnama())
print("   Luas Garasi(m2)             :", pr2.getluas())
print("   Kapasitas Kendaraan         :", pr2.getkapasitas())
print("   Daftar Kendaraan             ")
no = 1
for motor in listmtr:
    print(str(no)+". Flat Nomor                  :", motor.getplatNomor())
    print("   Merk Kendaraan              :", motor.getmerk())
    print("   Tahun Produksi              :", motor.gettahunProduksi())
    print("   Warna                       :", motor.getwarna())
    print("   Jenis Motor                 :", motor.getjenisMotor())
    print("   Kapasitas Tangki(L)         :", motor.getkapasitasTangki())
no=+1
print("   Jumlah Kendaraan            :", pr2.getjumlahKendaraan())