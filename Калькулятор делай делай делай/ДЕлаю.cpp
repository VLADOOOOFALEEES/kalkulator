#include <iostream>
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char znak;
	double nb1;
	double nb2;
	double otvet = 0;
	std::cout << "Введите первое число:";
	std::cin >> nb1;
	std::cout << "Введите знак (+,-,*,/,%):";
	std::cin >> znak;
	std::cout << "Введите второе число:";
	std::cin >> nb2;

	if (znak == '+')
	{
		otvet = nb1 + nb2;
	}
	if (znak == '-')
	{
		otvet = nb1 - nb2;
	}
	if (znak == '*')
	{
		otvet = nb1 * nb2;
	}
	if (znak == '/')
	{
		otvet = nb1 / nb2;
	}
	if (znak == '%')
	{
		otvet = nb1 * nb2 * 0.01;
	}
	std::cout << "Ответ:" << otvet; 
	



















}