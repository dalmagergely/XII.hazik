#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in ("atestat.in");
    ofstream out ("atestat.out");
    int N,m[100][100],S=0;
    in>>N;
    for (int i=0; i<N; i++){
    for(int j=0; j<N; j++){
        in>>m[i][j];
        if(j>i && i+j>=N && j!=N-1) S+=m[i][j];

    }
    }
    out<<S;
    return 0;
}
