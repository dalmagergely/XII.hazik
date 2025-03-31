#include <iostream>

using namespace std;

int main()
{
    int n,k,nr=0,v[100],szj=1;
    cin>>n;
    cin>>k;
    while(k>0){
        szj*=10;
        k--;
    }

    for(int i=0; i<n; i++){
        cin>>v[i];

        if(v[i]/szj!=0) nr++;
    }
    cout<<nr;



    return 0;
}
