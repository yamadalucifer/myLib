#include <bits/stdc++.h>
using namespace std;
long long n;
long long floor_sqrt(long long x){
    long long r = sqrtl((long double)x);
    while((__int128_t)(r+1)*(__int128_t)(r+1)<=x){
        r++;
    }
    while((__int128_t)r * (__int128_t)r > x){
        r--;
    }
    return r;
}
int main(){
    cin >> n;
    cout << floor_sqrt(n) << endl;
    return 0;
}