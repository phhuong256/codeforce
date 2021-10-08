#include <iostream> 
using namespace std; 
int main(){
	string P , C , K;
	string B = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cout<<"Nhap chuoi P : " ; 
	cin>>P;
	C = P;
	cout<<"Nhap K: " ;
	cin >> K;
	for(int i = 0 ; i<P.size(); i++)
		for(int j = 0; j<26 ; j++){		
			if(P[i] == B[j]){
				C[i] = K[j];
			}	
		}
			cout<<"Chuoi ma hoa:"<<C;
		for(int i = 0 ; i<C.size(); i++){
			for(int j = 0 ; j<C.size(); j++){
				if(C[i]==K[j])
				{
					P[i] = B[j];
				}
			} 
			
		}
		cout<<"\nChuoi giai ma:"<<P;
}
