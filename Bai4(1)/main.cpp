#include<iostream>
#include"cArray.h"
using namespace std;
int main(){
    cArray arr;
    int n;
    cout<<"Nhap so phan tu:"<<endl;
    cin>>n;
    arr.TaoNgauNhien(n);
    cout<<"Mang"<<endl;
    arr.Xuat();
    int x;
    cout<<"Nhap x:";
    cin>>x;
    cout<<"So lan xuat hien:"<<arr.DemX(x)<<endl;
    if(arr.KiemTraTangDan())
        cout<<"Mang tang dan"<<endl;
    else
        cout<<"Mang khong tang dan"<<endl;
    cout<<"So le nho nhat"<<arr.LeNhoNhat()<<endl;
    cout<<"So nguyen to lon nhat"<<arr.SoNguyenToLonNhat()<<endl;
     arr.SapXepTang();
    cout << "Tang dan: ";
    arr.Xuat();

    arr.SapXepGiam();
    cout << "Giam dan: ";
    arr.Xuat();

    return 0;
}
