#include<bits/stdc++.h>
using namespace std;
class benhNhan;
class benhVien{
	private:
		char tenBV[20];
		char diaChi[20];
		char giamDoc[20];
	public:
		friend class benhNhan;	
};
class nguoi{
	protected:
		char hoTen[20];
		int tuoi;
	public:
		void nhap();
		void xuat();
		friend void search(benhNhan a[], int n);
		friend void sua(benhNhan a[],  int n);
};
void nguoi::nhap(){
	cout<<"nhap ho ten:"; fflush(stdin); gets(hoTen);
	cout<<"nhap tuoi:"; cin>>tuoi;
}
void nguoi::xuat(){
	cout<<setw(15)<<hoTen<<setw(15)<<tuoi;
}
class benhNhan:public nguoi{
	private:
		char ma[20];
		char tienSu[20];
		char chanDoan[20];
		benhVien x;
	public:
		void nhap();
		void xuat();
		 friend void search(benhNhan a[], int n);	
		 friend void sua(benhNhan a[],  int n);
};
void benhNhan::nhap(){
	cout<<"nhap ma:"; fflush(stdin); gets(ma);
	cout<<"nhap tien su:"; fflush(stdin); gets(tienSu);
	cout<<"nhap chan doan:"; fflush(stdin); gets(chanDoan);
	cout<<"nhap ten benh vien:"; fflush(stdin); gets(x.tenBV);
	cout<<"nhap dia chi:"; fflush(stdin); gets(x.diaChi);
	cout<<"nhap giam doc:"; fflush(stdin); gets(x.giamDoc);
	nguoi::nhap();
}
void benhNhan::xuat(){
	cout<<setw(15)<<x.tenBV<<setw(15)<<x.diaChi<<setw(15)
	<<x.giamDoc;
	nguoi::xuat();
	cout<<setw(15)<<ma<<setw(15)<<tienSu<<setw(15)
	<<chanDoan;
}
void search(benhNhan a[], int n){
	int dem =0;
	for(int i=0; i<n; i++){
		if(a[i].tuoi>30)
			dem++;
	}
	cout<<"\nSo benh nhan lon hon 30 tuoi:"<<dem;
}
void sua(benhNhan a[],  int n){
	for(int i=0; i<n; i++){
		if(strcmp(a[i].ma, "BN01")==0)
			a[i].tuoi = 20;
	}
}
int main(){
	benhNhan a[20];
	int n;
	cout<<"nhap so luong:"; cin>>n;
	for(int i=0; i<n; i++){
		cout<<"nhap thong tin benh nhan thu:"<<i+1<<endl;
		a[i].nhap();
	}
	cout<<"			--------THONG TIN BENH NHAN-----------				"<<endl;
	cout<<setw(15)<<"Ten benh vien"<<setw(15)<<"Dia chi"<<setw(15)<<"Giam doc"<<setw(15)
	<<"Ho ten"<<setw(15)<<"Tuoi"<<setw(15)<<"Ma"<<setw(15)<<"Tien su"<<setw(15)<<"Chan doan"<<endl;
	for(int i=0; i<n; i++){
		a[i].xuat();
	}
	search(a,n);
	cout<<"\n			------------DANH SACH SAU KHI SUA--------------					"<<endl;
	sua(a,n);
	for(int i=0; i<n; i++){
		a[i].xuat();
	}
}
