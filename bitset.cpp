#include<bits/stdc++.h>
using namespace std;
int main(){
    bitset<32> bset("100110011");
    bset.set(2);
    bset.set(3);
    bset.reset(2);
    int total_set=bset.count();
    int total_unset=bset.size()-bset.count();
    cout<<bset.count();
return 0;
}
