#Praktikum4
#

**Soal 18 Bagian A**
**Program mencari bilangan terbesar menggunakan DO WHILE**

**Alur Program**

1. mendeklarasikan Nilai Maksimum dengan bilangan satuan dgn syntax ```int max, a;```, sebagai nilai input.
2. Menentukan nilai maksimum untuk batas akhir nilai terbesar syntax ```max =0;``` .
3. Mendeskripsikan nilai **a** dgn syntax cout dan cin.
4. Membandingkan nilai maksimum dengan nilai a dengan syntax ```if(max < a)```.
5. kemudian cetak bilangan terbesar dengan mengetik yang kita tentuin di nilai max.
6. end

**Code Pregoram**

```c++
#include <iostream>

using namespace std;

int main()
{
    int max, a;
    max =0;

    do {
        cout << "Masukkan Bil = ";
        cin >> a;
            if(max < a)
            max = a;
    }while (a != 0);
    cout << "Bilangan terbesar adalah " << max << endl;
    return 0;
}

```

**Soal 18 Bagian B**
**Program Menghitung Total belanja**

**Alur Program**

1. Kita mendeklarasikan Jumlah_beli, Total_beli, x, y, dan a, sebagia variabel input.
2. dan di lanjutkan tambahan input Harga, Harga barang, Total, Bayar, diskon dengan Syntax ```long int```.
3. dan masukkan deskripsi (cout cin) Jumlah barang (N).
4. kita bandingkan X dan y dengan rumus while dengan syntax ```while (X <= y).
5. kemudian deskripsikan variabel a,  jumlah barang, harga.
6. kemudian jumlahkan Harga barang, Total, Total beli.
7. kemudian bandingkan total dengan 1000000 dengan syntax ```if (Total <= 1000000)```
   dan mengetahui diskon dgn jumlah total dikali 10/100.
8. dan yang lain jika total lebih dari 501000 sampai total kurang dari 1000000
   maka diskon sama dengan total dikali 5/100 dan lainnya **else** diskon =0.
9. menjumlah kan bayar yang di beli yaitu bayar sama dengan Total dikurang diskon.
10. terakhir mendeskripsikan Total barang, total semua pembelian, Diskon, dan bayar.
11. selesai.

**Code program**

```c++

#include <iostream>

using namespace std;

int main()
{
    cout << " |                     ALDINO FAIQUL FAJRIAN                       | " << endl;
    cout << "---------------------------------------------------------------------" << endl;
    cout << "Tugas Praktikum4" << "Program Menghitung Total Belanja              | " << endl;
    cout << "---------------------------------------------------------------------" << endl;
    int Jumlah_beli=0, Total_beli=0, x, y, a;
    long int
    Harga=0, Harga_Barang=0, Total=0, Bayar=0, diskon;
    cout << "Masukkan Jumlah barang (N): "; cin >> y;
    x=1;

    while(x <= y)
    {
        cout << "Barang Ke -"; cin >> a;
        cout << "Masuknya banyaknya barang: "; cin >> Jumlah_beli;
        cout << "Masukkan harga barang pd "; cin >> Harga;
        Harga_Barang = Harga * Jumlah_beli;
        Total = Total + Harga_Barang;
        Total_beli +- Jumlah_beli;
        x++;
    }
    if (Total >= 1000000)
    {
        diskon= Total * 10/100;
    }
    else if (Total > 50100 && Total < 1000000)
    {
        diskon = Total * 5/100;
    }else {
        diskon= 0;
    }
    Bayar= Total - diskon;
    cout << "|-------------------------------------------------------------------|" << endl;
    cout << "|                         Total Barang Yang dibeli         |" << Total_beli << endl;
    cout << "|-------------------------------------------------------------------|" << endl;
    cout << "|                         Total Semua Pembelian            |Rp" << Total << endl;
    cout << "|-------------------------------------------------------------------|" << endl;
    cout << "|                         Mendapatkan diskon sebesar       |Rp" << diskon << endl;
    cout << "|-------------------------------------------------------------------|" << endl;
    cout << "|                         Total yang harus di bayar        |Rp" << Bayar << endl;
    cout << "TERIMA KASIH / SYUKRON" <<endl;

}

```

![img](https://raw.githubusercontent.com/aldae7/Praktikum4/master/hargabarang.png)