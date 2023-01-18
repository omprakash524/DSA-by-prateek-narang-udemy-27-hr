#include<iostream>
using namespace std;

void printingSubArrays(int arr[],int size){
    for(int i = 0; i< size; i++){
        for(int j = i; j<size; j++){
            for(int k = i; k<=j; k++){
                cout<<arr[k]<<",";
            }cout<<endl;           
        }
    }
}

// Print the sum of each subarray & find the largest sum

int main(){
    int arr[] = {1,2,3,4,6,7,8};
    int size = sizeof(arr)/sizeof(arr[0]);

    printingSubArrays(arr,size);

    return 0;
}