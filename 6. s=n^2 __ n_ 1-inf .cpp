#include<iostream>
#include<math.h>

using namespace std;
int cal(int n){
	 int s=0;
     for (int i=1; i<=n; i++){
          s= s+i*i;
     }
	 return(s);
}
int main(){
     int n;
     cout<<"Nhap gia tri can tinh tong: ";
     cin>>n;
     cout<<cal(n);
}
