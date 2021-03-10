#include <iostream>
#include<cstring>
using namespace std;

struct hocsinh{
     char hoten[50];
     char xeploai[50];
     float diem, dtb;
     int somon, a[50];
};
void input(hocsinh &hs){
	cout<<"Nhap ho ten: ";
	cin.getline(hs.hoten, 50);
	cout<<"Nhap so mon can tinh ÐTB: ";
	cin>>hs.somon;
	for(int i=1;i<=hs.somon;i++){
		cout<<"Nhap diem mon "<<i<<": ";
		cin>>hs.a[i]; 
	}
	cout<<"==================================="<<endl;
}
void dtb(hocsinh &hs){
	for(int i=1; i<=hs.somon;i++){
		hs.diem=hs.diem+hs.a[i];
	}
	hs.dtb=hs.diem/hs.somon;
}
void xeploai(hocsinh &hs){
	if(hs.dtb>=8){
		strcpy(hs.xeploai, "GIOI");
	}
	else if(hs.dtb>=6.5 && hs.dtb<8){
		strcpy(hs.xeploai, "KHA");
	}
	else strcpy(hs.xeploai, "TRUNG BINH");
}
void output( hocsinh hs){
	cout<<"Ho va ten: "<<hs.hoten<<endl;
	cout<<"Diem trung binh: "<<hs.dtb<<endl;
	cout<<"Xep loai: "<<hs.xeploai<<endl;
	
}
int main(){
	struct hocsinh hs;	
	input(hs);
	output(hs);	
}

