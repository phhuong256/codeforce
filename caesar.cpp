#include <iostream>
using namespace std;
int Kt_So(char c)
{
	return c - 'A';
}

char So_Kt(int n){
	return 'A' + n;
}

int main()
{
		string 	P , C; 
		int K;
		cout<<"Nhap chuoi: ";
		getline(cin, P);
		C = P;
		cout<<"Nhap K: ";
		cin>>K;
		
		//Ma hoa
		
		for(int i = 0; i<P.size(); i++){
			int m;
			m = Kt_So(P[i]);
			m = (m+K) % 26;
			C[i] = So_Kt(m);
		}
		cout<<"Chuoi ma hoa: "<<C;
		
		//Giai ma
		
		for(int i = 0 ; i < C.size(); i++ ){
			int m;
			m = Kt_So(C[i]);
			m = (m-K+26) % 26;
			P[i] = So_Kt(m);
		}
		cout<<"\nChuoi giai ma: "<<P;
}


