#include <iostream>
using namespace std;

int main(){
    int n, b1 = 0, b2 = 1, bn= 0;

    cout << "Masukan Batas Deret Bilangan Fibonacci :  ";
    cin >> n;
	
	cout<<endl;
	
    cout << "		Hasil Deret Fibonacci  ";
    cout <<endl;
    cout << "------------------------------------------------";
	cout <<endl;
	
    for (int i = 1; i <= n; i++) {
    	
        // Mencetak dua deret fibonacci pertama.
        
        if(i == 1)
        {
            cout << " " << b1<<" ";
            continue;
        }
        	if(i == 2)
        {
            cout << b2 << " ";
            continue;
        }
        
        bn = b1 + b2;
        b1 = b2;
        b2 = bn;
	    
         // Mencetak deret bilangan fibonacci berikutnya.
         
        cout << bn << " ";
}
    
    return 0;
}
