#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
struct node
{
    string name;
    int so_cb;
    int so_sv;
    node *next;
};
typedef node* truong;
truong taoTruongMoi(string name,int so_sv,int so_cb){
    truong truong_moi=new node;
    truong_moi->name=name;
    truong_moi->so_sv=so_sv;
    truong_moi->so_cb=so_cb;
    truong_moi->next=NULL;
}
//Hàm thêm trường mới vào cuối danh sách
void themTruong(string name,int so_sv,int so_cb,truong &head){
    if(head==NULL) {
        truong temp=taoTruongMoi(name,so_cb,so_sv);
        head=temp;
    }else{
    truong temp=head;
    //chạy tới cuối dãy
    while(temp->next!=NULL){
        temp=temp->next;
    }
    //tạo ra node mới
    truong p=taoTruongMoi(name,so_sv,so_cb);
    //gắn vào cuối dãy
    temp->next=p;
    }
}
void inDanhSachTruong(truong head){
    truong temp=head;
    while (temp!=NULL)
    {
        cout<<"Ten truong : "<<temp->name<<endl;
        cout<<"So can bo : "<<temp->so_cb<<endl;
        cout<<"So sinh vien : "<<temp->so_sv<<endl;
        cout<<"==================================="<<endl;
        temp=temp->next;
    }
    
}
int main() {
    int chon;
    truong head=NULL;
while (chon!=3)
{   system("cls");
    cout<<"Chon cac chuc nang:"<<endl;
    cout<<"1/Them truong"<<endl;
    cout<<"2/In ra danh sach truong"<<endl;
    cout<<"3/Ket thuc chuong trinh"<<endl;
    cout<<"Xin moi chon chuc nang:";cin>>chon;
    if(chon==1){
        string name;int so_cb,so_sv;
        cin.ignore();
        cout<<"Nhap tren truong : ";
        getline(std::cin,name);
        cout<<"Nhap so can bo : ";cin>>so_cb;
        cout<<"Nhap so sinh vien : ";cin>>so_sv;
        themTruong(name,so_sv,so_cb,head);
        cout<<"Da them truong vao danh sach"<<endl;
        getch();
    }
    if(chon==2){
        cout<<"Danh sach cac truong:"<<endl;
        cout<<"======================"<<endl;
        inDanhSachTruong(head);
        getch();
    }
    if(chon==3) break;
}

    return 0;
}
