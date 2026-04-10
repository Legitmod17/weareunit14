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

		cout << "\n\n[+] Результат: \n\n";
		if (type == 1) {

			for (int i = 0; i < length; i++) {
				cout << " " << texture << " ";
			}
			cout << "\n";
		}
		else if (type == 2) {

			for (int i = 0; i < length; i++) {
				cout << " " << texture << "\n";
			}
		}
	}
	else if (choice == 2) {
		system("cls");
		cout << "\n\n[+] Фигура: \"Квадрат\"\n\n";
		cout << "[ + ] Заполненный\n";
		cout << "[ + ] Пустой\n\n";
		cout << "[ + ] Выберите тип: ";
		cin >> type;

		cout << "\n[+] Размер:";
		cin >> size;
		cout << "[ + ] Текстура: ";
		cin >> texture;

		cout << "\n\n[+] Результат: \n\n";


		if (type == 1) {
			for (int i = 0; i < size; i++) {
				for (int j = 0; j < size; j++) {
					cout << texture << " ";
				}
				cout << "\n";
			}
		}
	}
