#include<iostream>

void gg(int num1, int num2) {
	std::cout << num1 + num2 << std::endl;
}
int gg1(int num1, int num2) {
	return num1 + num2;
}
void func(int arr[], const int length) {
	arr[0] *= 2;
	arr[1] /= 2;
}
int max_arr(int arr[], const int length) {
	int max = arr[0];
	for (int i = 1; i < length; i++)
		max = arr[i] > max ? arr[i] : max;
	return max;
}

int main() {
	setlocale(LC_ALL, "rus");

	int num = gg1(10, 5);
	std::cout << num << std::endl;

	int arr[2]{ 5, 6 };
	func(arr, 2);
	std::cout << arr[0] << std::endl;
	std::cout << arr[1] << std::endl;

	int x = max_arr(arr, 2);

	// Homework 12
	/*const char magic1 = 'b';
	const char magic2 = 'c';
	const char magic3 = 'd';
	
	char n;
	int k = 0;
	std::cout<<"\n\n\t\tТест по знаниям С++\n\n";
	std::cout << "a. 1 вопрос" << std::endl;
	std::cout << "b. 2 вопрос" << std::endl;
	std::cout << "c. 3 вопрос" << std::endl;
	std::cout << "d. 4 вопрос" << std::endl;
	do {
		std::cout << "Введите ваш ответ -> ";
		std::cin >> n;
		k++;
	} while (n != magic1);
	
	std::cout << "Правильный ответ!";
	
	std::cout  << std::endl;


	std::cout << k << std::endl;
	*/

	return 0;
}