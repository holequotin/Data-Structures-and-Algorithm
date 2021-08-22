#include<iostream>

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
void InsertSort(int n,int arr[]){
    for(int i=1;i<n;i++){
        int index=i;
        while (arr[index]<arr[index-1]&&index>0)
        {
            swap(&arr[index],&arr[index-1]);
            index--;
        }
    }
}
int main() {
int n,arr[100];
cin>>n;
nhap(n,arr);
InsertSort(n,arr);
xuat(n,arr);
    return 0;
}

