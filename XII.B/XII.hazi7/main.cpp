#include <iostream>

using namespace std;
int backtrack (int n){
    if (n==1)
        return 1;
    return backtrack(n-1)*n;
}


int main()
{
    int n,sum=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        if (i%2!=0){
          sum=sum+backtrack(i);

        }
        else
        {sum=sum-backtrack(i);

        }


    }
    cout<<sum;

    return 0;
}
