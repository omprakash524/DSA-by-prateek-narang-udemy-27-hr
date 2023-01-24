#include<iostream>
using namespace std;
int getIthBit(int n, int i){
    int mask = (1<<i);
    return (n & mask) > 0 ? 1 : 0;
}
int main(){
    cout<<"Check odd or even "<<endl;
    int n;
    cout<<"Enter no. to check odd or even : ";
    cin>>n;
    if(n&1){
        cout<<"odd number "<<endl;
    }else{
        cout<<"Even number "<<endl;
    }

    int i;
    cout<<"Enter i to get bit : ";
    cin>>i;
    cout<<getIthBit(n,i)<<endl;

    return 0;
}