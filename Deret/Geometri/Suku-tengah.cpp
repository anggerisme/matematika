#include <iostream>
#include <cmath>

using namespace std;

/*
    **************************************

    Mencari suku ke-n Jika Hanya diketahui a-nya saja saja dari suatu barisan geometri.
    
    

    Algorithma :
        1. Mencari nilai ratio -> selisih()
            karena Un = a*r^n-1
            maka r^n = Un/a
            diakarkan = pow(Un/a, 1.0/n)
        
        2. Mencari suku ke n -> suku_ke_n()
            Un = a*r^n-1

    **************************************

*/

class Barisan{
    public:
    int a, Un;
    double Ut;

    Suku(int a,int Un){
        this->a = a;
        this->Un = Un;
    }

    void selisih();
    void suku_tengah();
};

void Barisan::suku_tengah(){
        Ut = a * Un;
        Ut = pow(Ut, 1.0 / 2);
        cout << "Suku tengah = " << Ut;
}

int main(){
    int a, Un;
    cout << "Masukkan suku pertama = ";
    cin >> a;
    cout << "Masukkan suku terakhir = ";
    cin >> Un;
    Barisan satu;
    satu.Suku(a,Un);
    satu.suku_tengah();
}