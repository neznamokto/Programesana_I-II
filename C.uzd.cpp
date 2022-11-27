#include <iostream>
#include <cmath>
using namespace std;

int main(){
  int a;
  int b;
  int koordinates[2];

  cout<<"Ierakstiet x koordinates"<<endl; //rinda
  cin>>a;
  cout<<"Ierakstiet y koordinates"<<endl; //kollona
  cin>>b;
  koordinates[0] = sqrt(b*b); //Y koordinâtes
  koordinates[1] = sqrt(a*a); //X koordinâtes
  for (int i = 0; i < koordinates[0]; i++) {
    for(int k = 0; k < koordinates[1]; k++) {
      if(i % 2 == 0) {
        if(k % 2 == 0) {cout<<"0";}
        else {cout<<"1";}
      } else {
        cout<<"1";
      }
    }
  cout<<endl;
  }
}
