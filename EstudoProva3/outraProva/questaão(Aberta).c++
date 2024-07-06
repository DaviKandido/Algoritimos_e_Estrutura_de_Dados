#include <iostream>
#include <cmath>
#include <cstdio>

#define pi 3.14159265

class Arranjo
{
    protected:
    int n;
    double *dados;

    public:

    Arranjo(){
        n = 0;
        dados = nullptr;
    }

    Arranjo(int m){
        n = m;
        dados = new double[m];
    }

    void set(int x, double value){
        if(x >= 0 && x < n){
            dados[x] = value;
        } else {
            std::cout << "Erro: acesso de posicao invalida" << std::endl;
        }
    }

    double get(int x){
        if(x >= 0 && x < n){
            return dados[x];
        } else {
            std::cout << "Erro: acesso de posicao invalida" << std::endl;
            return 0.0;
        }
    }

    int get_n(){
        return n;
    }    

};

class Poligono : public Arranjo{
    private:
    int lados;
    Arranjo *array;

    public:
    Poligono(){
        lados = 0;
        array = nullptr;
    }

    Poligono(int n, double apotema){
        lados = 0;
        if(n >= 3 ){

            lados = n;
            array = new Arranjo(7);

            if(array){
                array->set(2, apotema);
                array->set(0, angulo());
                array->set(1, lado());
                array->set(3, raio());
                array->set(4, perimetro());
                array->set(5, area1());
                array->set(6, area2());
            }
        }
    } //end construtor


    double angulo(){ return (2.0*pi/lados*(180/pi));}
    double apotema(){ return (array->get(2));}
    double lado(){ return (2.0*tan(pi/lados)*apotema());}
    double perimetro(){ return (lados*lado());}
    double area1(){ return(perimetro()*apotema()/2.0);}
    double area2(){
        return ( lados*lado()*lado()/(4.0*tan(pi/lados)));}
    double raio(){ return (apotema()/cos(pi/lados));}
    
    double print(){
        if (lados < 3){
            std::cout << "{ }\t";

            for (int i = 0; i < array->get_n(); i++)
            {
               std::cout << "{ } ";
            }
             std::cout << std::endl;
        }else{
            std::cout << lados <<"\t";
            for (int i = 0; i < array->get_n(); i++){
                printf("%.2lf\t", array->get(i));
            }
            std::cout << std::endl;
        }
    }

    void set_apotema (double medida){
        if (0<medida && medida){
            array->set(2, medida);
        }
    }

};



int main ( void )
{
  Poligono *p3 = new Poligono ( 3, 3.0*sqrt(3.0)/6.0 );
  Poligono *p4 = new Poligono ( 4, 2 );
  Poligono *p5 = new Poligono ( 5, 4.1292 );
  Poligono *p6 = new Poligono ( 6, 4.0*sqrt(3.0) );

  std::cout << "\n        [0]     [1]    [2]     [3]     [4]      [5]    [6]:";
  std::cout << "\nlados  angulo  lado  apotema  raio  perimetro  area1  area2\n";

  p3->print();
  p4->print();
  p5->print();
  p6->print();

  return ( EXIT_SUCCESS );
} // end main()