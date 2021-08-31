/*
Disclaimer
Este codigo es un borrador
una version preeliminar que solo el desarrollador esta viendo 
por lo que los comentarios y demas es unicamente para el desarrollador
*/

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
using namespace std;

class Tomp{
    private://atributos
        string regex;
        string cadena_a_evaluar;

    public://metodos
        Tomp(string,string);
        void imprimirLaPtaRegex();
        void imprimirLaCadena();
        void crearAFN(string);
};

Tomp::Tomp(string laptaregex, string laPtaCadena){
    regex = laptaregex;
    cadena_a_evaluar = laPtaCadena;
}

void Tomp::imprimirLaPtaRegex(){
    cout<<"la regex es: "<<regex<<endl;
}

void Tomp::imprimirLaCadena(){
    cout<<"La cadena a evaluar es: "<<cadena_a_evaluar<<endl;
}

void Tomp::crearAFN(string regexRecibida){
    cout<<regexRecibida;
}

//c=cauntity v=value
int main(int argc, char *argv[]){
    // printf("argc=%d\n",argc);
    // for (int i = 0; i < argc; i++){
    //     printf("%s\n",argv[i]);
    // }

    Tomp afn1(argv[1],argv[2]);
    afn1.imprimirLaPtaRegex();
    afn1.imprimirLaCadena(); 
    afn1.crearAFN(argv[1]);
    
    
    return 0;
}