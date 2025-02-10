#include <iostream>
#include <vector>
using namespace std;
class Producto {
private:
	string nombre;
	int codigo;
	float precio;
	int stock;
public:
	Producto(string nom, int cod, float prec, int stk) {
		nombre = nom;
		codigo = cod;
		precio = prec;
		stock = stk;
	}
	void mostrar() {
		cout << "Código: " << codigo << ", Producto: " << nombre
			<< ", Precio: Q" << precio << ", Stock: " << stock << endl;
	}
	int obtenerCodigo() {
		return codigo;
	}
	int obtenerStock() {
		return stock;
	}
	void actualizarStock(int cantidad) {
		if (cantidad > stock) {
			cout << "No hay suficiente stock disponible." << endl;
		}
		else {
			stock -= cantidad;
			cout << "Stock actualizado. Nuevo stock: " << stock << endl;
}
}
float obtenerValor() {
	return stock * precio;
}
};