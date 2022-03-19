// Fionita Lady Chavella	(2100018506)
// Syafa Trisya Hernanda	(2100018507)
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main(){
    a:
    cout << "=========================\n";
    cout << "\tKalkulator\n";
    cout << "=========================\n";
    
    int plh, coba;
    float x, y;
    cout << "1. penjumlahan\n";
    cout << "2. pembagian\n";
    cout << "3. perkalian\n";
    cout << "4. pengurangan\n";
    cout << "Pilihan = ";
	cin >> plh;
    cout << endl;

    if (plh <= 4 && plh >= 1){
        cout << "Angka pertama = ";
		cin >> x;
        cout << "Angka kedua = ";
		cin >> y;
        switch (plh){
	        case 1:
	            cout << " " << x << " + " << y << " = " << x + y << "\n";
				break;
	        case 2:
	            cout << " " << x << " : " << y << " = " << x / y << "\n";
				break;
	        case 3:
	            cout << " " << x << " x " << y << " = " << x * y << "\n";
				break;
	        case 4:
	            cout << " " << x << " - " << y << " = " << x - y << "\n";
				break;
        }
    }
    else{
        cout << "SALAH!!!" << "\n";
    }
        cout << endl;
        cout << "Apakah ingin mencoba lagi [1] Ya / [2] Tidak => ";
        cin >> coba;
        if (coba == 1){
            system ("cls");
            goto a;
        }
        else if(coba == 2){
            system ("cls");
        }
        
    return 0;
}
