#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");
	int choice, type, size, length;
	char texture;

	cout << "Программа - \"Геометрические формы\"\n\n";
	cout << "Линия\n";
	cout << "Квадрат\n";
	cout << "Прямоугольник\n";
	cout << "Выберите фигуру\n";
	cin >> choice;

	if (choice == 1) {
		system("cls");
		cout << "\n\n[ + ] Фигура: \"Линия\"\n\n";
		cout << "Горизонтальная\n";
		cout << "Вертикальная\n";
		cout << "Выберите тип: ";
		cin >> type;

		cout << "\n Длина: ";
		cin >> length;

		cout << "Текстура: ";
		cin >> texture;

		cout << 
	}
