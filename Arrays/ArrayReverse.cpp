//  https://github.com/coding-minutes/dsa-essentials-course
// fro all code 

#include<iostream>
using namespace std;
void reverseArray(int arr[], int size){
    int s = 0;
    int e = size-1;
    while(s<e){
        swap(arr[s],arr[e]);
        // s += 1;
        // e -= 1;
        s++;e--;
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int size  = sizeof(arr)/sizeof(arr[0]);

     for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    reverseArray(arr, size);
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}