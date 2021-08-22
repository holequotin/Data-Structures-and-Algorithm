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
//hàm đổi chỗ
void swap(int *a,int *b){
    int c=*a;
    *a=*b;
    *b=c;
}
void Select_Sort(int n,int arr[]){
    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]) min_index=j;
        }
        swap(&arr[i],&arr[min_index]);
    }
}
int main() {
int n,arr[100];
cin>>n;
nhap(n,arr);
Select_Sort(n,arr);
xuat(n,arr);
    return 0;
}
