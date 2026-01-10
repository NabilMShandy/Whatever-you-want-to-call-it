# Program untuk mengecek bilangan desimal atau bukan

# Tentukan batas perulangan
batas = int(input("Masukkan berapa angka yang ingin anda masukkan: "))

# Untuk setiap elemen didalam jangkauan batas (0, batas)
for i in range(batas):
    # Terima input
    inputnum = input(f"Masukkan angka ke-{i+1}: ")
    
    simpaninput = []
    # Menggunakan try except untuk mengatasi error ketika program berjalan secara real time
    try:
        ubahnilai = int(inputnum)
        print("Bukan desimal")
        
    # Jika terjadi error blok kode dibawah akan dijalankan
    except ValueError:
        try:
            ubahnilai = float(ubahnilai)
            print("Bilangan desimal")
        
        # Jika masih error, biarkan tetap dalam tipe data string yang artinya bukan desimal (float)
        except ValueError:
            ubahnilai = inputnum
            print("Bukan desimal")