#include <bits/stdc++.h>
using namespace std;
void getBaseN(long long num, long long base, vector<long long> &out){
    out.clear();
    while(true){
        int val = num % base;
        out.push_back(val);
        num /= base;
        if(num==0)break;
    }
}
int main(){
    long long num,base;
    cin >> num >> base;
    vector<long long> v;
    getBaseN(num,base,v);
    for(long long i = v.size()-1; i >= 0; i--){
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}