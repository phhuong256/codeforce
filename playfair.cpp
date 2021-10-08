#include<bits/stdc++.h>
#include <iostream>
using namespace std;

void generate(string &cipherText, char matrixKey[5][5], char current, char next) {
    int cc = 0, cr = 0, nc = 0, nr = 0;
    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j < 5; ++j) {
            if(matrixKey[i][j] == current) {
                cc = j;
                cr = i;
            }
            if(matrixKey[i][j] == next) {
                nc = j;
                nr = i;
            }
        }
    }
    if(cc != nc && cr != nr) {
        cipherText += matrixKey[cr][nc];
        cipherText += matrixKey[nr][cc];
    }
    if(cc == nc && cr != nr) {
        if(cr == 4) {
            cipherText += matrixKey[0][cc];
        } else {
            cipherText += matrixKey[cr + 1][cc];
        }
        if(nr == 4) {
            cipherText += matrixKey[0][nc];
        } else {
            cipherText += matrixKey[nr + 1][nc];
        }
    }
    if(cc != nc && cr == nr) {
        if(cc == 4) {
            cipherText += matrixKey[cr][0];
        } else {
            cipherText += matrixKey[cr][cc + 1];
        }
        if(nc == 4) {
            cipherText += matrixKey[nr][0];
        } else {
            cipherText += matrixKey[nr][nc + 1];
        }
    }
}

int main() {
    string k;
    char a[5][5];
    string m = "ABCDEFGHIKLMNOPQRSTUVWXYZ";// remove J
    cout << "Enter key: ";
    cin >> k;
    k += m;
    for(int i = 0; i < k.size() - 1; ++i) {
        for(int j = i + 1; j < k.size(); ++j) {
            if(k[j] == k[i]) {
                k.erase(j, 1);
                --j;
            }
        }
    }
    cout << "New key: " << k << endl;
    // for(int i = 0; i < m.size(); ++i) {
        // for(int j = 0; j < k.size(); ++j) {
            // if(m[i] == k[j]) {
                // m.erase(i, 1);
                // --i;
                // break;
            // }
        // }
    // }
    // cout << "Chuoi M moi: " << m << endl;
    // k += m;
    // cout << k;
    int d = 0;
    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j < 5; ++j) {
            a[i][j] = k[d];
            ++d;
        }
    }
    cout << "Matrix key: \n";
    for(int i = 0; i < 5; ++i) {
        for(int j = 0; j < 5; ++j) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    string plainText, cipherText;
    cin >> plainText;
    cipherText = "";
    int i = 0;
    while(i < plainText.size()) {
        if(i == plainText.size() - 1) {
            generate(cipherText, a, plainText[i], 'Z');
            i += 1;
        }

        if(plainText[i] != plainText[i + 1]) {
            generate(cipherText, a, plainText[i], plainText[i + 1]);
            i += 2;
            continue;
        }
        if(plainText[i] == plainText[i + 1]) {
            generate(cipherText, a, plainText[i], 'X');
            i += 1;
            continue;
        }

    }
    cout << "Cipher text: " << cipherText;

    return 0;
}
