#include<bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[], int n){
    for(int times=1; times<=n-1; times++){
        for(int j=0; j<= n - times-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main(){
    cout<<"Hello i am bubble sort"<<endl;
    int arr[] = {-2,3,4,5,8,55,33};
    int n = sizeof(arr)/sizeof(int);
    bubble_sort(arr,n);
    for(auto x : arr){
        cout<<x<< " ";
    }

    return 0;
}