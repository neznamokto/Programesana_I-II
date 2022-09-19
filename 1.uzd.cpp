#include <iostream>
using namespace std;

int main() {

    cout<<"Ievadiet pirmo skaitli"<<endl;
    int x;
    cin>>x;
    cout<<"Ievadiet otro skaitli"<<endl;
    int y;
    cin>>y;
    if (x>y) {
        cout<<"Pirmais skaitlis ir lielaks par otro"<<endl;
    } else if (x<y) {
        cout<<"Pirmais skaitlis ir mazaks par otro"<<endl;
    } else if (x==y) {
        cout<<"Pirmais skaitlis ir vienads ar otro"<<endl;
    }


}
