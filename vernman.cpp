#include <iostream>
#include <math.h>
using namespace std;


int main(){
	string P , C ;
	char K ;
	cout<<"Nhap chuoi P: "; getline(cin, P);
	C = P ;
	cout<<"Nhap khoa K: "; cin>>K;
	
	for(int i = 0 ; i < P.size() ; i++)
		C[i] = P[i]^K;
	cout<<"\nChuoi ma hoa: "<<C;
	
	for(int i = 0 ; i < C.size() ; i++)
		P[i] = C[i]^K;
	cout << "\nChuoi giai ma: "<<P;
}

