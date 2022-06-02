#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
typedef long long ll;
int32_t main(){
    cout << "enter cipher-text: " <<endl;
    string s2,s = "" ;
    getline(cin, s);
    string m = "abcdefghijklmnopqrstuvwxyz0123456789" ;
    int n = 0;
    cout << endl<<"brute force solutions are: "<<endl;
    for(int i = 0 ; i < 36 ; i++){
        n++;
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
                s1 += m[(k+n)%36];
            }
        }
        cout << s1<<endl;
    }        
    return 0;
}
