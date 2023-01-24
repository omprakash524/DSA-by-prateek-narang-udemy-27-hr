#include<bits/stdc++.h>
using namespace std;
int reverseArray(int arr[],int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s += 1;
        e -= 1;
    }
}
class reverseArray{
public:
   int reverseArray1(uint32_t n){
        uint32_t x = 0;
        int d = 0;
        while(n>0){
            x += (n%2) << (31-d);
            n >>= 1;
            d++;
        }
        return x;
    }
};



int main(){
    int arr[] = {10,20,30,40,50,60,70};
    int n = sizeof(arr)/sizeof(int);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    reverseArray(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    // reverseArray a = new reverseArray(12);


    return 0;
}