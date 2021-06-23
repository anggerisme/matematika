#include <iostream>

using namespace std;

class Barisan{
    public:
        int a, b, n;
        int Un;
        // int barisan[4];
        // int size = sizeof(barisan) / sizeof(int);
        int Suku(int a, int b, int n){
            this->a = a;
            this->b = b;
            this->n = n;
        }
        void suku_ke_n();
};

void Barisan::suku_ke_n(){
    Un = a + (n - 1) * b;
    cout << "Suku ke n : " << Un;
}

int main(){
    int a, b, n;
    int barisan[4];
    int size = sizeof(barisan) / sizeof(int);
    cout << "Masukkan deret bilangan" << endl;
    for (int i = 0; i < size;++i){
        cin >> barisan[i];
    }
    cout << "Suku ke n : ";
    cin >> n;
    a = barisan[0];
    b = barisan[1] - barisan[0];
    Barisan satu;
    satu.Suku(a, b, n);
    satu.suku_ke_n();
}