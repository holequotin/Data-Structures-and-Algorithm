#include<bits/stdc++.h>

using namespace std;
//hàm nhập dữ liệu
void nhap(int n,int arr[]){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
//hàm linear search
int linearSearch(int n,int arr[],int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x) return i;
    }
    return -1;
}
int main() {
int n,arr[100],x;
cin>>n;
nhap(n,arr);
cin>>x;
cout<<linearSearch(n,arr,x);
    return 0;
}
