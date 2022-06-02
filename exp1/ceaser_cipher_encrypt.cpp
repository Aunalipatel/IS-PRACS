#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
typedef long long ll;
int32_t main(){
    cout << "enter plaintext: " <<endl;
    string s2,s = "" ;
    getline(cin, s);
    string m = "abcdefghijklmnopqrstuvwxyz0123456789" ;
    int key = 19;
    cout << "enter key: "<<endl;cin>>key;
    int n = key;
    for(int i = 0 ; i < 1 ; i++){
        string s1 = "";
        for(int j = 0 ; j < s.length() ; j++){
            if(s[j] == ' ' ){
                s1+= ' ';
                continue;
            }{
                int k = 0;
                while(s[j] != m[k]){
                    k++;
                }
                s1 += m[(k+key)%36];
            }
        }
        cout << "encrypted text is "<<endl<<s1<<endl;
    }    
    return 0;
}
