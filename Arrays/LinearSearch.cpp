// #include<iostream>
// using namespace std;
// int linear_search(int arr[], int n, int key){
//     for(int i=0; i<n; i++){
//         if(arr[i] == key){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     int m;
//     cout<<"Enter the size of array : ";
//     cin>>m;
//     int arr1[m];
//     for(int i=0; i<m; i++){
//         cin>>arr1[i];
//     }
//     int key1;cout<<"Enter the key : ";cin>>key1;
//     int o = linear_search(arr1,m,key1);
//     cout<<o<<endl;


//     int arr[] = {20,24,15,64,8,5,9,44,147};
//     int n = sizeof(arr)/sizeof(int);
//     int key;
//     cout<<"Enter the key u wanna search : ";
//     cin>>key;

//     int index = linear_search(arr,n,key);
//     if(index != -1){
//         cout<<key<<" is present at index "<<index<<endl;
//     }else{
//         cout<<key<<" is not found!"<<endl;
//     }
//     return 0;
// }

/*
#include<iostream>
using namespace std;

int linears(int arr[], int m, int key){
    for(int i=0; i<m; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}
int main(){
    int m;
    cout<<"Enter the size of the array : ";
    cin>>m;
    int arr[m];
    for(int i=0; i<m; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the key u want to search : ";
    cin>>key;

    int linear = linears(arr,m,key);
    cout<<linear;
    

    return 0;
}
*/

#include<iostream>
using namespace std;

int linears(int arr[], int m, int key){
    for(int i=0; i<m; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}
int main(){
    int m;
    cout<<"Enter the size of the array : ";
    cin>>m;
    int arr[m];
    for(int i=0; i<m; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the key u want to search : ";
    cin>>key;

    int linear = linears(arr,m,key);
    cout<<linear;
    (linear == -1)?cout<<"Element is not present" :cout<<"Element is present at index"<<linear;
    
    return 0;
}