#include <iostream>
using namespace std;
int Kt_So(char c)
{
	return c - 'A';
}

char So_Kt(int n){
	return 'A' + n;
}

int main(){
	string P , C , K;
	cout<<"Nhap chuoi P: "; 
	cin>>P;	C = P;
	cout<<"Nhap khoa K: "; cin>>K;
	//mã hóa
	int j = 0;
	for(int i = 0 ; i< P.size(); i++){
		int m ; m = Kt_So(P[i]);
		int k; k = Kt_So(K[j]);
		m = (m+k)%26;
		C[i] = So_Kt(m);
		j = j+1;
		if(j == K.size())
			j = 0;
	}
	cout<<"Chuoi ma hoa: " << C << endl;
	
	// giai ma
	j = 0;
	for(int i = 0 ; i< C.size(); i++){
		int m ; m = Kt_So(C[i]);
		int k; k = Kt_So(K[j]);
		m = (m-k+26)%26;
		P[i] = So_Kt(m);
		j = j+1;
		if(j == K.size())
			j = 0;
	}
		cout<<"Chuoi giai ma: " << P;
}

