#include<iostream>
using namespace std;

int binarysearch(int arr[], int size, int key){
    // implementation of the binary search
    int s = 0;
    int e = size-1;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] > key){
            e = mid-1;
        }else{
            s = mid+1;
        }
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(int);

    int key;
    cout<<"Enter the key u want to see : ";
    cin>>key;

    int index1 = binarysearch(arr, size, key);
    if(index1 != -1){
        cout<<key<<" is present at index "<<index1<<endl;
    }else{
        cout<<key<<" is not found!"<<endl;
    }

    // int index = binarysearch(arr, size, key);
    // (index != -1)?cout<<"Element is not present in the array ":cout<<"Element is presenr at index"<<index;

    return 0;
}