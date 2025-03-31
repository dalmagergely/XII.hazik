#include <iostream>

using namespace std;

int main()
{
   int n, v[100], v2[100],par=0,imp=0;
   cin>>n;

   for(int i=0; i<n; i++){
    cin>>v[i];
   }

   for(int i=0; i<n; i++){
    cin>>v2[i];
   }


   for(int i=0; i<n; i++){
    if(v[i]%2==0) par+=v[i];
    }

    for(int i=0; i<n; i++){
        if(v2[i]%2!=0 && v2[i]<par) imp+=v2[i];
    }
   cout<<imp;

    return 0;
}
