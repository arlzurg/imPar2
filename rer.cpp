#include <iostream>
using namespace std;

int main(){
	int a[255];
	int n,t,i,c,sp,si;
	i=0;
	t=0;
	sp=0;
	si=0;
	
	cin >> n;
	
	
	
	do{
		t+=1;
		a[t]=n%10;
		n=n/10;
		
		
		if(n==0){
			i=1;
		}
		
	}while(i!=1);
	
	for(c=1;c<=t;c++){
	cout << a[c] <<endl;

		if(a[c]%2==0)
			sp+=a[c];
		else
			si+=a[c];
	}
	
	cout << "SUMA PARES: " <<  sp <<endl;
	cout << "SUMA IMPARES: " <<  si <<endl;

	
	system("pause");
}
