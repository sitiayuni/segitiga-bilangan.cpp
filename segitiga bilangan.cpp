#include <iostream>
using namespace std;


int main() {  
    
    // looping 
    int i; 
	//deklasi variabel i
 
    cin >> i;
    // masukkan nilai variabel i
   if(i >= 1 && i <=9 ){
       for(int x=i; x>0; x--){
        for(int j=0;j<x; j++){
            cout <<x<<" ";
        }
        cout << endl;      
    }

  }
    else {
        cout << "Bilangan tidak sesuai!" << endl; //jika tidak ada disyarat maka ouputnya tersebut
    }  
    return 0;
}
