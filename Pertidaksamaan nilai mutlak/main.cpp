#include <iostream>
#include <vector>

using namespace std;

/*
    Program : Mencari himpunan penyeleseian dari pertidaksamaan nilai mutlak.
    Berapakah nilai x yang memenuhi pertidaksamaan?

    1. Deklarasi variable
    2. Tampilkan hasil berapa saja himpunan yg dihasilkan melalui perulangan (for)
    3. Simpan nilai ke vector hp.
    4. Rapikan kode
*/

int x = 1;
int j = 5;
vector<int> hp;

int x_lebihbesar(){
    // int i;
    for (int i = (j * -1) + 1; i < j; i++){
        hp.push_back(i);
        cout << i << endl;
    }
}

int main(){
    x_lebihbesar();
}