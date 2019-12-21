#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[80],s2[80];
    cout <<"S1 = ";
    cin.get(s1,80);
    cin.ignore();
    cout <<"S2 = ";
    cin.get(s2,80);
    int j;
    int k;
    for (int i=0; i<strlen(s2); i++)
    {
        j = 0;
        while (j<strlen(s1))
        {
            if (s1[j]==s2[i])
            {
                for (k=j; k<strlen(s1)-1; k++)
                    s1[k]=s1[k+1];
                s1[k]='\0';
            }
            else ++j;
        }
    }
    cout <<s1 <<endl;
    return 0;
}
