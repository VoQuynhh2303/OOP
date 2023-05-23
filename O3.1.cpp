#include<bits/stdc++.h>
using namespace std;
class Array{
	private:
		float *a;
		int n;
	public:
		friend istream&operator>>(istream&in, Array&y);
		friend ostream&operator<<(ostream&out, Array&y);
		Array operator++();
		Array operator--();
//		void operator++(){
//			for(int i=0; i<n-1; i++){
//				for(int j=i; j<n; j++){
//					if(a[i]>a[j]){
//						int tg=a[i];
//						a[i]= a[j];
//						a[j]=tg;
//					}
//				}
//			}
//		}
//		void operator--(){
//			for(int i=0; i<n-1; i++){
//				for(int j=i; j<n; j++){
//					if(a[i]<a[j]){
//						int tg=a[i];
//						a[i] = a[j];
//						a[j] = tg;
//					}
//				}
//			}
//		}	
	
};
istream&operator>>(istream&in, Array&y){
	cout<<"Nhap so luong phan tu:"; in>>y.n;
	y.a = new float [y.n];
	for(int i=0; i<y.n; i++){
		cout<<"a["<<i<<"] = "; in>>y.a[i];
	}
	return in;
}
ostream&operator<<(ostream&out, Array&y){
	for(int i=0; i<y.n; i++){
		out<<y.a[i]<<" ";
	}
	return out;
}
Array Array::operator++(){
			for(int i=0; i<n-1; i++){
				for(int j=i; j<n; j++){
					if(a[i]>a[j]){
						int tg=a[i];
						a[i]= a[j];
						a[j]=tg;
					}
				}
			}
		}
Array Array:: operator--(){
			for(int i=0; i<n-1; i++){
				for(int j=i; j<n; j++){
					if(a[i]<a[j]){
						int tg=a[i];
						a[i] = a[j];
						a[j] = tg;
					}
				}
			}
		}	
int main(){
	Array a;
	 cin>>a;
	cout<<"Cac phan tu ban dau cua mang:"<<a<<endl; 
	cout<<"Cac phan tu sau khi sap xep tang:";
	++a;
	cout<<a<<endl;
	cout<<"Cac phan tu sau khi sap xep giam:";
	--a;
	cout<<a;
	ofstream f("MANG.txt", ios::out);
	f<<"Cac phan tu ban dau cua mang:"<<a<<endl; 
	f<<"Cac phan tu sau khi sap xep tang:";
	++a;
	f<<a<<endl;
	f<<"Cac phan tu sau khi sap xep giam:";
	--a;
	f<<a;
	f.close();
}

