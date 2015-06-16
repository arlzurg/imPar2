#include <iostream>
#include <sstream>
#include <string.h>
using namespace std;
int main()
{
	int n,j,sumap=0,sumai=0;
	char numero[256],x;
	cin>>numero;
	j=strlen(numero);
	for(int i=0; i<j; i++){
		stringstream lyl;
		lyl << numero[i];
		lyl >> n; 
		if(n%2==0)
			sumap+=n;
		else
			sumai+=n;
	}
	cout<<sumap<<endl<<sumai<<endl;
}
