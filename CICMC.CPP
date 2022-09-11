#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

/* Classificação do índice de massa corporal */
string ClassificarIMC(double imc) {
	if (imc < 16.0) {
		return "Magreza grave";
	}
	else if (imc == 16.0 || imc < 17.0) {
		return "Magreza moderada";
	}
	else if (imc == 17.0 || imc < 18.5) {
		return "Magreza leve";
	}
	else if (imc == 18.5 || imc < 25.0) {
		return "Saudável";
	}
	else if (imc == 25.0 || imc < 30.0) {
		return "Sobrepeso";
	}
	else if (imc == 30.0 || imc < 35.0) {
		return "Obesidade Grau I";
	}
	else if (imc == 35.0 || imc < 40.0) {
		return "Obesidade Grau II";
	}
	else {
		return "Obesidade Grau III";
	}

}

/* Cálculo do índice de massa corporal */
double CalcularIMC(double peso, double altura) {
	return peso / (altura * altura);
}


void ProgramaIMC(string versao) {
	double peso, altura, imc;

	cout << "===========================" << endl;
	cout << "Cálculo do IMC - Versão " << versao << endl;
	cout << "===========================" << endl << endl;

	cout << "Insira o seu peso em quilogramas: ";
	cin >> peso;
	cout << "Insira a sua altura em metros: ";
	cin >> altura;

	imc = CalcularIMC(peso, altura);
	
	cout << endl << "Seu Índice de Massa Corporal é: " << imc << " kg/m²" << endl;
	cout << "Classificação: " << ClassificarIMC(imc) << "." << endl;

}

/* Método principal do programa */
int main(int argc, char *argv[]) {
	string versao = "1.0";
	locale myLocale("pt_BR.UTF-8");
	cout.imbue(myLocale);
	cin.imbue(myLocale);

	ProgramaIMC(versao);

	return 0;
}