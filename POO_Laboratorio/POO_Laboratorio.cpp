#include <iostream>
using namespace std;

class Pokemon {
protected:
	string nombre;
	int num;
public:
	Pokemon(string n, int p) : nombre(n), num (p) {}
	virtual void hacerSonido() {
		cout << nombre << " dice su propio nombre." << endl;
	}
};

class Pikachu : public Pokemon {
public:
	Pikachu(string n, int p) : Pokemon(n, p) {}
	void hacerSonido() override {
		cout << nombre << " dice: Pikachu!" << endl;
	}
};

class Videojuego {
private:
	string nombre;
	double precio;
public:
	Videojuego(string nom, double prec) : nombre(nom), precio(prec) {}
	void incrementar() {
		precio += 10;
		cout << "El videojuego " << nombre << " ahora cuesta Q." << precio << endl;
	}
};

class Personaje {
private:
	string nombre;
	string franquicia;
public:
	Personaje(string n, string f) : nombre(n), franquicia(f) {}
	void saludar() {
		cout << "Hola, mi nombre es " << nombre << ", quizas me conozcas de " << franquicia << "!" << endl;
	}
};

int main() {
	Pikachu miPoke("Pika", 25);
	miPoke.hacerSonido();
	Videojuego miJuego("Baldur's Gate 3", 400);
	miJuego.incrementar();
	Personaje miPersonaje("Mickey Mouse", "Disney");
	miPersonaje.saludar();
 return 0;
}
