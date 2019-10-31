#include <iostream>

using namespace std;

int main()
{
    double Nilai_Ujian;
    char Indeks;

    cout << "KONVERSI NILAI SISWA \n \n";
    cout << "Masukan Nilai Ujian: ";
    cin >> Nilai_Ujian;
    cout << endl;

    if(Nilai_Ujian>=85){
        Indeks = 'B';}
    else
    if(Nilai_Ujian>=75){
        Indeks = 'C';}
    else
    if(Nilai_Ujian>=40){
        Indeks = 'D';}
    else {
        Indeks = 'E';
    }
    cout << "Indeks Siswa =" << Indeks << endl;

    return 0;
}
