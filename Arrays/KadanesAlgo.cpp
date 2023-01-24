#include<iostream>
using namespace std;
int maximum_subarray_sum(int arr[], int n){
    int curr_sum = 0;
    int largest_sum = 0;

    for(int i=0; i<n; i++){
        curr_sum = curr_sum + arr[i];
        if(curr_sum<0){ // agar curr_sum negative hua too 0 kr do
            curr_sum=0;
        }else{
            largest_sum = max(largest_sum,curr_sum);
        }
        
    }return largest_sum;
}

int largestSubarraySum2(int arr[], int n){
    int prefix[100] = {0};
    prefix[0] = arr[0];
    for(int i=1; i<n; i++){
        prefix[i] = prefix[i-1]  +arr[i];
    }
    int largest_sum = 0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int subarraySum = i>0 ? prefix[j] - prefix[i-1] : prefix[j];
            largest_sum = max(largest_sum,subarraySum);
        }
    }return largest_sum;
}


int main(){
    int arr[] = {-2,3,4,-1,5,-12,6,1,3};
    int n = sizeof(arr)/sizeof(int);
    cout<<"maximum_subarray_sum : "<<maximum_subarray_sum(arr,n)<<endl;
    cout<<"Time complexity is : O(n)"<<endl;
    cout<<"largestSubarraySum2 : "<<largestSubarraySum2(arr,n)<<endl;

    return 0;
}