#include <iostream>
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a = 1; int b = 0; int c = 0;
	while (a != 0) {
		std::cout << "������� ����� ����� ��� ���� ��� ������: ";
		std::cin >> a;
		if (a % 2) {
			b += a;
		}
		if (!(a % 2)) {
			c += a;
		}
	}
	std::cout << "����� ���� ������ = " << c << "\n����� ���� �������� ����� = " << b;



}



