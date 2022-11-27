#include <iostream>
using namespace std;

int main () {

    int repeater; //prieks atkartosanas
    int x; //pirmais vesels skaitlis
    cout<<"Ievadiet veselo skaitli: "<<endl;
    cin>>x;
    int y; //otrais vesels skaitlis
    cout<<"Ievadiet otro veselo skaitli: "<<endl;
    cin>>y;
    int mazakais; //skaitlu salidzinajums

    if (x<y) {
        mazakais = x;
    }
    else{
        mazakais = y;
    }

    //kopigie dalitaji
    for (int z=1; z<=mazakais; z++) {
        if(x%z == 0 && y%z == 0) {
            cout<<"Kopigais dalitajs: "<<z<<endl;
            cout<<endl;

    cout<<"Gribi atkartot programmu?"<<endl; //programmas atkartosana
    cout<<"1 = ja  0 = ne"<<endl;
    cin>>repeater;
    cout<<endl;

            if (repeater == 1) {
                main();
            }
            else if (repeater == 0) {
                    break;
            }

        }
    }
}
