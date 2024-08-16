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
    number entero(1,2);


    entero.sum();
    entero.rest();
    entero.multi();
    entero.div();

    return 0;
}



