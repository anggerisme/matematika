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
    int a, b, Un, Nilai_Un;
    int Ub;
    double ratio;

    Suku(int a, int b, int Ub, int Un){
        this->a = a;
        this->b = b;
        this->Ub = Ub;
        this->Un = Un;
    }

    void selisih();
    void suku_ke_n();
};

void Barisan::selisih(){
    if(Ub%a==0){
        int bagi = Ub / a;
        b = b - 1;
        ratio = pow(bagi, 1.0/b);
    }
    else if(a<0 && Ub<0){
        int invert_a = a*(-1);
        ratio = (Ub+invert_a)/(b-1);
    }
    else{
        cout << "error";
    }
    // cout << "Suku ke n : " << Un;
}

void Barisan::suku_ke_n(){
    Un = Un - 1;
    Nilai_Un = pow(ratio, Un);
    Nilai_Un = a * Nilai_Un;
    cout << "Suku ke " << Un << " barisan tersebut = " << Nilai_Un;
}

int main(){
    int a, b, Ub, Un;
    cout << "Masukkan suku pertama = ";
    cin >> a;
    cout << "Urutan suku ke-b = ";
    cin >> b;
    cout << "Nilai Suku ke-b = ";
    cin >> Ub;
    cout << "Suku ke-n yang ditanya =  ";
    cin >> Un;
    Barisan satu;
    satu.Suku(a, b, Ub, Un);
    satu.selisih();
    satu.suku_ke_n();
}