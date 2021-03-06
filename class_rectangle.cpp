#include <iostream>
using namespace std;
class hcn {
private:
  float d, r, dt, cv;

public:
  void nhap();
  void tinhdt();
  void tinhcv();
  void xuat();
};
void hcn::nhap(){
  cout<<"Nhap CD va CR: ";
  cin>>d>>r;
}
void hcn::tinhdt(){
	dt=d*r; 
}
void hcn::tinhcv(){
	cv=(d + r)*2;
}
void hcn::xuat(){
  cout<<"Dien tich HCN= "<<dt<< endl;
  cout<<"Chu vi HCN= "<<cv<< endl;
}
int main(){
  hcn hinh[10];
  for (int i = 0; i < 10; i++) {
    cout << "HCN" << i + 1 << "  ";
    hinh[i].nhap();
    hinh[i].tinhdt();
    hinh[i].tinhcv();
    hinh[i].xuat();
  }
}
