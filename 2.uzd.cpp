#include <iostream>
using namespace std;

int main () {
int x;
int y;
string darbiba;

    cout<<"Izvelies darbibu: saskatisana (+), atnemsana (-), reizinasana (*), dalisana (/)"<<endl<<"Ievadiet attiecigas darbibas zimi"<<endl;
    cin>>darbiba;
    cout<<"Ievadiet pirmo skaitli"<<endl;
    cin>>x;
    cout<<"Ievadiet otro skaitli"<<endl;
    cin>>y;

    if (darbiba == "+") {
        cout<<"Rezultats ir "<<x+y;
    } else if (darbiba == "-") {
        cout<<"Rezultats ir "<<x-y;
    } else if (darbiba == "*") {
        cout<<"Rezultats ir "<<x*y;
    } else if (darbiba == "/") {
        cout<<"Rezultats ir "<<x/y;
    }
    }
