#include <iostream>
#include <cmath>

using namespace std;

/*
    **************************************
    Keterangan program :
    ---------------------
    Mencari suku ke-n Jika hanya diketahui suku suku tertentu (Di sini disebut Ub dan Uc) 
    Ditanya :
        1. Suku pertama.
        2. Beda (selisih)
        3. Suku ke n
    ---------------------
    
    ---------------------.
    Algorithma :
        1. Mencari beda -> suku_pertama() -> metode eliminasi
            Karena nilai koefisien a sama maka yg kita eliminasi adalah nilai a
            Sehingga nilai b dari sini dapat diketahui
        2. Mencari suku pertama -> suku_pertama()
            Setelah beda diketahui maka nilai a dapat diketahui dengan 
            men-substitusikan nilai beda ke dalam persamaan a + (n-1)*beda
        3. Mencari suku ke n - suku_ke_n()
            Setelah semuanya lengkap (a dan beda) maka kita dapat mencari suku ke n yang 
            Ditanyakan. 
    ---------------------

    **************************************

*/

class Barisan{
    public:
    int a, b, c, Ub, Uc, beda, n, Un;

    Suku(int b, int c, int Ub, int Uc, int n){
        this->b = b;
        this->c = c;
        this->Ub = Ub;
        this->Uc = Uc;
        this->n = n;
    }

    void selisih();
    void suku_pertama();
    void suku_ke_n();
};

void Barisan::selisih(){
        int selisih_Ub_Uc;
        int selisih_b_c;
        b = b - 1;
        c = c - 1;
        selisih_Ub_Uc = Ub - Uc;
        selisih_b_c = b - c;
        beda = selisih_Ub_Uc / selisih_b_c;
        cout << "Beda = "<< beda << endl;
}

void Barisan::suku_pertama(){
    // n = n - 1;
    a = Ub - (b * beda);
    cout << "Suku pertama = " << a << endl;
}


void Barisan::suku_ke_n(){
    n = n - 1;
    Un = a + n*beda;
    cout << "Suku ke " << n+1 << " barisan aritmetika tersebut = " << Un;
}

int main(){
    system("cls");
    int b, c, Ub, Uc, n;
    cout << "Masukkan suku ke b = ";
    cin >> b;
    cout << "Masukkan suku ke c = ";
    cin >> c;
    cout << "Nilai suku ke-b = ";
    cin >> Ub;
    cout << "Nilai Suku ke-c = ";
    cin >> Uc;
    cout << "Suku ke-n yang ditanya =  ";
    cin >> n;
    Barisan satu;
    satu.Suku(b, c, Ub, Uc, n);
    satu.selisih();
    satu.suku_pertama();
    satu.suku_ke_n();
}