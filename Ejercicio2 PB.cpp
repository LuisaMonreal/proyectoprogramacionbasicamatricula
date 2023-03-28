#include <iostream>

using namespace std;

int main() {
	int num, op;

	cout << "Ingrese un numero: " << endl; cin >> num;
	if (num == 0)
	{
		cout << " Ha ingresado un numero invalido " << endl;
	}
	if (num > 0)
	{
		if (num % 2 == 0)
		{
			cout << num << " es positivo y par" << endl;
		}
		else
		{
			cout << num << " es positivo e impar" << endl;
		}
	}
	else
	{
		if (num % 2 == 0) {
			cout << num << " es negativo y par" << endl;
		}
		else
		{
			cout << num << " es negativo e impar" << endl;
		}

	}
	cout << " Desea ingresar otro numero? (1) si, (2)no" << endl; cin >> op;
	if (op == 1)
	{
		return main();
	}

	system("pause");
}