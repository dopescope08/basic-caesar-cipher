#include <iostream>
#include <string.h>
using namespace std;
int main(){
    cout<<"Enter plain text : ";
    char msg[100];
    cin.getline(msg,100);
    int i, j, length, key, x;
    cout<<"Enter key : ";
    cin>>key;
    length=strlen(msg);
    cout<<"Choose 1 for encryption and 2 for decryption : ";
    cin>>x;
    switch (x)
    {
    case 1:
        char ch;
    for (i=0; msg[i]!='\0'; ++i){
            ch=msg[i];
            if (ch>='a' && ch<='z'){
                ch=ch+key;
                if (ch>'z'){
                    ch=ch-'z'+'a'-1;
                }
                msg[i]=ch;
            }
            else if
            (ch>='A' && ch<='Z'){
                ch=ch+key;
                if (ch>'Z'){
                    ch=ch-'Z'+'A'-1;
                }
                msg[i]=ch;
            }
    }
    printf("Encrypted message is : %s",msg);
        break;
    case 2:
   
    for (i=0; msg[i]!='\0'; ++i){
            ch=msg[i];
            if (ch>='a' && ch<='z'){
                ch=ch-key;
                if (ch>'z'){
                    ch=ch-'z'+'a'-1;
                }
                msg[i]=ch;
            }
            else if
            (ch>='A' && ch<='Z'){
                ch=ch-key;
                if (ch>'Z'){
                    ch=ch-'Z'+'A'-1;
                }
                msg[i]=ch;
            }
    }
    printf("decrypted message is : %s",msg);
    
    default:
        break;
    }
    
    return 0;
}