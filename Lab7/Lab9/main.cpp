#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <windows.h>

typedef struct {
	
	char author[15], genre[15];
	int pages;
	struct {
		unsigned char rus[18], eng[22];
	} name;
} books;
void main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	books arr[5];

	printf("Введите значения в массив. Значения ввоvдятся через пробел, например:\nИностранка ForeignWoman С.Д.Довлатов Повесть 155\n\n");
	for (int i = 0; i < 5; i++)
		scanf("%s %s %s %s %u", arr[i].name.rus, arr[i].name.eng, arr[i].author, &arr[i].genre, &arr[i].pages);

	printf("--------------------------------------------------------------------------------------\n");
	printf("|            Название            |               |          |                        |\n");
	printf("|--------------------------------|     Автор     |   Жанр   |   Количество страниц   |\n");
	printf("|  На русском  |  На английском  |               |          |                        |\n");
	printf("--------------------------------------------------------------------------------------\n");

	for (int i = 0; i < 5; i++)
		printf("| %-12s | %-15s | %-13s | %-8s | %-22u |\n", arr[i].name.rus, arr[i].name.eng, arr[i].author, arr[i].genre, arr[i].pages);

	printf("--------------------------------------------------------------------------------------\n");

	books temp = arr[4];
	arr1[4] = arr[0];
	arr[0] = temp;

	printf("--------------------------------------------------------------------------------------\n");
	printf("|            Название            |               |          |                        |\n");
	printf("|--------------------------------|     Автор     |   Жанр   |   Количество страниц   |\n");
	printf("|  На русском  |  На английском  |               |          |                        |\n");
	printf("--------------------------------------------------------------------------------------\n");

	for (int i = 0; i < 5; i++)
		printf("| %-12s | %-15s | %-13s | %-8s | %-22u |\n", arr[i].name.rus, arr[i].name.eng, arr[i].author, arr[i].genre, arr[i].pages);

	printf("--------------------------------------------------------------------------------------\n");
	_getch();
}