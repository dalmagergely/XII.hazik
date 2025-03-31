#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int v[25][25];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
                if(i*j<10)
            v[i][j]=i*j;
        else if( i*j>9) v[i][j]=i*j%10;

            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
