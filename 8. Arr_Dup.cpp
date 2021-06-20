//Cho 2 mảng A,B đã sắp xếp tăng dần. Trộn A,B thành mảng C với C cũng sắp xếp tăng dần

#include<iostream>
using namespace std;

void Sort(int a[],int n){
    for(int i=0 ; i<n-1 ; i++){
        for(int j=i+1 ; j<n ; j++){
            if(a[i]>a[j]){
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
}

main(){
    int a[5]={6,4,2,3,7},b[5]={9,3,1,4,5};
    Sort(a,5);  Sort(b,5);
    int n=sizeof(a)/sizeof(a[0])+sizeof(b)/sizeof(b[0]);
    int c[n],count=0;   float s=0;
    for(int i=0 ; i<n ; i++){
        if(sizeof(a)/sizeof(a[0])>i){
            c[i]=a[i];
        }else{
            c[i]=b[count];
            count++;
        }      s+=c[i];
    }   Sort(c,n);
    cout<<"\n -> Cac phan tu tang dan cua mang c la: ";
    for(int i=0 ; i<n ; i++){
        cout<<"  "<<c[i];
    }
    cout<<"\n -> Trung binh cong cua mang c la: "<<(float)s/n<<"\n";
    system("pause");
    return 0;
}

/* The result: 
      -> Cac phan tu tang dan cua mang c la:   1  2  3  3  4  4  5  6  7  9                                                    
      -> Trung binh cong cua mang c la: 4.4 
*/      
