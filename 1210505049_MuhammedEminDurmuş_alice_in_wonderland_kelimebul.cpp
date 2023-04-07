#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int zhu_takaoka(const string& metin, const string& kelime) {
    int m = kelime.length();
    vector<int> b(m + 1, 0);

    int i = 0, j = -1;
    b[0] = -1;
    while (i < m) {
        while (j >= 0 && kelime[i] != kelime[j]) {
            j = b[j];
        }
        i++;
        j++;
        b[i] = j;
    }

    int n = metin.length();
    i = 0, j = 0;
    int bulunan_sayisi = 0;
    while (i < n) {
        while (j >= 0 && metin[i] != kelime[j]) {
            j = b[j];
        }
        i++;
        j++;
        if (j == m) {
            bulunan_sayisi++;
            j = b[j];
        }
    }

    return bulunan_sayisi;
}

vector<int> kelimeleri_bul(const string& dosya_adi, const vector<string>& kelimeler) {
    vector<int> sonuclar(kelimeler.size(), 0);

    ifstream dosya(dosya_adi);
    if (!dosya.is_open()) {
        cerr << "Hata: Dosya acilamadi." << endl;
        return sonuclar;
    }

    string metin;
    while (getline(dosya, metin)) {
        transform(metin.begin(), metin.end(), metin.begin(), ::tolower);
        for (int i = 0; i < kelimeler.size(); i++) {
            sonuclar[i] += zhu_takaoka(metin, kelimeler[i]);
        }
    }

    dosya.close();

    return sonuclar;
}

int main() {
    string dosya_adi;
    cout << "Dosya adi: ";
    cin >> dosya_adi;

    vector<string> kelimeler;
    cout << "Kelime 1: ";
    string kelime1;
    cin >> kelime1;
    kelimeler.push_back(kelime1);
    cout << "Kelime 2: ";
    string kelime2;
    cin >> kelime2;
    kelimeler.push_back(kelime2);
    cout << "Kelime 3: ";
    string kelime3;
    cin >> kelime3;
    kelimeler.push_back(kelime3);
    cout << "Kelime 4: ";
    string kelime4;
    cin >> kelime4;
    kelimeler.push_back(kelime4);
    cout << "Kelime 5: ";
    string kelime5;
    cin >> kelime5;
    kelimeler.push_back(kelime5);
    cout << "Kelime 6: ";
    string kelime6;
    cin >> kelime6;
    kelimeler.push_back(kelime6);


    auto sonuclar = kelimeleri_bul(dosya_adi, kelimeler);

    for (int i = 0; i < kelimeler.size(); i++) {
        cout << kelimeler[i] << " kelimesi " << sonuclar[i] << " kere geciyor." << endl;
    }

    return 0;
}
