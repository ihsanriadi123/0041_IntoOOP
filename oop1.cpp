#include <iostream>
using namespace std;

class mahasiswa {
    public :
        string nama;
        int umur;
        string jurusan;

    void output () {
        cout << "Nama: " << nama << endl;
        cout << "Umur: " << umur << endl;
        cout << "jurusan: " << jurusan << endl;

    }
};

class matakuliah { 
    private :
        string kodeMK;
        string namaMK;
        int sks;

    public :
        void inputMK () {
            cout << "kode MK: ";
            cin >> kodeMK;
            cout << "nama MK: ";
            cin >> namaMK;
            cout << "Sks: ";
            cin >> sks;
        }
        
        void output () {
            cout << "kode MK\t: " << kodeMK <<endl;
            cout << "nama MK\t: " << namaMK <<endl;
            cout << "SKS \t: " << sks <<endl;
        }
};