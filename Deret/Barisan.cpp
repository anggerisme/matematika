#include <iostream>
#include <vector>

using namespace std;

int suku(int a, int b, int n){
    int Un = a + (n - 1) * b;
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
    suku(a, b, n);
}