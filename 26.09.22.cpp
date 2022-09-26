#include <iostream>
using namespace std;

int main () {

    int x;
    cout<<"Ievadiet veselo skaitli: "<<endl;
    cin>>x;
    int y;
    cout<<"Ievadiet otro veselo skaitli: "<<endl;
    cin>>y;
    int mazakais;

    if (x<y) {
        mazakais = x;
    }
    else{
        mazakais = y;
    }

    for (int z=1; z<=mazakais; z++) {
        if(x%z == 0 && y%z == 0) {
            cout<<"Kopigais dalitajs: "<<z<<endl;
        }
    }

}
