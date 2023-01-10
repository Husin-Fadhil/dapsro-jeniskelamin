//judul
//input jenis kelamin
//husin fadhil a
//21 sept 2022
#include <iostream>
using namespace std;


//kamus
string nama,jeniskelamin;
string l,p;

//deskripsi
mian()
{
    cout << "output nama jenis kelamin" << endl;
    cout << "Masukan Nama  =";
    cin >> nama ;
    cout << "Masukan Jenis Kelamin  (p/l) =";
    cin >> jeniskelamin ;



    if (jeniskelamin=="l");
    {
        cout << "halo " << nama << "Jenis Kelamin laki-laki"  << endl;
    }
    if(jeniskelamin=="p");
    {
        cout << "halo " << nama << "Jenis Kelamin anda perempuan"  << endl;
    }
return 0;
}
