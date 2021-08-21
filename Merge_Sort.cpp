#include<bits/stdc++.h>

using namespace std;
//hàm nhập mảng
void nhap(int n,int arr[]){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
//hàm in ra dãy
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
//Merge sort,quan trọng nhất là hàm Merge
//hàm nối 2 và sắp xếp 2 mảng
void Merge(int arr[],int l,int m,int r){
    //trộn 2 thằng kế tiếp
    //copy 2 mảng
    int arr1[1000],arr2[1000];
    for(int i=l;i<=m;i++){
        arr1[i]=arr[i];
    }
    for(int i=m+1;i<=r;i++){
        arr2[i]=arr[i];
    }
    //so sánh và đưa vào đúng vị trí
    int i=l,k1=l,k2=m+1;
    //xét từng p tử  một
    while (k1<=m&&k2<=r)
    {
        if(arr1[k1]<=arr2[k2]){
            arr[i]=arr1[k1];
            i++;
            k1++;
        }else{
            arr[i]=arr2[k2];
            i++;
            k2++;
        }
    }
    //gán mấy thằng còn lại
    if(k1==m+1){
        while(k2<=r){
            arr[i]=arr2[k2];
            k2++;
            i++;
        }
    }else{
        while(k1<=m){
            arr[i]=arr1[k1];
            k1++;
            i++;
        }
    }
    
}
void Merge_sort(int arr[],int l,int r){
    if(r>l){
    int m=(l+r)/2;
    //đưa về trường hợp nhỏ nhất
    Merge_sort(arr,l,m);
    Merge_sort(arr,m+1,r);
    Merge(arr,l,m,r);
    }else return ;
}
int main() {
int n,arr[1000];
cin>>n;
nhap(n,arr);
Merge_sort(arr,0,n-1);
xuat(n,arr);
    return 0;
}
