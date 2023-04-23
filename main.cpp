#include <iostream>
using namespace std;

int main(){
    int n,primo ,a, secondo,terzo,  i=0;
    cin>>n;
    a = n-2;
    primo = 1;
    secondo = 1;
    if (n >= 2 ){
        cout << primo << endl;
        cout << secondo << endl;
        while(i< a){
            terzo = primo + secondo ;
            primo = secondo ;
            secondo = terzo;
            i++;
            cout<< terzo<< endl;
        }
    }
    else {
        cout << "errore"<< endl;
    }
    return 0;
}
