

#include <iostream>
#include <math.h>
using namespace std;

void Exercise(){
    const unsigned int Benz = 300;
    double AB,BC,weight,form1,form2,form3,form4,form11,form22,form33,form44,formula1,formula2,formula3,formula4;
    double formula11,formula22,formula33,formula44;
    cout <<"Enter weight luggage: ";
    cin >>weight;
    cout <<"Enter the distance between points A and B: ";
    cin >> AB;
    cout<< "Enter the distance between points B and C: ";
    cin >> BC;
    if (weight>= 0 && weight<= 500){
        form1 = AB * 1;
        form11 = BC *1;
        if (form11 >=300){
            cout<<"The plane will not be able to fly to point C.";
        }
        if(form1>Benz){
            formula1= form1 - Benz;
            if(formula1>form11){
                formula11 = formula1 - form11;
                cout <<formula11<<" l/km";
            }
            else if(form11>formula1){
                formula11 = form11 - formula1;
                cout << formula11<<" l/km";
            }
        }
        else if(Benz>form1){
            formula1 = Benz - form1;
            if(formula1>form11){
                formula11 = formula1 - form11;
                cout <<formula11<<" l/km";
            }
            else if(form11>formula1){
                formula11 = form11 - formula1;
                cout << formula11<<" l/km";
            }
        }


    } else if(weight>= 500 && weight<= 1000){
        form2 = AB * 4;
        form22 = BC *4;
        if (form22 >=300) {
            cout << "The plane will not be able to fly to point C.";
        }
        if(form2>Benz){
            formula2= form2 - Benz;
            if(formula2>form22){
                formula22 = formula2 - form22;
                cout <<formula22<<" l/km";
            }
            else if(form22>formula2){
                formula22 = form22 - formula2;
                cout << formula22<<" l/km";
            }
        }
        else if(Benz>form2){
            formula2 = Benz - form2;
            if(formula2>form22){
                formula22 = formula2 - form22;
                cout <<formula22<<" l/km";
            }
            else if(form22>formula2){
                formula22 = form22 - formula2;
                cout << formula22<<" l/km";
            }
        }
    }
    else if(weight>= 1000 && weight<= 1500){
        form3 = AB * 7;
        form33 = BC * 7;
        if (form33 >=300) {
            cout << "The plane will not be able to fly to point C.";
        }
        if(form3>Benz){
            formula3= form3 - Benz;
            if(formula3>form33){
                formula33 = formula3 - form33;
                cout <<formula33<<" l/km";
            }
            else if(form33>formula3){
                formula33 = form33 - formula3;
                cout << formula33<<" l/km";
            }
        }
        else if(Benz>form3){
            formula3 = Benz - form3;
            if(formula3>form33){
                formula33 = formula3 - form33;
                cout <<formula33<<" l/km";
            }
            else if(form33>formula3){
                formula33 = form33 - formula3;
                cout << formula33<<" l/km";
            }
        }
    }
    else if(weight>= 1500 && weight<= 2000){
        form4 = AB*9;
        form44 = BC *9;
        if (form11 >=300) {
            cout << "The plane will not be able to fly to point C.";
        }
        if(form4>Benz){
            formula4= form4 - Benz;
            if(formula4>form44){
                formula44 = formula4 - form44;
                cout <<formula44<<" l/km";
            }
            else if(form44>formula4){
                formula44 = form44 - formula4;
                cout << formula44<<" l/km";
            }
        }
        else if(Benz>form4){
            formula4 = Benz - form4;
            if(formula4>form44){
                formula44 = formula4 - form44;
                cout <<formula44<<" l/km";
            }
            else if(form44>formula4){
                formula44 = form44 - formula4;
                cout << formula44<<" l/km";
            }
        }
    }
    else{
        cout<<"The plane does not lift more than 2000 kg";
    }
}
int main(){
    Exercise();
    return 0;
}
