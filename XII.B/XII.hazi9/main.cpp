#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string szo;
    ifstream in ("atestat.in");
    ofstream out ("atestat.out");
    while (in>>szo){
        szo[0]-=32;
        szo[szo.length()-1]-=32;
        out<<szo<<" ";

    }


    return 0;
}
