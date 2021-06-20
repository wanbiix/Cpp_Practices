#include<conio.h> 
#include<iostream.h>
#include<iomanip.h>
#include<string.h>

class nguoi{
  private:
    char ho[10],ten[10];
    int lop,gioitinh,ns;
  public:\
    void nhap(){
      cout<<"\n nhap ho cua sinh vien :";
      cin.ignore(1);
      cin.get(ho,10);
      cout<<"\n nhap ten cua sinh vien :";
      cin.ignore(1);cin.get(ten,10); 
      cout<<"\n nhap lop sinh vien dang hoc";
      cin>>lop;cout<<"\n nhap nam sinh :";
      cin>>ns;
      cout<<"\n nhap gioi tinh";
      while(1){        //---->warning : funtion containing while are not expanded inlin
        cin>>gioitinh;
        if((gioitinh==0)||(gioitinh==1))
        break;
        elsecout<<"\n nhap lai gioi tinh";
      } 
    }
    void hien(){
      cout<<setw(10)<<ho<<setw(10)<<ten<<setw(5)<<gioitinh<<setw(5)<<ns<<setw(5)<<lop;
      {
        int traveten()
        {return ten();
};
class diem{
  private:
    float csdl,mmt,ctdl,java,trituent,lthdt,moncs,moncn;
  public:
    void nhap(){
      cout<<"nhap diem mon co so du lieu";
      cin>>csdl;
      cout<<"nhap diem mon mang may tinh";
      cin>>mmt;
      cout<<"nhap diem mon cau truc du lieu";
      cin>>ctdl;
      cout<<"nhap diem mon java";
      cin>>java;
      cout<<"nhap diem mon lap trinh huong doi tuong: ";
      cin>>lthdt;
      cout<<"nhap diem mon tri tue nhan tao";
      cin>>trituent;
      *moncs=mmt+lthdt+ctdl;
      *moncn=java+trituent+csdl;
    }
    void hiends(){
      cout<<setw(5)<<mmt<<setw(5)<<lthdt<<setw(5)<<ctdl<<moncs<<setw(5)<<java<<setw(5)<<trituent<<setw(5)<<csdl<<setw(5)<<moncn;
    }
    float travediemmoncs(){
      return moncs;
    }
    float travediemmoncn(){
      return moncn;
    }
    int kq(){
      if(moncs>=5)&&(moncn>=5);     //--->expreesion syntax
    {
      return 1;
      return 0;
    }
    };     //statament mising
};
        
        
        
   
 //  source  :   https://tailieu.vn/doc/bai-tap-lap-trinh-ngon-ngu-c--77602.html
      
      
      
      
      
