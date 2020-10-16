/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: josevargas
 *
 * Created on October 16, 2020, 2:50 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

void CalculoPi(int, double);

/*
 * 
 */
int main(int argc, char** argv) {
    int valid = true;
    while (valid){
        int option = 0;
        cout << "      MENU" << endl
             << "1. Ejercicio 1" << endl
             << "2. Ejercicio 2" << endl
             << "3. Salir" << endl
             << "Ingrese una opcion: ";
        cin >> option;
        switch(option){
            case 1:{
                int x = 0;
                double e = 2.71828;
                cout << "Ingrese el valor de x: ";
                cin >> x;
                double resp = 1/(1+(pow(e, (double)-x)));
                cout << "f(" << x << ") = " << resp << endl;
                break;
            }
            case 2:{
                int limite;
                cout <<"Introduzca el limite de la sumatoria: ";
                cin >> limite;
                CalculoPi(limite, 0.0);
                cout << endl;
                break;
            }
            case 3:{
                valid = false;
                break;
            }
        }
    }
    
    return 0;
}

void CalculoPi(int x, double suma){
    if(x == 0){
        suma=suma+(pow(-1.0, x)/(2*x+1));
        cout << "El valor de pi es: " << suma * 4;
    }else{
        suma=suma+(pow(-1.0, x)/(2*x+1));
        CalculoPi(x-1, suma);
    }
}

