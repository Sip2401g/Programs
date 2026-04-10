#include<iostream>
using namespace std;
int main(){
    int arr []={5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
for(int i = 1 ; i<n ;i++){
    if(arr[i]>max){
        max = arr[i];
    }
}
cout<<max<<" ";
}

//time compelxity is O(n) and space complexity is O(1)