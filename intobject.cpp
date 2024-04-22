#include <iostream>
using namespace std;

class bangundatar {
    private :
        float panjang, lebar;
    public :
        float luas;

        void input () {
            cout << "Masukkan Panjangnya = ";
            cin >> panjang;
            cout << "masukkan lebarnya = ";
            cin >> lebar;

            float hitungluas () {
                return panjang * lebar;
            } 


            void display () {
                cout << "Panjangnya = " << panjang << endl;
                cout << "lebarnya = " << lebar << endl;
                cout << "luasnya = " << hitungluas << endl;
            }
        }      
};

int main () {
    bangundatar.pp;
    pp.input;
    pp.display();


    return 0;
}

