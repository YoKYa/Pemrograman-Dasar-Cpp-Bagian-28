#include <iostream>

using namespace std;

int main(){
    system("cls");
    // Rekursif Adalah suatu fungsi yang memanggil fungsi itu sendiri
    
    // Fungsi Pangkat
    double angka, pangkat, hasil;
    cout << "Masukkan Angka Yang dipangkatkan : ";
    cin >> angka;
    cout << "Masukkan Pangkat dari angka : ";
    cin >> pangkat;
    hasil = PangkatRekursif(angka, pangkat);


    return 0;
}


// Fungsi Rekursif
double PangkatRekursif(double angka, double pangkat){
    if (pangkat <= 1){
        return angka;
    }else{
        return angka * PangkatRekursif(angka, pangkat-1); // Memanggil Fungsi Sendiri
    }
}