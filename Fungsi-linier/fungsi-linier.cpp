#include <iostream>

using namespace std;

class fungsi{
    public:
        float x;
        double y;
        int opsi;

        double fungsi_linier(){
            cout << "Silahkan pilih metode : " << endl;
            cout << "1. Dua titik\n"
                    "2. Gradien & 1 titik\n"
                    "3. Gradien\n\n";
            cin >> opsi;
            switch (opsi){
            case 1:
                dua_titik();
                break;
            case 2:
                gradien_1_titik();
                break;
            case 3:
                gradien();
                break;

            default:
                break;
            }
        }

        float dua_titik(){
            float y,x,Y1,Y2,X1,X2;

            system("cls");
            cout << "Masukkan titik X1 : ";
            cin >> X1;
            cout << "Masukkan titik X2 : ";
            cin >> X2;
            cout << "Masukkan titik Y1 : ";
            cin >> Y1;
            cout << "Masukkan titik Y2 : ";
            cin >> Y2;
            float delta_x = X2 - X1;
            float delta_y = Y2 - Y1;

            float deltaY = (delta_x*y) - (delta_x*Y1);
            float deltaX = (delta_y * x) - (delta_y * X1);
            
            float reverse_deltaY;
            if(deltaY>0){

                reverse_deltaY = deltaY*(-1);
                // cout << reverse_deltaY;
            }
            else if(deltaY<0){
                reverse_deltaY = deltaY * (-1);
                // cout << reverse_deltaY << endl;
            }

            float deltaXY = deltaX + reverse_deltaY;
            // cout << deltaXY;

            float delta_y_akhir = delta_x / delta_x;
            float delta_x_akhir = delta_y / delta_x;
            float deltaa_akhir = deltaXY / delta_x;

            cout <<endl << "Persamaan : " << delta_y_akhir << "y = " << delta_x_akhir <<"x" << " + " << deltaa_akhir;
        }
        double gradien_1_titik(){
            float y1;
            float m;
            float x1;
            cout << "Masukkan gradien : ";
            cin >> m;
            cout << "Masukkan X1 : ";
            cin >> x1;
            cout << "Masukkan Y1 : ";
            cin >> y1;
            double hasil_x = m * (x-x1);
            double hasil_y = y1 + hasil_x;
            cout << "Persamaan : y = " << m <<"x" " + " << hasil_y;
        }
        double gradien(){
            float Y1;
            float Y2;
            float X1;
            float X2;
            cout << "Masukkan nilai Y2 : ";
            cin >> Y2;
            cout << "Masukkan nilai Y1 : ";
            cin >> Y1;
            cout << "Masukkan nilai X2 : ";
            cin >> X2;
            cout << "Masukkan nilai X1 : ";
            cin >> X1;

            double gradien = (Y2 - Y1) / (X2 - X1);
            cout << "Nilai gradien : " << gradien << endl;
            return gradien;
        }
};

int main(){
    system("cls");
    // func_linier
    fungsi linier;
    linier.fungsi_linier();
}