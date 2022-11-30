/*Este programa muestra el signo
zodiacal de una persona. Para ello el usuario debe introducir
únicamente el día y el mes de nacimiento y el
programa determinará inmediatamente el signo zodiacal de
la persona.*/
//Nombre:yotan jesus cazares vazquez
//fecha:05-10-2022
//muestra el signo zodiacal

#include <STdio.h>
#include <math.h>
#include <windows.h>

void clrscr()/*Creando funcion para limpiar
pantalla.*/

{

	HANDLE hStdOut =

		GetStdHandle(STD_OUTPUT_HANDLE);

	COORD coord = { 0, 0 };

	DWORD count;

	CONSOLE_SCREEN_BUFFER_INFO csbi;

	GetConsoleScreenBufferInfo(hStdOut,
		&csbi);

	FillConsoleOutputCharacter(hStdOut, ' ', csbi.dwSize.X *
		csbi.dwSize.Y, coord, &count);

	SetConsoleCursorPosition(hStdOut, coord);

}

void main()

{

	int salir, saliryesno;

	salir = 0;

	while (salir == 0) {

		clrscr();/*Llamando la funcion para limpiar
		pantalla.*/

		short unsigned int m, d = 0;

		printf("Introduzca su mes de nacimiento: ");

		scanf("%d", &m, "n");

		while ((m > 12) || (m < 1)) {

			printf("Introduzca su mes de nacimiento(DE 1 A 12): ");

				scanf("%d", &m, "n");

		}

		if (m == 1) {

			printf("Introduzca su dia de nacimiento: ");

			scanf("%d", &d, "n");

			while ((d > 31) || (d != (d))) {//!= esta sentencia es diferente de { printf("Introduzca dia(ENTRE 1 Y 31): ");

				scanf("%d",&d,"n");

				}

					(d <= 20) ? printf("nSu signo es CAPRICORNIO.nn"):printf("nSu signo es ACUARIO.nn");

			}

		else {

			if (m == 2) {

				printf("Introduzca su dia de nacimiento: ");

				scanf("%d", &d, "n");

				while ((d > 29) || (d != (d))) {

					printf("Introduzca dia(ENTRE 1 Y 29): ");

					scanf("%d", &d, "n");

				}

				(d <= 19) ? printf("nSu signo es ACUARIO.nn"):printf("nSu signo es PISCIS.nn");

			}

			else {

				if (m == 3) {

					printf("Introduzca su dia de nacimiento: ");

					scanf("%d", &d, "n");

					while ((d > 31) || (d != (d))) {

						printf("Introduzca dia(ENTRE 1 Y 31): ");

						scanf("%d", &d, "n");

					}

					(d <= 20) ? printf("nSu signo es PISCIS.nn"):printf("nSu signo es ARIES.nn");

				}

				else {

					if (m == 4) {

						printf("Introduzca su dia de nacimiento: ");

						scanf("%d", &d, "n");

						while ((d > 30) || (d != (d))) {

							printf("Introduzca dia(ENTRE 1 Y 31): ");

							scanf("%d", &d, "n");

						}

						(d <= 20) ? printf("nSu signo es ARIES.nn"):printf("nSu signo es TAURO.nn");

					}

					else {

						if (m == 5) {

							printf("Introduzca su dia de nacimiento: ");

							scanf("%d", &d, "n");

							while ((d > 31) || (d != (d))) {

								printf("Introduzca dia(ENTRE 1 Y 31): ");

								scanf("%d", &d, "n");

							}

							(d <= 21) ? printf("nSu signo es TAURO.nn"):printf("nSu signo es GEMINIS.nn");

						}

						else {

							if (m == 6) {

								printf("Introduzca su dia de nacimiento: ");

								scanf("%d", &d, "n");

								while ((d > 30) || (d != (d))) {

									printf("Introduzca dia(ENTRE 1 Y 31): ");

									scanf("%d", &d, "n");

								}

								(d <= 21) ? printf("nSu signo es GEMINIS.nn"):printf("nSu signo es CANCER.nn");

							}

							else {

								if (m == 7) {

									printf("Introduzca su dia de nacimiento: ");

									scanf("%d", &d, "n");

									while ((d > 31) || (d != (d))) {

										printf("Introduzca dia(ENTRE 1 Y 31): ");

										scanf("%d", &d, "n");

									}

									(d <= 23) ? printf("nSu signo es CANCER.nn"):printf("nSu signo es LEO.nn");

								}

								else {

									if (m == 8) {

										printf("Introduzca su dia de nacimiento: ");

										scanf("%d", &d, "n");

										while ((d > 31) || (d != (d))) {

											printf("Introduzca dia(ENTRE 1 Y 31): ");

											scanf("%d", &d, "n");

										}

										(d <= 23) ? printf("nSu signo es LEO.nn"):printf("nSu signo es VIRGO.nn");

									}

									else {

										if (m == 9) {

											printf("Introduzca su dia de nacimiento: ");

											scanf("%d", &d, "n");

											while ((d > 30) || (d != (d))) {

												printf("Introduzca dia(ENTRE 1 Y 31): ");

												scanf("%d", &d, "n");

											}

											(d <= 23) ? printf("nSu signo es LEO.nn"):printf("nSu signo es LIBRA.nn");

										}

										else {

											if (m == 10) {

												printf("Introduzca su dia de nacimiento: ");

												scanf("%d", &d, "n");

												while ((d > 31) || (d != (d))) {

													printf("Introduzca dia(ENTRE 1 Y 31): ");

													scanf("%d", &d, "n");

												}

												(d <= 23) ? printf("nSu signo es LIBRA.nn") :
													printf("nSu signo es ESCORPION.nn");

											}

											else {

												if (m == 11) {

													printf("Introduzca su dia de nacimiento: ");

													scanf("%d", &d, "n");

													while ((d > 30) || (d != (d))) {

														printf("Introduzca dia(ENTRE 1 Y 31): ");

														scanf("%d", &d, "n");

													}

													(d <= 22) ? printf("nSu signo es ESCORPION.nn"):printf("nSu signo es SAGITARIO.nn");

												}

												else {

													if (m == 12) {

														printf("Introduzca su dia de nacimiento: ");

														scanf("%d", &d, "n");

														while ((d > 31) || (d != (d))) {

															printf("Introduzca dia(ENTRE 1 Y 31): ");

															scanf("%d", &d, "n");

														}

														(d <= 21) ? printf("nSu signo es SAGITARIO.nn"):printf("nSu signo es CAPRICORNIO.nn");

													}

												}

											}

										}

									}

								}

							}

						}

					}

				}

			}

		}

		printf("SI DESEA SALIR PRESIONE 1 O DE LO CONTRARIO PRESIONE OTRO NUMERO : ");

			scanf("%d", &saliryesno);

		if (saliryesno == 1) {

			salir = 1;

		}

		}

	}

