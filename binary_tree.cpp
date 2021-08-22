#include<bits/stdc++.h>

using namespace std;
struct node{
    int data;
    node* left;
    node* right;
};
//hàm thêm phần tử vào cây
void addNode(node *&root,int x){
    if(root==NULL){
        node *temp=new node;
        temp->data=x;
        temp->left=NULL;
        temp->right=NULL;
        root=temp;
    }else{
        if(x<root->data) addNode(root->left,x);
        else addNode(root->right,x);
    }
}
//hàm in phần tử của cây
void display(node *root){
    if(root!=NULL){
        display(root->left);
        cout<<root->data<<" ";
        display(root->right);
    }
}
//hàm tính chiều cao của cây
int height(node *root){
    if(root==NULL) return -1;
    return 1+std::max(height(root->left),height(root->right));
}
int main() {
int n,x;
node *root=NULL;
cin>>n;
for(int i=0;i<n;i++){
    cin>>x;
    addNode(root,x);
}
    return 0;
}
