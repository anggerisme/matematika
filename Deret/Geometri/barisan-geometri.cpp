#include <iostream>
#include <cmath>

using namespace std;

/*
    Mencari suku ke-n Jika dari suatu barisan geometri diketahui rasion dan suku pertama

*/

int suku(int a, int r, int n){
    int Un = a*pow(r, n-1);
    cout << "Suku ke n : " << Un;
}

int main(){
    int a, r, n;
    int barisan[4];
    int size = sizeof(barisan) / sizeof(int);
    cout << "Masukkan deret geometri" << endl;
    for (int i = 0; i < size;++i){
        cin >> barisan[i];
    }
    cout << "Suku ke n : ";
    cin >> n;
    a = barisan[0];
    r = barisan[1]/barisan[0];
    suku(a, r, n);
}