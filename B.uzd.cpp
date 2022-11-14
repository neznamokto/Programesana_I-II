#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Ievadiet naturalo skaitli"<<endl;
    cin>>n;
    cout<<endl;

    int a, b, c;

    for (int x=0; x<=n; x++) {
        a = x;
        for (int y=0; y<=n; y++){
            b = y;
            if (a<=b){
            for (int z=0; z<=n; z++) {
                c = z;
                if (b<=c){
                if (a*a + b*b == c*c) {
                    cout<<a<<" "<<b<<" "<<c<<endl;
                        }
                    }
                }
            }
        }
    }
}
