#include <iostream>
using namespace std;

int main () {
    int x[] = {2, 12, 22};

    if (x[0] > x[1] && x[0] > x[2]) {cout<<"Pirmais skaitlis ir lielaks ("<<x[0]<<")"<<endl;}
    else if (x[1] > x[0] && x[1] > x[2]) {cout<<"Otrais skaitlis ir lielaks ("<<x[1]<<")"<<endl;}
    else if (x[2] > x[0] && x[2] > x[1]) {cout<<"Tresais skaitlis ir lielaks ("<<x[2]<<")"<<endl;}

    if (x[0] < x[1] && x[0] < x[2]) {cout<<"Pirmais skaitlis ir mazaks ("<<x[0]<<")"<<endl;}
    else if (x[1] < x[0] && x[1] < x[2]) {cout<<"Otrais skaitlis ir mazaks ("<<x[1]<<")"<<endl;}
    else if (x[2] < x[0] && x[2] < x[1]) {cout<<"Tresais skaitlis ir mazaks ("<<x[2]<<")"<<endl;}
}
