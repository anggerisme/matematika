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
        int a, b, c, ac, n;
        int x1=1, x2=1;
        vector<int>akar1; // Faktor yang lebih besar dari b
        vector<int>akar2; // Faktor yang lebih besar dari b
        vector<int>akar_1; // Faktor 2 yg memenuhi syarat
        vector<int>akar_2; // Faktor 2 yg memenuhi syarat
        vector<int> arr;
        vector<int> reverse_arr;
        int akar_X1;
        int akar_X2;
        int faktor_X1_a, faktor_X1_x1, faktor_X2_a, faktor_X2_x2;
        // int x1, x2;


        Pers_kuadrat(int a, int b, int c){
            this->a = a;
            this->b = b;
            this->c = c;

            this->ac = a*c;
            faktor(ac);
            penyeleseian();
            
        }
        /*
            ****************************
            Pemfaktoran : Faktorisasi ac
            ****************************
        */
        void pemfaktoran(int input_ac){
            
            int i = 1, j=input_ac;
            while(i<j){
                if(input_ac%i==0){
                    j = input_ac / i;
                    // ctr++;
                    // cout << i << endl;
                    arr.push_back(i);
                }
                i++;
            }

            i = j;
            while(i<=input_ac){
                if(input_ac%i==0){
                    j = input_ac / i;
                    if(i!=j){
                        // ctr++;
                        // cout << i << endl;
                        arr.push_back(i);
                    }
                }
                i++;
            }
            
        }

        /*
            ****************************
            Faktor : untuk mencari faktor faktor yang digunakan 
            untuk menentukan ac dan nilai b
            ****************************
        */
        void penyeleseian(){
            system("cls");
            if(this->a>1){
                if(b>0&&c>0){
                    cout << "Penyeleseian dari: " << this->a << "x^2 " << this->b << "x " << "+" << this->c << endl;

                }
                if(b<0&&c<0){
                    cout << "Penyeleseian dari: " << this->a << "x^2 " << this->b << "x "<< this->c << endl;

                }
                    

            }
            else {
                if(b>0&&c>0){

                    cout << "Penyeleseian dari: " << "x^2 " << this->b << "x " << "+" << this->c << endl;
                }
                else if(b<0&&c<0){
                    cout << "Penyeleseian dari: " << "x^2 " << this->b << "x " << this->c << endl;

                }
                
            }

                    cout << "1. Mencari faktor-faktor dari ac : \n\n";
                    cout << "   Faktor-faktor dari " << this->a<< " x " << this->c<< ": ";
                    for(int i:arr)
                        cout << i << " " ;

                    cout  << endl << "2. Mencari faktor yang jika :\n";
                    cout << "   Dikalikan : " << this->a << " x " << this->c << " = " << ac <<endl;
                    cout << "   Ditambah : " "faktor 1 + " "faktor 2"" = " << this->b <<endl;
                    cout << "   Yaitu : " << akar_1[0] << " & " << akar_2[0] << endl;
                    cout << "3. Sehingga akar-akar yang memenuhi syarat persamaan diatas ialah : \n\n" 
                    "--------------------------------------------------------------------"<< endl;
                    cout << "   (" << this->a << "x^2" << akar_1[0] << ") " <<"("<< this->a << "x"
                         << "+" << akar_2[0] <<")"<< endl;

                    // if(akar_1[0]>0){
                    //     akar_X1 = ((a*1)+akar_1[0])/a;
                    // }
                    // else{
                    //     akar_X1 = ((a*1)+akar_1[0])/a;
                    // }
                    akar_X1 = a + akar_1[0];
                    akar_X2 = a + akar_2[0];

                    if(akar_X1%this->a==0){
                        faktor_X1_a = a/a;
                        faktor_X1_x1 = akar_1[0]/a;
                        if(faktor_X1_x1>0){
                            cout << "   ("
                                 << "x"
                                 << "+" << faktor_X1_x1 << ")"
                                 << "   x1 = " << faktor_X1_x1 * (-1) << endl;
                        }
                        else{
                            cout<< "   ("
                                << "x"
                                << faktor_X1_x1 << ")"
                                << "   x1 = " << faktor_X1_x1 * -1 << endl;
                        }
                    }

                    else if(akar_X1%this->a!=0){
                        faktor_X1_a = a/a;
                        faktor_X1_x1 = akar_1[0];
                        if(faktor_X1_x1>0){
                            cout << "   ("
                                 << "x"
                                 << "+" << faktor_X1_x1 << ")"
                                 << "   x1 = " << (faktor_X1_x1 * -1) << "/" << this->a << endl;
                        }
                        else{
                            cout<< "   ("
                                << "x"
                                << faktor_X1_x1 << ")"
                                << "   x1 = " << faktor_X1_x1 * -1 << endl;
                        }
                    }
                    if(akar_X2%this->a==0){
                        faktor_X2_a = a/a;
                        faktor_X2_x2 = akar_2[0]/a;
                        if(faktor_X2_x2>0){
                            cout << "   ("
                                 << "x"
                                 << "+" << faktor_X2_x2 << ")"
                                 << "   x2 = " << faktor_X2_x2 * (-1)<< endl;
                        }
                        else{
                        cout << "   ("
                             << "x"
                             << faktor_X2_x2 << ")"
                             << "   x2 = " << faktor_X2_x2 * -1 << endl;
                        }
                    }

                    else if(akar_X2%this->a!=0){
                        faktor_X2_a = a/a;
                        faktor_X2_x2 = akar_2[0];
                        if(faktor_X2_x2>0){
                            cout << "   ("
                                 << "x"
                                 << "+" << faktor_X2_x2 << ")"
                                 << "   x2 = " << (faktor_X2_x2 * -1) << "/" << this->a<< endl;
                        }
                        else{    
                        cout << "   ("
                             << "x"
                             << faktor_X2_x2 << ")" <<endl
                             << "   x2 = " << faktor_X2_x2 * -1 << endl;
                        }
                    }
                    cout <<endl << "--------------------------------------------------------------------" << endl;
                }
        
        void faktor(int input_ca){
            n = input_ca;
            int ctr=0;

        
        if(n>0 || b>0){
            // pemfaktoran();
            
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
            // cout << "Akar 1 : ";
            // for(int r : akar1)
            //     cout << r << " ";

            // cout << endl;
            // cout << "Akar 2 : ";
            // for(int p : akar2)
            //     cout << p << " ";

            int faktor_1 = this->a * this->x1 + akar1[0];
            int faktor_2 = this->a * this->x2 + akar2[0];

            // cout << "faktor 1 : " << this->a << "x + " << akar1[0] << endl;
            // cout << "faktor 2 : " << this->a << "x + " << akar2[0] << endl;

            // this->a%2==0 && akar1[0]%2==0
            /*
                Jika faktor salah satu faktor dapat dibagi dengan
            
            */
            
            int rev_akar;
            int faktor_1_a;
            char faktor_1_x;
            int faktor_1_akar1;
            int faktor_2_a;
            char faktor_2_x;
            int faktor_2_akar2;
            /*
                ************* Akar 1 *****************
            */
            if(faktor_1%this->a==0){
                
                faktor_1_a = this->a / this->a;
                if(faktor_1_a==1){
                    faktor_1_a = 'x';
                }
                faktor_1_akar1 = akar1[0] / this->a;

                if(faktor_1_akar1>0){
                    rev_akar = faktor_1_akar1 * (-1);
                }
                else if(faktor_1_akar1<0){
                    rev_akar = faktor_1_akar1 * (-1);
                }

                cout << faktor_1_a << "&" << faktor_1_akar1;
                cout << "Akar x1 : " << faktor_1_x << "1 = " << rev_akar << "/" << this->a << endl;
            }

            else{
                // faktor_1_a = this->a / this->a;
                // faktor_1_akar1 = akar1[0] / this->a;
                
                if(akar1[0]>0){
                    rev_akar = akar1[0] * (-1);
                    // cout << rev_akar;
                }
                else if(akar1[0]<0){
                    rev_akar = akar1[0] * (-1);
                }
                else{
                    cout << "Null";
                }
                faktor_1_a = this->a / this->a;
                if(faktor_1_a==1)
                    faktor_1_x = 'x';
                // faktor_1_akar1 = rev_akar / this->a;

                cout << "Akar x1 : " << faktor_1_x << "1 = " << rev_akar << "/" << this->a << endl;
            }
            
            /*
                ************* Akar 2 *****************
            */
            
            if(faktor_2%this->a==0){
                
                faktor_2_a = this->a / this->a;
                faktor_2_akar2 = akar2[0] / this->a;

                if(faktor_2_akar2>0){
                    rev_akar = faktor_2_akar2 * (-1);
                }
                else if(faktor_2_akar2<0){
                    rev_akar = faktor_2_akar2 * (-1);
                }
                else{
                    cout << "null";
                }
                
                if(faktor_2_a==1)
                    faktor_2_x = 'x';

                // cout << faktor_2_a << "&" << faktor_2_akar2;
                cout << "Akar x2 : " << faktor_2_x << "2 = " << rev_akar << endl;
            }

            else{
                // faktor_1_a = this->a / this->a;
                // faktor_1_akar1 = akar1[0] / this->a;
                
                if(akar1[0]>0){
                    rev_akar = akar1[0] * (-1);
                    // cout << rev_akar;
                }
                else if(akar1[0]<0){
                    rev_akar = akar1[0] * (-1);
                }
                else{
                    cout << "Null";
                }
                faktor_1_a = this->a / this->a;
                // faktor_1_akar1 = rev_akar / this->a;
                if(faktor_1_a==1)
                    faktor_1_x = 'x';

                cout << "Akar x2 : " << faktor_1_x << "2 = " << rev_akar << "/" << this->a;
            }
            
        }
        
        /*
            ******************
            Jika a*c && b kurang dari 0
            blok ini mengubah faktor besar menjadi negatif.
                1. Yang menjadi faktor besar itu yang seperti apa?
                    yang nilai

            ******************
                    
        */
        else if(n<0 && b<0){
            /*
                Diubah nilainya menjadi positif semua agar mudah dalam
                proses faktorisasi-nya
            */
            int a = this->a;
            int b = this->b*-1;
            int c;
            int faktor_1, faktor_2;
            /*
                Hasil pengurangan faktor-faktor
                dengan nilai b karena faktor-b = kunci -> faktor+kunci = b dan faktor*kunci = ac.
            */
            vector<int> kunci; 
            vector<int> rev_akar2;
            if(this->c<0)
                c = this->c*-1;    
            else if(this->a<0)
                a = this->a*-1;
            else
                cout << "null";
            
            int ac = a*c; // Dalam bentuk positif
            pemfaktoran(ac);
            /*
                Setelah faktor faktor ac di dapat maka kita sortir
                terbalik dengan reverse dan menyimpanya ke dalam
                reverse_arr
            
            */
            reverse(arr.begin(), arr.end());

            for(int nilai : arr){
                reverse_arr.push_back(nilai); // Menyimpan ke dalam reverse_arr (faktor-faktor ac yg terbalik)
                // cout << nilai << endl;
            }

            reverse(arr.begin(), arr.end());
            for (int i = 0;i<arr.size();i++){
                
                /*
                    Faktor yang sudah di jabarkan diatas (positif)
                    kita masukkan kesini untuk difilter
                        -> kita pilih yang faktornya paling besar lalu kita negatifkan
                            -> Dengan cara jika faktor lebih besar dari b maka itulah
                            yang akan kita negatifkan.
                            -> Faktor besar itu arr[k] akan kita kurangkan pas pada saat urutan rev_arr[k]
                */
                if(arr[i]>b){
                    akar1.push_back(arr[i]);
                    // cout << "tampilkan" << endl;
                }
                // else if(reverse_arr[i]>b){
                //     // cout << reverse_arr[k] << endl;
                //     akar2.push_back(reverse_arr[i]);
                // }

            }
            /*
                Untuk mendapatkan nilai
            */
            for(int i : akar1){
                    int kurang = i-b;
                    kunci.push_back(kurang);
                }
            // for(int i : akar2){
            //         int kurang = i-b;
            //         rev_akar2.push_back(kurang);
            //     }
            
            // cout << kunci[0] << endl;
            // cout << kunci[1] << endl;
            // cout << akar1[0] << endl;
            // cout << akar1[1] << endl;
            for (int i = 0; i < kunci.size();i++){
                // a = this->a;
                // b = this->b;
                // c = this->c;
                // ac = this->a * this->c;
                // if()
                if((kunci[i]*akar1[i]==ac) || (kunci[i]+akar1[i])==b){
                    // cout << akar1[i] << " & " << kunci[i];
                    akar_1.push_back(akar1[i]);
                    akar_2.push_back(kunci[i]);
                }
            }
            if(this->b<0){
                akar_1[0] = akar1[0] * -1;
            }
            a = this->a;
            b = this->b;
            c = this->c;
            ac = this->a * this->c;
            for (int i = 0; i < kunci.size(); i++){
                if ((kunci[i] * akar1[i] == ac) && (kunci[i] + akar1[i]) == b){
                    akar_1.push_back(akar1[i]);
                    akar_2.push_back(kunci[i]);
                }
            }
            
            // cout << "Hasil akhir : " << akar_1[0] << " & " << akar_2[0];
            
        }
    }
};

int main(){
    // system("cls");
    Pers_kuadrat pers_kuadrat1 = Pers_kuadrat(4, -12, -7);
}