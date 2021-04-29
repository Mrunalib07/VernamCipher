#include<bits/stdc++.h>
using namespace std;
void encrypt(int);
void decrypt(int);
int main(){
    int t,n,i,j,k,sum=0,ch;
    string m;
    cout<<"Enter the message"<<'\n';
    cin>>m;
    string key;
    cout<<"Enter the key"<<'\n';
    cin>>key;
    int mod = key.size();
    j=0;
    for(i=key.size();i<m.size();i++){
        key+=key[j%mod];
        j++;
    }
    string ans="";
    printf("\n 1. Encrypt \n 2. Decrypt \n 3. Exit \n");
    cin>>ch;
    if(ch==1){
        for(i=0;i<m.size();i++){
            ans += (key[i]-'A'+m[i]-'A')%26+'A';
        }
        cout<<"Encrypted message: "<<ans<<'\n';
    }
    else if(ch == 2){
        for(i=0;i<m.size();i++){
            ans += (m[i]-key[i]+26)%26+'A';
        }
        cout<<"Decrypted message: "<<ans<<'\n';
    }
    else{
        return 0;
    }
    return 0;

}

