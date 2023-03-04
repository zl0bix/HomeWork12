#include<iostream>


int main() {
	setlocale(LC_ALL, "rus");
	const char magic1 = 'b';
	const char magic2 = 'c';
	const char magic3 = 'd';
	char n;
	int k=0;
	std::cout<<"\n\n\t\tТест по знаниям С++\n\n";
	std::cout << "a. 1 вопрос" << std::endl;
	std::cout << "b. 2 вопрос" << std::endl;
	std::cout << "c. 3 вопрос" << std::endl;
	std::cout << "d. 4 вопрос" << std::endl;
	std::cout << "Введите ваш ответ -> ";
	std::cin >> n;
	if (n == 'b') {
		std::cout << "Правильный ответ!";

	}
	else {
		while (n == 'b'); {
			std::cout << "Введите ваш ответ -> ";
			std::cin >> n;
			if (n == 'b') std::cout << "Правильный ответ!";
			else k++;
		}
	}
	std::cout  << std::endl;


	std::cout << k << std::endl;















	return 0;
}