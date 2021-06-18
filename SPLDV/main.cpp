#include <iostream>

using namespace std;

class SPLDV{
    public:
        int x;
        int y;
    
        int a, b, c,b_akhir, c_akhir;
        int a1,b1,a2,b2, c1, c2;

        SPLDV(int a1, int a2, int b1, int b2, int c1, int c2){
            this->a1 = a1;
            this->a2 = a2;
            this->b1 = b1;
            this->b2 = b2;
            this->c1 = c1;
            this->c2 = c2;
        }

        void eliminasi(){
            /*
                Apa syarat koefisien agar dapat dielminasi?
                    Jika koefisien x1 - koefisien x2 = 0 atau
                    Jika koefisien y1 - koefisien y2 = 0

                    Jika tidak memenuhi = 0 maka kita kalikan kedua koefisien x1*x2 dan x2*x1  
            */
            /*
                Jika di koefisien x dapat dieliminasi maka nilai y yang dicari 
            */

           // --------------- KONDISI A POSITIF ----------------
            if(a1>0){
                // ------- Kondisi 1 = Jika Koefisien tidak dapat dieliminasi langsung -> Maka harus dikalikan -> Masuk ke kondisi 2

                if(a1-a2==0 || b1-b2==0){
                    b = b1 - b2;
                    c = c1 - c2;
                    if(c%b==0){
                    // cout << "berhasil";
                        b_akhir = b / b;
                        c_akhir = c / b;
                        y = c_akhir;
                        /*
                            Nilai x dapat kita cari setelah nilai dari variable y diketahui
                                Sehingga x_akhir = (c - (koefisien b1*y))/koefisien a1

                        */

                        x = (c1 - (b1 * y)) / a1;

                        cout << "Y = " << y << endl;
                        cout << "X = " << x << endl;
                    }
                    // else if()
                    else{
                        b_akhir = b / b;
                        // y = b / b;
                        cout << "Kok sini";
                        cout << "Y = " << c << "/" << b;
                    }
                }
                // ------- Kondisi 2 : Koefisien x1 dan koefisien x2 sebagai pengali

                else if(a1-a1!=0 || b1-b2!=0){
                    int a1_1, b1_1, c1_1;
                    // Koefisien x1 * koefisien x2
                    a1_1 = a1 * a2;
                    b1_1 = b1 * a2;
                    c1_1 = c1 * a2;
                    // Koefisien x2 * koefisien x1
                    a2 = a2 * a1;
                    cout << a2 << endl;
                    b2 = b2 * a1;
                    cout << b2 << endl;
                    c2 = c2 * a1;
                    cout << c2 << endl;

                    b = b1_1 - b2;
                    c = c1_1 - c2;
                    if(c%b==0){

                        b_akhir = b / b;
                        c_akhir = c / b;
                        y = c_akhir;
                            /*
                                Nilai x dapat kita cari setelah nilai dari variable y diketahui
                                    Sehingga x_akhir = (c - (koefisien b1*y))/koefisien a1

                            */

                        x = (c1 - (b1 * y)) / a1;

                        cout << "Y = " << y << endl;
                        cout << "X = " << x << endl;
                    }
                    
                    else{
                            b_akhir = b / b;
                            // y = b / b;
                            cout << "Y = " << c << "/" << b;
                    }
                    
                }
                else{
                    cout << "Error";
                }
                // if(b1>0 && b2>0){}
                // if(b1>0 && b2<0){}
                // if(b1<0 && b2>0){}
                // if(b1<0 && b2<0){}
                
            }
            else{
                cout << "gagal";
            }
        }
};

int main(){
    int a1,b1,a2,b2, c1, c2;
    cout << "Masukkan persamaan 1" << endl;
    cin >> a1 >> b1 >> c1;
    cout << "Masukkan persamaan 2" << endl;
    cin >> a2 >> b2 >> c2;
    SPLDV obj1(a1, a2, b1, b2, c1, c2);
    obj1.eliminasi();
    // obj1(a1);
}