#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in ("atestat.in");
    ofstream out ("atestat.out");
    int x,ok=0,szj,van=0,temp;

    while(in>>x)
    {
        temp=x;
        ok=0;
        while(x>0)
        {
            szj=x%10;
            if( szj%2!=0 ) ok=1;
            x=x/10;
        }
        if(ok==0)
        {
            van=1;
            out<<temp;

        }
    }
    if (van==0) out<<"nem letezik";


    return 0;
}
