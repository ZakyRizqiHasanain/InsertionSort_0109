#include <iostream>
using namespace std;

int arr [20]; // Membuat array dengan panjang data 20
int n; // Membuat variable input n

void input (){
    // Procedure input
    while (true)
    {
        cout << "Masukkan junlah data pada array : "; // Membuat inputan jumlah element array
        cin >> n; // Memmanggil variable inputan n
    
    if (n<=20)
    { // Membuat kondisi n tidak lebih dari 20
        break;
    }
    else 
    {
        cout << "\nArray yang anda masukkan maksimal 20 elemen.\n"; // Menampilkan pesan jika data lebih dari 20
    }
    }
    cout << endl; // Membuat jarak per baris program 
    cout << "======================" << endl; // Membuat tampilan susunan data element array
    cout << "Masukkan element array" << endl;
    cout << "======================" << endl;

    for (int i = 0; i < n;i++) // Menggunakan perulangan for untuk menginput nilai data pada array
    {
        cout << "Data ke-" << (i + 1) << ": "; // Membuat atau menginput nilai data n
        cin >> arr[1]; // Menyimpan nilai data n kedalan array arr
    }
}

