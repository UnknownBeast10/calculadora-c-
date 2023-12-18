#include <iostream>

int main() {
	int Num1, Num2;
	char Operacao;
	std::cout << "\nDigite um Numero: ";
	std::cin >> Num1;
	std::cout << "\nDigite Outro Numero: ";
	std::cin >> Num2;
	std::cout << "Qual operacao deseja efetuar? [+] Adicao | [-] Subtraçao | [x ou *] Multiplicacao | [: ou /] Divisao: '";
	std::cin >> Operacao;
	switch (Operacao) {
	case '+':
		std::cout << "Soma de Num1 + Num2 e: " << Num1 + Num2;
		break;
	case '-':
		std::cout << "Subtracao de Num1 - Num2 e: " << Num1 - Num2;
		break;
	case 'x':
	case '*':
		std::cout << "Multiplicacao de Num1 x Num2 e: " << Num1 * Num2;
		break;
	case ':':
	case '/':
		std::cout << "Divisao de Num1 : Num2 e: " << Num1 / Num2;
		break;
	default:
		std::cout << "Esse Operador Nao existe!!!";
		break;
	}
	std::cout << "\n";
	system("PAUSE");
}