#include<bits/stdc++.h>
using namespace std;
class So{
	private:	
		 float tuSo, mauSo;
	public:
		friend istream&operator>>(istream&in, So&y);
		friend ostream&operator<<(ostream&out, So&y);
		So operator+(So y);
		So operator*(So y);
		float operator-(){
			return tuSo/mauSo;
		}
};
istream&operator>>(istream&in, So&y){
	cout<<"Nhap tu so:"; in>>y.tuSo;
	cout<<"Nhap mau so:"; in>>y.mauSo;
	return in;
}
ostream&operator<<(ostream&out, So&y){
	out<<y.tuSo<<"/"<<y.mauSo<<endl;
	return out;
}
So So::operator+(So y){
	So kq;
	kq.tuSo = tuSo*y.mauSo + mauSo*y.tuSo;
	kq.mauSo=mauSo * y.mauSo;
	return kq;
}
So So::operator*(So y){
	So kq;
	kq.tuSo = tuSo*y.tuSo;
	kq.mauSo=mauSo * y.mauSo;
	return kq;
}
int main(){
	So P, Q, tong, tich;
	cout<<"Nhap thong tin phan so P:"<<endl; cin>>P;
	cout<<"Nhap thong tin phan so Q:"<<endl; cin>>Q;
	tong=P+Q;
	tich=P*Q;
	cout<<"Ket qua cong:"<<tong<<" = "<<-tong<<endl;
	cout<<"Ket qua nhan:"<<tich<<" = "<<-tich<<endl;
}

