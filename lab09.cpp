#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main (){
    ifstream archivo;
    archivo.open("lab09.txt");

    if(archivo.fail()){
        cout << "El archivo no existe." << endl;
        return 1;
    }

    int contador=0;
    string texto;

    while(getline(archivo,texto)){
        contador++;
        cout <<"Linea" << contador <<":"<<texto << endl;
    }

    archivo.close();

    return 0;
}
