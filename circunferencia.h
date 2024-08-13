#include <cmath> 

using namespace std;

struct Circulo{
    float x;
    float y; 
    float raio;
};


Circulo cria( float x, float y, float raio){
    Circulo c;
    c.x = x;
    c.y = y;
    c.raio = raio;
    return c;
}

float retornaX(Circulo c){
    return c.x;
}

float retornaY(Circulo c){
    return c.y;
}

float retornaRAIO(Circulo c){
    return c.raio;
}

float calculaDiametro(Circulo c){
    return c.raio * 2;
}

float calculaPerimetro(Circulo c){
    return 2 * 3.14 * c.raio;
}

void alteraX(Circulo &c, float x){
    c.x = x;
}

void alteraX(Circulo &c, float y){
    c.y = y;
}

void alteraRAIO(Circulo &c, float raio){
    c.raio = raio;
}

string comparacirc(Circulo c1, Circulo c2){
    float per1, per2;
    per1 = calculaPerimetro(c1);
    per2 = calculaPerimetro(c2);
    if ( per1 == per2 ){
        return "são iguais";
    }
    if (per1 > per2){
        return " primeira é maior ";
    }else{
        return " segunda é maior ";
    }
}

bool comparaPos(Circulo c1, Circulo c2){
    if (c1.x == c2.x and c1.y == c2.y){
        return true;
    }else{
        return false; 
    }
}