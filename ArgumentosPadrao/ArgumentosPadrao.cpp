# include <iostream>

/*Protótipos */
void Coordenadas(int x = 10, int y = 20, int z = 30);

int main() {

	Coordenadas();
	return 0; 

}

void Coordenadas (int x, int y, int z) {

	x *= 10;
	y *= 10;
	z *= 10;

	std::cout << "(" << x << " - " << y << " - " << z << ")";

}