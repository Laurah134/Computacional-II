#include<iostream>
#include<string>

class number {

    public:
    number(double value1, double value2): value1(value1), value2(value2){}

    void sum() const{
        double r=value1+value2;
        std::cout<<"La suma de "<<value1<<" y "<<value2<<" es: "<<r<<std::endl;
    }
    
    void rest() const{
        double r=value1-value2;
        std::cout<<"La resta de "<<value1<<" y "<<value2<<" es: "<<r<<std::endl;
    }

    void multi() const{
        double r=value1*value2;
        std::cout<<"La multiplicación de "<<value1<<" y "<<value2<<" es: "<<r<<std::endl;
    }

    void div(){
        double r=value1/value2;
        std::cout<<"la división de "<<value1<<" y "<<value2<<" es: "<<r<<std::endl;
    }

    protected:

    double value1;
    double value2;
};

int main()
{

    double n1;
    double n2;
    int op;

    std::cout<<"Ingrese el valor de los números que desea operar"<<std::endl;
    std::cin>>n1;
    std::cin>>n2;

    number entero(n1,n2);

    std::cout<<"Ingrese la operación que desea hacer"<<std::endl;
    std::cout<<"1. Suma \n 2. Resta \n 3. multiplicación \n 4. División"<<std::endl;
    std::cin>>op;

    switch (op)
    {
    case 1:
        entero.sum();
        break;
    case 2:
        entero.rest();
        break;
    case 3:
        entero.multi();
    case 4:
        entero.div();
    default:
        break;
    }
    
    return 0;
}



