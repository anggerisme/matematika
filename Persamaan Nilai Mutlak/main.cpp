#include <iostream>
#include <cstdlib>

using namespace std;

// ------- abs built-in function -----------

/*
    The abs() function in C++ returns the absolute value of an integer number.

    The abs() function takes a single argument and returns a value of type int, long int or long long int.
*/

int main(){
    int n;
    cout << "Masukkan nilai n ";
    cin >> n;

    int mutlak = abs(n);
    cout << "Nilai mutlak dari |" << n << "|" << " adalah "<< mutlak;
}