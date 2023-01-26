#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
#include <utility>
#include <iterator>
#include <set>
#include <unordered_set>
#include <list>
#include <deque>
#include <queue>
#include <stack>
#include <set>
#include <bitset>
#include <random>
#include <map>
#include <unordered_map>
#include <stdio.h>
#include <complex>
#include <math.h>
#include <cstring>
#include <chrono>
#include <string>
#define ll long long
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define pll pair<long long ,long long >
#define ppll pair < pll , pll >
const int mod = 1000000007;
#define rep(i , j , n) for(ll i = j ; i <= n ; i++) 
bool PALIN(string s) { 
ll i = 0; 
ll j = s.length() - 1; 
while(i <= j) { 
if(s[i] != s[j]) return false;
j-- , i++; 
}
return true; 
} 
/* string CONVERT_TO_BINARY(ll s) {
/*string res = 
 ; */
/*while(s != 0) { 
res += (char)('0' + s % 2);
s /= 2; 
} 
reverse(res.begin() , res.end());
return res; 
 } */ 
ll MODULAR_POWER(ll a , ll b , ll MOD) { 
if(b == 0) return 1LL; 
ll d = MODULAR_POWER(a , b / 2 , MOD); 
d *= d;
d %= MOD;
if(b % 2) d *= a; 
d %= MOD;
return d; 
}
bool isprime(int &n){
if(n<=1)return false;
for(int i=2;i<=sqrt(n);i++){
if(n%i==0)return false;
}
return true;
}
int print_bin(int num)
{
    for(int i=10;i>=0;i--){
        cout<<(((num)>>i)&1);
    }
}

void solve(){
    int t;
    cin>>t;
    while(t--){
         
    }
}
int main(){
ios_base::sync_with_stdio(false); 
cin.tie(NULL);   
cout.tie(NULL);
solve();
    return 0;
}