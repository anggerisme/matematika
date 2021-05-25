#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

/*
    1. User memilih metode penyeleseian pers. kuadrat
    2. User memasukkan koefisien dari a, b dan c
    3. Buat fungsi metode tersebut
    4. Cari faktor dari c*a yang 
            1. jika dijumlah hasilnya = c
            2. Jika dikali hasilnya = b
        1. Kalikan c*a

*/

class Pers_kuadrat{
    public:
        int a, b, c;
        vector<int>akar1;
        vector<int>akar2;
        vector<int> arr;
        vector<int> reverse_arr;
        // int x1, x2;


        Pers_kuadrat(int a, int b, int c){
            this->a = a;
            this->b = b;
            this->c = c;

            int ca = c*a;
            faktor(ca);
            
        }

        void faktor(int input_ca){
            int n = input_ca;
            int ctr=0;
        if(n>0){
            int i = 1, j=n/2;
            while(i<j){
                if(n%i==0){
                    j = n / i;
                    ctr++;
                    // cout << n << endl;
                    arr.push_back(i);
                }
                i++;
            }

            i = j;
            while(i<=n){
                if(n%i==0){
                    j = n / i;
                    if(i!=j){
                        ctr++;
                        // cout << i << endl;
                        arr.push_back(i);
                    }
                }
                i++;
            }

            
            reverse(arr.begin(), arr.end());

            for(int nilai : arr){
                reverse_arr.push_back(nilai);
            }

            reverse(arr.begin(), arr.end());
            for (int k = 0;k<arr.size();k++){
                
                if(arr[k]*reverse_arr[k]==n && arr[k]+reverse_arr[k]==this->b){
                    // cout << n << endl;
                    // cout << arr[k] << "&" << reverse_arr[k] << endl;
                    akar1.push_back(arr[k]);
                    akar2.push_back(reverse_arr[k]);
                }
            }
            cout << "Akar 1 : ";
            for(int r : akar1)
                cout << r << " ";

            cout << endl;
            cout << "Akar 2 : ";
            for(int p : akar2)
                cout << p << " ";

            cout << "Penyeleseian :" << endl;
            cout 
        }
        else if(n<0){

        }
    }
};

int main(){
    // system("cls");
    Pers_kuadrat pers_kuadrat1 = Pers_kuadrat(5, 13, 6);
}