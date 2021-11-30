#include <iostream>

using namespace std;

int main() {
    int zliczanie[26] = {0}; // {0} żeby każdy element tablicy był równy 0
    string tekst;

    cout << "Podaj tekst: " << endl;
    cin >> tekst;

    for(int i = 0; i < tekst.length(); i++) {
        if(tekst[i] >= 'a' && tekst[i] <= 'z')
            zliczanie[ tekst[i] - 'a' ]++;
    }

    for(int i = 0; i < 26; i++) {
        cout << (char)('a' + i) << " wystąpiło " << zliczanie[i] << " razy" << endl;
    }
}