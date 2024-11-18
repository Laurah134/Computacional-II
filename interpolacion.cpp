#include<iostream>
#include<cmath>
#include<vector>

class Polinomio_Lagrange {
	public:
		//método constructor
		Polinomio_Lagrange(std::string FuncionesCardinales, std::vector xDatos, std::vector yDatos):FuncionesCardinales(FuncionesCardinales), xDatos(xDatos), yDatos(yDatos){

        }

		void FuncionesCardinales() {
            for (int i=0; i>6; ++i){
                for(int j=0; j>6; ++j){
                    if(i!=j){
                        std::vector<double> li;
                        li.push_back((x-x[j])/(x[i]-x[j]));
                    }
                    std::cout<<"l_"
                }
            }
		}
    private:
        std::vector<double> x{0.15, 2.30, 3.15, 4.48, 6.25};
        std::vector<double> y{4.79867, 4.49013, 4.2243, 3.47313, 2.66674};
};