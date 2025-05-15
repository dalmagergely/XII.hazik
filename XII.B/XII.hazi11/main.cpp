#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string szo1, szo2;
    int nr = 0;
    cin >> szo1 >> szo2;

    int i = szo1.length() - 1;
    int j = szo2.length() - 1;


    while (i >= 0 && j >= 0 && szo1[i] == szo2[j]) {
        nr++;
        i--;
        j--;
    }


    if (nr > 0) {
        for (int k = szo1.length() - nr; k < szo1.length(); k++) {
            cout << szo1[k];
        }
    } else {
        cout << "nincs";
    }

    return 0;
}
