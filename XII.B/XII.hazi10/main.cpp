#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string szo;
    cin>>szo;
    int elso=-1, utolso=-1;
    for(int i=0; i<szo.length(); i++){
        if(strchr ("aeiou", szo[i]) ) {
            elso=i;
            break;
        }
    }
    for(int i=szo.length()-1; i>=0; i--){
        if(!strchr( "aeiou", szo[i])){
        utolso=i;
        break;
    }
    }
    if(elso==-1 || utolso==-1) cout <<"nem lehet";
    else {
        swap(szo[elso], szo[utolso]);
        cout<<szo;
    }

    return 0;
}
