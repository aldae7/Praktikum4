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
