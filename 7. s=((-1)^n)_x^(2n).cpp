#include<iostream>
#include<math.h>

using namespace std;
double cal(int n, float x){
	 double s=0;
	 for (int i=1; i<=n; i++){
          s= s+pow(-1,i)*pow(x,2*i);
     }
	 return(s);
}
int main(){
     int n;
     float x;
     cout<<"Import n and x: ";
     cin>>n>>x;
     cout<<"The result: "<<cal(n,x);
}
