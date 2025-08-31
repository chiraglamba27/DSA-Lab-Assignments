// // Given an array arr[] and a positive integer k, 
// the task is to count all pairs (i, j) such that i < j and 
// absolute value of (arr[i] - arr[j]) is equal to k. 

#include<iostreaam>
#include<cstdlib>
using namespace std;
int main(){
    int count = 0;
    int n;
    cout<<"Enter the length of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the value of k"<<endl;
    cin>>k;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(abs(arr[i]-arr[j])==k){
                count++;
            }
        }
    }
    cout<<count<<endl;
}
