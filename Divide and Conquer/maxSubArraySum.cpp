#include<iostream>

using namespace std;
int max(int a,int b,int c){
	if(a>b&&a>c) return a;
	else if(b>c) return b;
	else return c;
}
//để phòng ngừa trường hợp là có crossing
int maxCrossingSum(int left,int right,int A[1000]){
	int mid=(left+right)/2;
	int sum=0;
	//lay tong trai
	int left_sum=INT_MIN;
	for(int i=mid;i>=left;i--){
		sum=sum+A[i];
		if(sum>left_sum) left_sum=sum;
	}
	//lay tong phai
	sum=0;
	int right_sum=INT_MIN;
	for(int i=mid+1;i<=right;i++){
		sum=sum+A[i];
		if(sum>right_sum) right_sum=sum;
	}
	return max(left_sum,right_sum,left_sum+right_sum);
}

int maxSubArraySum(int left,int right,int A[1000]){
	if(right==left) return A[left];
	else{
		int mid=(left+right)/2;
		return max(maxSubArraySum(left,mid,A),maxSubArraySum(mid+1,right,A),maxCrossingSum(left,right,A));
	}
}
int main() {
int n,A[1000];
cin>>n;
for(int i=0;i<n;i++){
	cin>>A[i];
}
cout<<maxSubArraySum(0,n-1,A);
	return 0;
}
