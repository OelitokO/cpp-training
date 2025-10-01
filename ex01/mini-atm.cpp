/*					  _                 _         _
					 | |               (_)       (_)
  ___  _ __   _ __   | |_  _ __   __ _  _  _ __   _  _ __    __ _
 / __|| '_ \ | '_ \  | __|| '__| / _ || || '_ \ | || '_ \  / _ |
| (__ | |_) || |_) | | |_ | |   | (_| || || | | || || | | || (_| |
 \___|| .__/ | .__/   \__||_|    \__,_||_||_| |_||_||_| |_| \__, |
	  | |    | |                                             __/ |
	  |_|    |_|                                            |___/
															  _____        _  _  _           _
															 |  _  |      | |(_)| |         | |
															 | | | |  ___ | | _ | |_   ___  | | __
															 | | | | / _ \| || || __| / _ \ | |/ /
															 \ \_/ /|  __/| || || |_ | (_) ||   <
															  \___/  \___||_||_| \__| \___/ |_|\_\
File     : mini-atm.cpp
Project  : cpp-training/ex00
Created  : 2025-10-01 22:49
Signature: ⓄℯⓄ ⚡ ┌cpp-training┐
*/

#include <iostream>
using namespace std;

int main() {
    int bakiye = 1000;
    int secim;
    int miktar;

    while (true) {
        cout << "\n=== ATM MENU ===\n";
        cout << "1. Bakiye Goruntule\n";
        cout << "2. Para Yatir\n";
        cout << "3. Para Cek\n";
        cout << "4. Cikis\n";
        cout << "Seciminizi giriniz: ";
        cin >> secim;

        if (secim == 1) {
            cout << "Mevcut bakiyeniz: " << bakiye << " TL\n";
        }
        else if (secim == 2) {
            cout << "Yatirmak istediginiz miktari giriniz: ";
            cin >> miktar;
            if (miktar > 0) {
                bakiye += miktar;
                cout << "Yeni bakiyeniz: " << bakiye << " TL\n";
            } else {
                cout << "Gecersiz miktar!\n";
            }
        }
        else if (secim == 3) {
            cout << "Cekmek istediginiz miktari giriniz: ";
            cin >> miktar;
            if (miktar > 0 && miktar <= bakiye) {
                bakiye -= miktar;
                cout << "Yeni bakiyeniz: " << bakiye << " TL\n";
            } else {
                cout << "Yetersiz bakiye veya gecersiz miktar!\n";
            }
        }
        else if (secim == 4) {
            cout << "Cikis yapiliyor... Tesekkurler!\n";
            break;
        }
        else {
            cout << "Hatali secim yaptiniz, tekrar deneyin.\n";
        }
    }

    return 0;
}
