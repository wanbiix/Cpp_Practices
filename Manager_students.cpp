/*
Thiết kế chương trình lưu trữ thông tin sinh viên của 1 trường đại học,
biết thông tin sinh viên gồm : 
- Mã số
- Họ tên
- Năm sinh
- Điểm trung bình
1. Khai báo cấu trúc sinh viên
2. Nhập danh sách sinh viên
3. Xuất danh sách sinh viên
4. Tìm kiếm thông tin sinh viên dựa vào điểm trung bình
5. Thêm 1 sinh viên vào vị trí bất kỳ
6. Xóa 1 sinh viên có điểm trung bình dưới 5
7. Sắp xếp sinh viên tăng dần theo điểm trung bình
*/


#include<iostream>
#include<string>
using namespace std;

// khai báo cấu trúc 1 sinh viên
struct sinhvien
{
	string maso;
	string hoten;
	int namsinh;
	float diem_tb;
};
typedef struct sinhvien SINHVIEN;
// hàm nhập thông tin 1 thằng sinh viên
void Nhap_Thong_Tin_Sinh_Vien(SINHVIEN &x)
{
	while (getchar() != '\n');//rewind(stdin); //==> xóa bộ nhớ đệm
	cout << "\nNhap ma so sinh vien: ";
	getline(cin, x.maso);
	cout << "\nNhap ho ten sinh vien: ";
	getline(cin, x.hoten);
	cout << "\nNhap nam sinh sinh vien: ";
	cin >> x.namsinh;
	cout << "\nNhap diem trung binh sinh vien: ";
	cin >> x.diem_tb;
}

// hàm xuất thông tin 1 sinh viên
void Xuat_Thong_Tin_Sinh_Vien(SINHVIEN x)
{
	cout << "\nMa so sinh vien: " << x.maso;
	cout << "\nHo ten sinh vien: " << x.hoten;
	cout << "\nNam sinh sinh vien: " << x.namsinh;
	cout << "\nDiem trung binh sinh vien: " << x.diem_tb;
}

// hàm nhập nhiều sinh viên - hàm nhập danh sách sinh viên
void Nhap_Danh_Sach_Sinh_Vien(SINHVIEN arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\n\n\t\t NHAP THONG TIN SINH VIEN THU " << i + 1;
		Nhap_Thong_Tin_Sinh_Vien(arr[i]);
	}
}

// hàm xuất nhiều sinh viên - hàm nhập danh sách sinh viên
void Xuat_Danh_Sach_Sinh_Vien(SINHVIEN arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\n\n\t\t THONG TIN SINH VIEN THU " << i + 1;
		Xuat_Thong_Tin_Sinh_Vien(arr[i]);
	}
}

// hàm tìm kiếm thông tin sinh viên dựa vào điểm 
void Tim_Kiem_Sinh_Vien_Theo_Diem(SINHVIEN arr[], int n, float diem)
{ 
	int dem = 1;
	for (int i = 0; i < n; i++)
	{
		if (arr[i].diem_tb == diem)
		{
			cout << "\n\n\t\t THONG TIN SINH VIEN THU " << dem++;
			Xuat_Thong_Tin_Sinh_Vien(arr[i]);
		}
	}
}

// hàm thêm sinh viên vào vị trí bất kì
void Them(SINHVIEN arr[], int &n, int vt, SINHVIEN x)
{
	for (int i = n - 1; i >= vt; i--)
	{
		arr[i + 1] = arr[i];
	}
	arr[vt] = x;
	n++;
}

// xóa sinh viên có điểm trung bình dưới 5
void Xoa(SINHVIEN arr[], int &n, int vt)
{
	for (int i = vt + 1; i < n; i++)
	{
		arr[i - 1] = arr[i];
	}
	n--;
}
// hàm xóa các sinh viên có điểm tb dưới 5
void Xoa_Sinh_Vien_Duoi_5(SINHVIEN arr[], int &n)
{
	for (int i = 0; i < n;i++)
	{
		if (arr[i].diem_tb < 5)
		{
			Xoa(arr, n, i);
			i--;
		}
	}
}

// hàm hóa vị 2 sinh viên
void Hoan_Vi(SINHVIEN &x, SINHVIEN &y)
{
	SINHVIEN tam;
	tam = x;
	x = y;
	y = tam;
}
// hàm sắp xếp danh sách sinh viên tăng dần theo điểm tb
void Sap_Xep_Tang_Dan_Diem_TB(SINHVIEN arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i].diem_tb > arr[j].diem_tb)
			{
				Hoan_Vi(arr[i], arr[j]);
			}
		}
	}
}
int main()
{
	SINHVIEN arr[100]; // khai báo 1 cái mảng 1 chiều chứa nhiều sinh viên
	int n;
	cout << "\nNhap so luong sinh vien: ";
	cin >> n;
	cout << "\n\n\t\t\tNHAP DANH SACH SINH VIEN\n";
	Nhap_Danh_Sach_Sinh_Vien(arr, n);
	cout << "\n\n\t\t\tXUAT DANH SACH SINH VIEN\n";
	Xuat_Danh_Sach_Sinh_Vien(arr, n);
	/*int diem_tk;
	cout << "\nNhap diem can tim kiem: ";
	cin >> diem_tk;
	Tim_Kiem_Sinh_Vien_Theo_Diem(arr, n, diem_tk);
	int vt;
	SINHVIEN x;
	cout << "\nNhap vi tri can them: ";
	cin >> vt;
	cout << "\n\n\t\tNHAP THONG TIN SINH VIEN CAN THEM\n";
	Nhap_Thong_Tin_Sinh_Vien(x);
	Them(arr, n, vt, x);
	cout << "\n\n\t\t\tXUAT DANH SACH SINH VIEN\n";
	Xuat_Danh_Sach_Sinh_Vien(arr, n);*/

	/*Sap_Xep_Tang_Dan_Diem_TB(arr, n);
	cout << "\n\n\t\t\tDANH SACH SINH VIEN TANG DAN THEO DIEM TB\n";
	Xuat_Danh_Sach_Sinh_Vien(arr, n);*/
	Xoa_Sinh_Vien_Duoi_5(arr, n);
	cout << "\n\n\t\t\tDANH SACH SINH VIEN SAU KHI XOA\n";
	Xuat_Danh_Sach_Sinh_Vien(arr, n);
	system("pause");
	return 0;
}
