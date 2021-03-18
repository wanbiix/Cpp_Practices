/*
struct sinhvien{
     char hoten[50];
     float diem[50], dtb;
     char xeploai[50];
};
int somon;
sinhvien lop[100];
int siso;
float dtb;    // dtb class
*/

#include<iostream>
#include<cstring>
using namespace std;

struct sinhvien{
     char hoten[50];
     float diem[50], dtb;
     char xeploai[50];
};
int somon;
sinhvien lop[100];
int siso;
float dtb;    // dtb ca lop

void nhap(sinhvien &sv){
	int a[50];
     cout<<"Nhap ho va ten: "<<endl;
     cin.getline(sv.hoten, 50);
     for (int i=1; i<=somon; i++){
     	cout<<"Nhap diem mon "<<i<<": ";
     	cin>>a[i];
	}
	cout<<"====================="<<endl; 
}

void tinh(sinhvien &sv){
	int a[50]; float s=0;
	for(int i=1;i<=somon; i++){
		s+=a[i];
	}
	sv.dtb=s/somon;
}

void dtblop(sinhvien &sv){
	
}

void xeploai(sinhvien &sv){
	if(sv.dtb>=8){
		strcpy(sv.xeploai, "GIOI");
	}
	else if(sv.dtb>=6.5 && sv.dtb<8){
		strcpy(sv.xeploai, "KHA");
	}
	else if(sv.dtb>=5 && sv.dtb<6.5){
		strcpy(sv.xeploai, "TRUNG BINH");
	}
	else strcpy(sv.xeploai, "YEU");
}

void xuat(sinhvien sv){
	cout<<"Ho va ten: "<<sv.hoten<<endl;
	cout<<"Diem trung binh: "<<sv.dtb<<endl;
	cout<<"Xep loai: "<<sv.xeploai<<endl;
}

void nhap_nhieu_sv(sinhvien a[], int n){
     for (int i = 1; i <=n; i++){
		cout << "IMPORT INFOR SV"<<i<<": "<<endl;
		nhap(a[i]);
     }
}     

void xuat_nhieu_sv(sinhvien a[], int n){
     for (int i = 1; i <=n; i++){
		cout << "INFOR SV"<<i<<": "<<endl;
		xuat(a[i]);
     }
}

int main(){
    struct sinhvien a[100];
    cout<<"Nhap si so sv: ";    
    cin>>siso;
    cout<<"Nhap so mon hoc: ";  
    cin>>somon;
    nhap_nhieu_sv(a, siso);
    xuat_nhieu_sv(a, siso);
}



