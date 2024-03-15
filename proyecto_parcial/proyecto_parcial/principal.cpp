#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <Windows.h>
#define TECLA_ARRIBA 72
#define TECLA_ABAJO 80
#define ENTER 13
using namespace std;

//funcion para usar gotoxy()
void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = (SHORT)x - 1;
	coord.Y = (SHORT)y - 1;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

//funciones prototipo
void menu_principal();
int menu(const char* titulo, const char* opciones[], int n);
void menuInicio();
void menuCursos();
void menuPagos();
void menuGestiones();
void menuDire();
void menuPensum();
void menuHorarios();
void menuCalendario();
void menuBiblioteca();

//funcion principal
int main()
{
	menu_principal();
	return 0;
}


//funcion para usar el menu interactivo
int menu(const char *titulo, const char *opciones[], int n)
{
	int opcionSeleccionada = 1;
	int tecla;
	bool repite = true;

	do
	{
		system("cls");
		gotoxy(50, 3 + opcionSeleccionada); cout << "-->";
		//Imprime el titulo
		gotoxy(57, 2); cout << titulo;
		//Imprime las opciones
		for (int i = 0; i < n; i++)
		{
			gotoxy(56, 4 + i); cout << opciones[i];
		}

		do
		{
			tecla = _getch();
		} while (tecla != TECLA_ARRIBA && tecla != TECLA_ABAJO && tecla != ENTER);

		switch (tecla)
		{
		case TECLA_ARRIBA: 
			opcionSeleccionada--;
			if (opcionSeleccionada < 1)
			{
				opcionSeleccionada = n;
			}
			break;
		case TECLA_ABAJO:
			opcionSeleccionada++; 
			if (opcionSeleccionada > n)
			{
				opcionSeleccionada = 1;
			}
			break;
		case ENTER: 
			repite = false;
			break;
		default:

			break;
		}
	} while (repite);
	return opcionSeleccionada;
}

//funcion de menu principal
void menu_principal()
{
	bool repite = true;
	int opcion;

	const char* titulo = "Mi UMG";
	const char* opciones[] = { "Inicio", "Cursos", "Pagos", "Gestiones", "DIRE", "Pensum",  "Horario",  "Calendarios",  "Bibliotecas", "Salir" };
	int n = 10;

	do
	{
		opcion = menu(titulo, opciones, n);

		switch (opcion)
		{
		case 1:
			menuInicio();
			break;
		case 2:
			menuCursos();
			break;
		case 3:
			menuPagos();
			break;
		case 4:
			menuGestiones();
			break;
		case 5:
			menuDire();
			break;
		case 6:
			menuPensum();
			break;
		case 7:
			menuHorarios();
			break;
		case 8:
			menuCalendario();
			break;
		case 9:
			menuBiblioteca();
			break;
		case 10:
			repite = false;
			break;
		}
	} while (repite);
}

void menuInicio()
{
	system("cls");
	gotoxy(55, 1); cout << "Menu Inicio" << endl;
	system("pause");
}
void menuCursos()
{
	system("cls");
	gotoxy(55, 1); cout << "Menu Inicio" << endl;
	system("pause");
}
void menuPagos()
{
	system("cls");
	gotoxy(55, 1); cout << "Menu Pagos" << endl;
	system("pause");
}
void menuGestiones()
{
	system("cls");
	gotoxy(55, 1); cout << "Menu Gestiones" << endl;
	system("pause");
}
void menuDire()
{
	system("cls");
	gotoxy(55, 1); cout << "Menu DIRE" << endl;
	system("pause");
}
void menuPensum()
{
	system("cls");
	gotoxy(55, 1); cout << "Menu Pensum" << endl;
	system("pause");
}
void menuHorarios()
{
	system("cls");
	gotoxy(55, 1); cout << "Menu Horarios" << endl;
	system("pause");
}
void menuCalendario()
{
	system("cls");
	gotoxy(55, 1); cout << "Menu Calendario" << endl;
	system("pause");
}
void menuBiblioteca()
{
	system("cls");
	gotoxy(55, 1); cout << "Menu Biblioteca" << endl;
	gotoxy(55, 2); cout << "Hola Mundo" << endl;
	system("pause");
}