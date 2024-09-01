#include<iostream>
#include<vector>
#include<cmath>

//Clase abstracta:::::

class Operacion{
    public:
        virtual double calcular(double a, double b)=0;
        virtual std::string nombreOperacion() const = 0;
        virtual ~Operacion(){};
};

/*Crear nuevas clases que sean derivadas (Herencia) de la clase operaciòn
y permitan eleaborar las diferentes operaciones de la calculadora*/

//--Potencia
class Potencia:public Operacion{
    public:
        double calcular(double a, double b) override{
            return pow(a,b);
        } 
        std::string nombreOperacion() const override{
            return "Potencia";
        }
};
//--Raiz
class Raiz:public Operacion{
    public:
        double calcular(double a, double b) override{
            return pow(a,1/b);
        } 
        std::string nombreOperacion() const override{
            return "Raiz";
        }
};
//Porcentaje
class Porcentaje:public Operacion{
    public:
        double calcular(double a, double b) override{
            return a*(b*0.01);
        } 
        std::string nombreOperacion() const override{
            return "Porcentaje";
        }
};
//Combinatoria sin repetición
class CombinacionS:public Operacion{
    public:
        double calcular(double a, double b) override{
            return (tgamma(a)*a)/ ((tgamma(b)*b)*tgamma(a-b)*(a-b));
        } 
        std::string nombreOperacion() const override{
            return "Combinación sin repetición";
        }
};
//Combinatoria con repetición
class CombinacionR:public Operacion{
    public:
        double calcular(double a, double b) override{
            return ((tgamma(a+b-1))*(a+b-1))/((tgamma(b)*b)*tgamma(a-1)*(a-1));
        } 
        std::string nombreOperacion() const override{
            return "Combinación con repetición";
        }
};
//--Logaritmo
class Logaritmo:public Operacion{
    public:
        double calcular(double a, double b) override{
            return log(a)/(log(b));
        } 
        std::string nombreOperacion() const override{
            return "Logaritmo";
        }
};
//--Logaritmo natural
class Logaritmon:public Operacion{
    public:
        double calcular(double a, double b) override{
            return log(a);
        } 
        std::string nombreOperacion() const override{
            return "Logaritmo natural";
        }
};
//--Factorial
class Factorial:public Operacion{
    public:
        double calcular(double a, double b) override{

            return tgamma(a)*a;
        } 
        std::string nombreOperacion() const override{
            return "Factorial";
        }
};
//--Senoh
class Senoh:public Operacion{
    public:
        double calcular(double a, double b) override{
            return sinh(a);
        } 
        std::string nombreOperacion() const override{
            return "Seno hiperbolico";
        }
};
//--Cosenoh
class Cosenoh:public Operacion{
    public:
        double calcular(double a, double b) override{
            return cosh(a);
        } 
        std::string nombreOperacion() const override{
            return "Coseno hiperbolico";
        }
};
//--Arcoseno
class Arcoseno:public Operacion{
    public:
        double calcular(double a, double b) override{
            return asin(a);
        } 
        std::string nombreOperacion() const override{
            return "Arcoseno";
        }
};
//--Arcocoseno
class Arcocoseno:public Operacion{
    public:
        double calcular(double a, double b) override{
            return acos(a);
        } 
        std::string nombreOperacion() const override{
            return "Arcocoseno";
        }
};
//--Arcotangente
class Arcotangente:public Operacion{
    public:
        double calcular(double a, double b) override{
            return atan(a);
        } 
        std::string nombreOperacion() const override{
            return "Arcotangente";
        }
};
//--Coseno
class Coseno:public Operacion{
    public:
        double calcular(double a, double b) override{
            return cos(a*(M_PI/180));
        } 
        std::string nombreOperacion() const override{
            return "Coseno";
        }
};
//--Seno
class Seno:public Operacion{
    public:
        double calcular(double a, double b) override{
            return sin(a*(M_PI/180));
        } 
        std::string nombreOperacion() const override{
            return "Seno";
        }
};
//--Tangente
class Tangente:public Operacion{
    public:
        double calcular(double a, double b) override{
            return tan(a*(M_PI/180));
        } 
        std::string nombreOperacion() const override{
            return "Tangente";
        }
};
//--Exponencial
class Exponencial:public Operacion{
    public:
        double calcular(double a, double b) override{
            return exp(a);
        } 
        std::string nombreOperacion() const override{
            return "Exponencial";
        }
};
//--- Suma
class Suma:public Operacion{
    public:
        double calcular(double a, double b) override{
            return a+b;
        } 
        std::string nombreOperacion() const override{
            return "Suma";
        }
};

//--- Resta
class Resta:public Operacion{
    public:
        double calcular(double a, double b) override{
            return a-b;
        } 
        std::string nombreOperacion() const override{
            return "Resta";
        }
};

//Producto
class Producto:public Operacion{
    public:
        double calcular(double a, double b) override{
            return a*b;
        } 
        std::string nombreOperacion() const override{
            return "Producto";
        }
};

//Divisiòn
class Division:public Operacion{
    public:
        double calcular(double a, double b) override{
            return a/b;
        } 
        std::string nombreOperacion() const override{
            return "Divisiòn";
        }
};



/* Una clase que gestione las operaciones disponibles*/

class Calculadora{
    private:
        std::vector<std::unique_ptr<Operacion>>operaciones;
    public:
        //Metodo constructor mas detallado
        Calculadora(){
            operaciones.push_back(std::make_unique<Potencia>());
            operaciones.push_back(std::make_unique<Raiz>());
            operaciones.push_back(std::make_unique<Porcentaje>());
            operaciones.push_back(std::make_unique<CombinacionS>());
            operaciones.push_back(std::make_unique<CombinacionR>());
            operaciones.push_back(std::make_unique<Logaritmo>());
            operaciones.push_back(std::make_unique<Logaritmon>());
            operaciones.push_back(std::make_unique<Factorial>());
            operaciones.push_back(std::make_unique<Senoh>());
            operaciones.push_back(std::make_unique<Cosenoh>());
            operaciones.push_back(std::make_unique<Arcoseno>());
            operaciones.push_back(std::make_unique<Arcocoseno>());
            operaciones.push_back(std::make_unique<Arcotangente>());
            operaciones.push_back(std::make_unique<Coseno>());
            operaciones.push_back(std::make_unique<Seno>());
            operaciones.push_back(std::make_unique<Tangente>());
            operaciones.push_back(std::make_unique<Exponencial>());
            operaciones.push_back(std::make_unique<Suma>());
            operaciones.push_back(std::make_unique<Resta>());
            operaciones.push_back(std::make_unique<Producto>());
            operaciones.push_back(std::make_unique<Division>());       
        }
    void mostrarMenu() const{
        std::cout<<"BIENVENIDO A LA CALCULADORA CIENTÍFICA"<<std::endl;
        std::cout<<"Seleccione una operaciòn:"<<std::endl;
        for(size_t i=0;i<operaciones.size();i++){
            std::cout<<i+1<<"."<<operaciones[i]->nombreOperacion()<<std::endl;
        }
    }
    void ejecutarOperacion(int seleccion, double a, double b){
        if(seleccion<1 ||seleccion>operaciones.size()){
            std::cerr<<"Selecciòn no valida."<<std::endl;
            return;
        }
        try {
        double resultado=operaciones[seleccion-1]->calcular(a,b);
        if(seleccion==3){
            float resultado=(float) resultado;
        };
        std::cout<<"Resultado: "<<resultado<<std::endl;
        } catch(const std::exception& e){
        std::cerr<<e.what()<<std::endl;
        }
    }
};

//Interacciòn con el usuario.

int main(){

    Calculadora calc;

    double a,b;
    int seleccion;

    while(true){
    calc.mostrarMenu();    
    std::cout<<"Ingrese el nùmero de la operaciòn a realizar o 0 para salir"<<std::endl;
    std::cin>>seleccion; 
    
    
    if(seleccion==0){
        break;
    }

    if(seleccion==1 || seleccion<=17)
    {
        std::cout<<"Ingrese un número"<<std::endl;
        std::cin>> a;
        if(seleccion>=1 && seleccion<=6){
            switch(seleccion){
                case 1:
                    std::cout<<"Ingrese el exponente"<<std::endl;
                    break;
                case 2:
                    std::cout<<"Ingrese el indice"<<std::endl;
                    break;
                case 3: 
                    std::cout<<"Ingrese el porcentaje que desea sacar del número"<<std::endl;
                    break;
                case 4:
                    std::cout<<"Ingrese la cantidad de elementos que debe escoger del número de conjuntos ingresados"<<std::endl;
                    break;
                case 5:
                    std::cout<<"Ingrese la cantidad de elementos que debe escoger del número de conjuntos ingresados"<<std::endl;
                    break;
                case 6:
                    std::cout<<"Ingrese la base del logaritmo"<<std::endl;
                    break;
            
            }
            std::cin>>b;
        }

    }
    else
    {
        std::cout<<"Ingrese dos números"<<std::endl;
        std::cin>> a>>b;
    }

    

    calc.ejecutarOperacion(seleccion,a,b);
    }
    
    std::cout<<"Gracias por usar mi calculadora =)."<<std::endl;
    return 0;
}