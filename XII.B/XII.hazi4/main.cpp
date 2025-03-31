#include <iostream>
#include <cstring>

using namespace std;
void fordito (char* token){
char forditott[101], betu[2]="";
int len=strlen(token);
  for (int i = 0; i < len / 2; i++){
        swap(token[i], token[len - i - 1]);

  }


}

int main()
{
    char szoveg[101], ujszoveg[101]="";
    char* token;
    cin.getline(szoveg, 101);
    char eredeti[101];
    strcpy(eredeti, szoveg);

    token=strtok(szoveg, " ");
    while (token){
        if(strlen(token)%2!=0){
            fordito(token);

        }
            strcat(ujszoveg, token);
            strcat(ujszoveg, " ");
            token=strtok(nullptr, " ");
        }
     ujszoveg[strlen(ujszoveg)-1]='\0';
    if (strcmp ( ujszoveg, eredeti)==0) cout<<"nu exista";
    else
    cout<<ujszoveg;
    return 0;
}
