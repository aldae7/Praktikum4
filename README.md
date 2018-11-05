#Praktikum4

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
