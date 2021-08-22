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
int binarySearch(int l,int r,int arr[],int x){
    
    //vì trả về vị trí đầu tiên nên thằng r phải chạy
    while(r>l){
        int m=(l+r)/2;
        if(arr[m]>=x) r=m;
        else l=m+1;
    }
    if(arr[l]==x) return l;
    return -1;
}
int main() {
int n,arr[100],x;
cin>>n;
nhap(n,arr);
cin>>x;
cout<<binarySearch(0,n-1,arr,x);
    return 0;
}
