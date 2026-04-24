#ifndef CARRAY_H
#define CARRAY_H


class cArray
{
private :
    int *a;
    int n;
public:
    cArray();
    void TaoNgauNhien(int size);
    void Xuat();
    int DemX(int x);
    bool KiemTraTangDan();
    int LeNhoNhat();
    int SoNguyenToLonNhat();
    void SapXepTang();
    void SapXepGiam();
    bool KiemTraNguyenTo(int x);
};
#endif // CARRAY_H
