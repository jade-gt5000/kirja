#include <iostream>
 using namespace std;
 bool sanldjas = true;
string namestart;
int vsegoBooks;
int n = 0;
struct Books
{
string name;
string author;
double cena = 0;
int kolvo = 0;
};
Books* boks1 = new Books[100000];
int main()
{
	setlocale(LC_ALL, "");
	cout << "-> Вас приветствует программа для подсчёта информации о книгах.\n"
		<< "-> Порядок ввода данных : Название, Имя, Цена, Количество.\n"
		<< "-> Для перехода к итогам ввода:"
		<< "\n> 1) Завершить цикл порядка ввода;"
		<< "\n> 2) Нажать Enter." << endl;
	cout << "->Задать название книги : ";
	cin >> boks1[n].name;
	while (sanldjas == true) {
		printf("> Задать автора книги: ");
		cin >> boks1[n].author;
		printf("> Указать цену за штуку (в Руб.): ");
		cin >> boks1[n].cena;
		printf("> Внести количество книг: ");
		cin >> boks1[n].kolvo;
		vsegoBooks += boks1[n].kolvo;
		n++;
		printf("->Задать название книги : ");
		cin >> namestart;
		if (namestart != "no") boks1[n].name = namestart;
		else sanldjas = false;
	}
	n++;
	for (size_t i = 0; i < n; i++)
	{
		cout << "Names = " << boks1[i].name << "\n";
		cout << "Author = " << boks1[i].author <<  "\n";
		cout <<"Cost = "<<  boks1[i].cena << "\n";
		cout << "Nubmer of this books = "<< boks1[i].kolvo << "\n";
		printf("\n");
	}
	cout << "nubmer of all books = " << vsegoBooks << "\n";
	
	system("pause");
	delete[] boks1;
	return 0;
}  