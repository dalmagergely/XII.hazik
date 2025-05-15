#include <iostream>

using namespace std;

int main()
{
    int n, v[10][10],ok=0;
    float  sum=0,nr=0;
    cin>>n;
     for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
        cin>>v[i][j];
        if(v[i][j]>0){
            if(i<j){
                sum+=v[i][j];
                nr++;
                ok=1;
            }
        }
            }
     }

    if(ok==1) cout<<sum/nr;
    else cout<<"Nincs";

    return 0;
}
