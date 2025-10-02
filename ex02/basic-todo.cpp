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
File     : basic-todo.cpp
Project  : cpp-training/ex02
Created  : 2025-10-02 20:39
Signature: ⓄℯⓄ ⚡ ┌cpp-training┐
*/
#include <iostream>
using namespace std;

int main() {
    string gorevler[100];
    int sayi = 0;
    int secim;

    while (1) {
        cout << "\n--- TO-DO LIST ---\n";
        cout << "1 - Görev ekle\n";
        cout << "2 - Görevleri listele\n";
        cout << "0 - Çıkış\n";
        cout << "Seçiminiz: ";
        cin >> secim;

        if (secim == 1) {
            if (sayi < 100) {
                cout << "Yeni görev (tek kelime): ";
                cin >> gorevler[sayi];
                sayi++;
                cout << "Görev eklendi ✅\n";
            } else {
                cout << "Görev listesi dolu ❌ (maksimum 100)\n";
            }
        }
        else if (secim == 2) {
            if (sayi == 0) {
                cout << "Liste boş.\n";
            } else {
                cout << "\n--- Görevler ---\n";
                int i = 0;
                while (i < sayi) {
                    cout << i + 1 << ". " << gorevler[i] << endl;
                    i++;
                }
            }
        }
        else if (secim == 0) {
            cout << "Çıkılıyor...\n";
            break;
        }
        else {
            cout << "Geçersiz seçim ❌\n";
        }
    }
    return 0;
}
