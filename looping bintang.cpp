#include <iostream>
using namespace std;


int main(){

//deklarasi 
    string a[10]={"*", " *", "  *", "   *", "    *", "     *", "      *", "       *", "        *", "         *"};
    
//looping
    for (int i = 0; i < 10; i++){
        for(int j=0; j<10; j++){
            cout << a[i];
        }
        cout << endl;
    }
}
