#include <iostream>
using namespace std; 
int main(){

 int szerokosc, wysokosc;
cout << "podaj szerokosc prostokata:";
cin  >> szerokosc;
cout << "podaj wysokosc:";
cin >> wysokosc;

for (int i= 0; i < wysokosc; ++i){
	for (int j= 0; j < 5; j++){                         
		cout << "*" ;
		}
		else if (j == 0 || j == szerokosc-1){
			cout<< " ";
		
		}
	}
	cout << endl;
}
return 0;
}







