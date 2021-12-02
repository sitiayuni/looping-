#include <iostream>

using namespace std;

int main(){

//deklarasi variabel	
	int x, y;
	x = 5 ;
	y = 5 ;
	
//looping membentuk pola persegi
	for (int z=1; z<=x; z++){
		for(int a=1; a<y ; a++){
			cout<< " # ";
		}
		cout <<" # "<< endl;
	}
}
