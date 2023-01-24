#include<iostream>
using namespace std;
int count_bits(int n){
    int count=0;
    while(n>0){
        int last_bit = (n&1);
        count += last_bit;
        n = n >> 1;
    }
    return count;
}

// ------- another method
int count_bits_hack(int n){
    int ans = 0;
    while(n>0){
        n = n & (n-1);
        ans++;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"count_bits : "<<count_bits(n)<<endl;

    int m;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"count_bits hack : "<<count_bits(m)<<endl;

    return 0;
}