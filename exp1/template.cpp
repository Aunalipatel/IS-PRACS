#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;
#define int long long int
typedef long long ll;
int32_t main(){
    #ifndef ONLINE_JUDGE
    freopen("ip.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s2,s ;cin>>s;
    // // string 
    // while(cin >> s2){
    //     s2 += s + " " ;
    // }

    string m = "abcdefghijklmnopqrstuvwxyz0123456789" ;
    int n = 0;
    

    for(int i = 0 ; i < 36 ; i++){
        n++;
        string s1 = "";
        for(int j = 0 ; j < s.length() ; j++){
            s1 += m[(s[j]-'a' + n )%36] ;
        }
        cout << s1<<endl;
    }    
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl;
    
    
    return 0;
}
