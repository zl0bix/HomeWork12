#include<iostream>


int main() {
	setlocale(LC_ALL, "rus");
	const char magic1 = 'b';
	const char magic2 = 'c';
	const char magic3 = 'd';
	char n;
	int k=0;
	std::cout<<"\n\n\t\t���� �� ������� �++\n\n";
	std::cout << "a. 1 ������" << std::endl;
	std::cout << "b. 2 ������" << std::endl;
	std::cout << "c. 3 ������" << std::endl;
	std::cout << "d. 4 ������" << std::endl;
	std::cout << "������� ��� ����� -> ";
	std::cin >> n;
	if (n == 'b') {
		std::cout << "���������� �����!";

	}
	else {
		while (n == 'b'); {
			std::cout << "������� ��� ����� -> ";
			std::cin >> n;
			if (n == 'b') std::cout << "���������� �����!";
			else k++;
		}
	}
	std::cout  << std::endl;


	std::cout << k << std::endl;















	return 0;
}