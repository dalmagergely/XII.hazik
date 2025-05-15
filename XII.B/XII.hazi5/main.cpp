#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in ("input.txt");
    ofstream out ("output.txt");
    int n, v[10][10],nr1=0,nr2=0;
    float avrg1, avrg2,sum1=0, sum2=0;
    in>>n;
    for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
        in>>v[i][j];
        if(v[i][j]>0){
            if(i<j){
                sum1+=v[i][j];
                nr1++;
            }
            if(i>j){
                sum2+=v[i][j];
                nr2++;
            }

        }

    }
    }
    avrg1=sum1/nr1;
    avrg2=sum2/nr2;

    out<<avrg1-avrg2;
    return 0;
}
