#include <iostream>

using namespace std; // count, cin, end1,

int main(int argc, char** argv) {
	int n1, n2, multiplicacion;
	
	// >> insercion de flujo
	// << extraccion de flujo
	
	cout <<"ingrese primer numero";
	cin>>n1;
	cout <<"ingrese segundo numero";
	cin>>n2;
	
	// + - * / 
	multiplicacion = n1 * n2;
	
	cout<<"la multiplicacion de "<<n1<<" * "<<n2<<" es: "<<multiplicacion<<endl;
	
	

	return 0;
	
}
