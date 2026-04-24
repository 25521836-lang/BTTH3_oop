#include "cArray.h"
#include<iostream>
using namespace std;
cArray::cArray()
{
    a=NULL;
    n=0;
}
void cArray::TaoNgauNhien(int size){
    n=size;
    a=new int[n];
    cout<<"Nhap cac phan tu:"<<endl;
    for(int i=0;i<n;i++){
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
}
void cArray::Xuat(){
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}
int cArray::DemX(int x){
    int dem=0;
    for(int i=0;i<n;i++){
        if (a[i]==x)
            dem++;
    }
    return dem;
}
bool cArray::KiemTraTangDan(){
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1])
            return false;
    }
    return true;
}
int cArray::LeNhoNhat(){
    int min=-1;
    for(int i=0;i<n;i++){
    if(a[i]%2!=0){
        if(min==-1||a[i]<min)
            min=a[i];
    }
    }
    return min;
}
bool cArray::KiemTraNguyenTo(int x){
    if(x<2)
        return false;
    for(int i=2;i*i<=x;i++){
        if(x%i==0)
            return false;
    }
    return true;
}
int cArray::SoNguyenToLonNhat(){
    int max=-1;
    for(int i=0;i<n;i++){
        if(KiemTraNguyenTo(a[i])){
            if(a[i]>max)
                max=a[i];
        }
    }
    return max;
}
void cArray::SapXepTang(){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j+1]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
void cArray::SapXepGiam(){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j+1]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
