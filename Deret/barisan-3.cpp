#include <iostream>
#include <vector>

using namespace std;

class Barisan{
    public:
    int a, b, beda, Un, Nilai_Un;
    int Ub;
    
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
    if(a>0 && Ub>0){
        beda = (Ub - a) /(b-1);
        // cout << Ub;
    }
    else if(a<0 && Ub<0){
        int invert_a = a*(-1);
        beda = (Ub+invert_a)/(b-1);
        // cout << Ub;
    }
    else{
        cout << "error";
    }
    // cout << "Suku ke n : " << Un;
}

void Barisan::suku_ke_n(){
    Nilai_Un = a + (Un - 1) * beda;
    cout << "Suku ke " << Un << " barisan tersebut = " << Nilai_Un;
}

int main(){
    int a, b, Ub, Un;
    cout << "Masukkan suku pertama = ";
    cin >> a;
    cout << "Urutan suku ke-b = ";
    cin >> b;
    cout << "Nilai Suku ke-b yang diketahui = ";
    cin >> Ub;
    cout << "Suku ke-n yang ditanya =  ";
    cin >> Un;
    Barisan satu;
    satu.Suku(a, b, Ub, Un);
    satu.selisih();
    satu.suku_ke_n();
}