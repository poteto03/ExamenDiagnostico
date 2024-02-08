//Ariana Garcia 23310171 2P
#include <iostream>
#include <stdlib.h>
using namespace std;

class barco{//clase padre
    private: //atributos, caracteristicas
       string nombre;
       int anio;
    public: //metodos
       barco(string,int);//constructor, iniciliza
       void datosbarco();
};

class pesca : public barco{//clase hija
    private: //atributos, caracteristicas
       string tpesca;
    public: //metodos
       pesca(string,int,string);//constructor, iniciliza
       void tipodepesca();
};

class toneladas : public barco{//clase hija
    private: //atributos, caracteristicas
       int ctoneladas;
    public: //metodos
       toneladas(string,int,int);//constructor, iniciliza
       void toneladasposibles();
};

//constructor clase barco (clase padre)
barco::barco(string _nombre,int _anio){
    nombre=_nombre;
    anio=_anio;
}

//constructor clase pesca (clase hija)
pesca::pesca(string _nombre,int _anio,string _tpesca) : barco(_nombre,_anio){
    tpesca=_tpesca;
}

//constructor clase pesca (clase hija)
toneladas::toneladas(string _nombre,int _anio,int _ctoneladas) : barco(_nombre,_anio){
    ctoneladas=_ctoneladas;
}
void barco::datosbarco(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Anio: "<<anio<<endl;
}
void pesca::tipodepesca(){
    datosbarco();
    cout<<"Pesca: "<<tpesca<<endl;
}
void toneladas::toneladasposibles(){
    datosbarco();
    cout<<"Toneladas: "<<ctoneladas<<endl;
}

int main()
{
    pesca barco1("La perla",2007,"langosta");
    barco1.tipodepesca();

    toneladas barco2("La mazatleca",2013,1);
    barco2.toneladasposibles();

    return 0;
}