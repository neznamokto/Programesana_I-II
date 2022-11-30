#include <iostream>
using namespace std;

const int skr = 6, skk = 4;

bool rinarNullem(int y, int masivs[skr][skk]){
    for(int x = 0; x < skk; x++){
        if(masivs[y][x] != 0){
        return false;
        }
    }
    return true; //parbauda, vai rinda ir nulles
}

bool rinarViens(int y, int masivs[skr][skk]){
    for(int x = 0; x < skk; x++){
        if(masivs[y][x] != 1){
        return false;
        }
    }
    return true; //parbauda, vai rinda ir vieninieki
}

bool kolarnullem(int x, int masivs[skr][skk]){
    for(int y = 0; y < skr; y++){
        if(masivs[y][x] != 0){
        return false;
        }
    }
    return true;  //parbauda, vai kolonna ir nulles
}

bool kolarviens(int x, int masivs[skr][skk]){
    for(int y = 0; y < skr; y++){
        if(masivs[y][x] != 1){
        return false;
        }
    }
    return true;  //parbauda, vai kolonna ir vieninieki
}

int main(){

    int masivs[skr][skk] = {
        {1, 0, 0, 1},
        {1, 1, 1, 0},
        {1, 0, 1, 1},
        {1, 1, 1, 1},
        {1, 1, 0, 0},
        {1, 0, 0, 0},
    };

    int ran = 0, rav = 0, kan = 0, kav = 0;

    for (int rinda = 0; rinda < skr; rinda++){
        if (rinarNullem(rinda, masivs) == true){
            ran++;}

        if (rinarViens(rinda, masivs) == true){
            rav++;}
    } //parbauda, pa rindam

    for (int kolonna = 0; kolonna < skk; kolonna++){
        if (kolarnullem(kolonna, masivs) == true){
            kan++;}

        if(kolarviens(kolonna, masivs) == true){
            kav++;}
    }  //parbauda, pa kolonnam

    if(ran > 0){
        cout<<"rindu skaits, kas satur tikai nulles: "<<ran<<endl;
    }else{
        cout<<"nav rindu, kas satur tikai nulles."<<endl;
    }

    if(rav > 0){
        cout<<"rindu skaits, kas satur tikai vieniniekus: "<<rav<<endl;
    }else{
        cout<<"nav rindu, kas satur tikai vieniniekus."<<endl;
    }

    if(kan > 0){
        cout<<"kolonnu skaits, kas satur tikai nulles: "<<kan<<endl;
    } else {
        cout<<"nav kolonnu, kas satur tikai nulles."<<endl;
    }

    if(kav > 0){
        cout<<"kolonnu skaits, kas satur tikai vieniniekus: "<<kav<<endl;
    } else{
        cout<<"nav kolonnu, kas satur tikai vieniniekus."<<endl;
    }

}


