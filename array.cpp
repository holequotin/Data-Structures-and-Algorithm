#include<bits/stdc++.h>

using namespace std;
//hàm nhập mảng
void nhap(int n,int arr[]){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
//hàm xuất mảng
void xuat(int n,int arr[]){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
//hàm chèn phần tử có giá trị x vào trước phần tử thứ k
void chen(int *n,int arr[],int k,int x){
    (*n)++;
    for(int i=*n-1;i>k;i--){
        arr[i]=arr[i-1];
    }
    arr[k]=x;
}
int main() {
int n,arr[1000],x,k;
cin>>n;
nhap(n,arr);
cin>>k>>x;
chen(&n,arr,k,x);
xuat(n,arr);
    return  0;
}
