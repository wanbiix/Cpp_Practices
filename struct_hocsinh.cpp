#include <iostream>
using namespace std;

struct hocsinh{
     char hoten[50];
     char xeploai[50];
     float diem, dtb;
     int somon;

};
void input(struct hocsinh &hs1){
	int a[20];
	cout<<"Nhap ho ten: ";
	cin.getline(hs1.hoten, 50);
	cout<<"Nhap so mon can tinh ÐTB: ";
	cin>>hs1.somon;
	for(int i=1;i<=hs1.somon;i++){
		cout<<"Nhap diem mon "<<i<<": ";
		cin>>a[i]; 
	}
	cout<<"==================================="<<endl;
	
}
void calculator(struct hocsinh hs1){
	for(int i=1;i<=hs1.somon;i++){
		
	}
		
}
void output(struct hocsinh hs1){
	cout<<"Ho va ten: "<<hs1.hoten<<endl;
	cout<<"Diem trung binh: "<<hs1.dtb<<endl;
	cout<<"Xep loai: "<<hs1.xeploai<<endl;
	
}

int main(){
	struct hocsinh hs1;
	input(hs1);
	output(hs1);
	calculator(hs1);
	
}


