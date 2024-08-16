#include<iostream>
#include<string>

class Animal {
 //public 
 //protected
 //private
	public:
		//método constructor
		Animal(std::string name, std::string sound):name(name), sound(sound){}

		void makesound() const{
			std::cout<<name<< " hace " <<sound<<std::endl;
		}

		std::string name;
		std::string sound;
};

//herencia
class Perro: public Animal{
	public:
		Perro(std::string name):Animal(name, "woof"){}
};

class Gato: public Animal {
	public:
		Gato(std::string name):Animal(name, "meow"){}

};

int main(){
	Animal leon("Alex", "rawr");
	Animal perro("Rex", "woof");

	Perro miperro("Tony");
	Gato migato("Michi");

//Accediendo a metodos
	leon.makesound();
	perro.makesound();
	miperro.makesound();
	migato.makesound();

//Accediendo a atributos

	std::cout<<"Mi perro se llama "<<perro.name<<std::endl;

return 0;
}
