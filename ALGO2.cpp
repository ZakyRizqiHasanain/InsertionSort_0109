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


}