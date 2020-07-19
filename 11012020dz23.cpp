/*

** Пользователь 	вводит ширину, длину и глубину бассейна.Посчитать:
-максимальный объем воды, который может поместиться в бассейн
- площадь водной поверхности
- сколько плитки размером 20 на 25см понадобится для того, чтобы выложить дно бассейна.
*/
#include <iostream>
#include <Windows.h>;
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	int shur, dlin, glyb, obem, pl_poverhn, plitk_na_1_m, kol_plitk;
	cout << "Введите ширину бассейна(м.): ";
	cin >> shur;
	cout << "Введите длину бассейна(м.): ";
	cin >> dlin;
	cout << "Введите глубину бассейна(м.): ";
	cin >> glyb;
	obem = shur * dlin * glyb;
	pl_poverhn = 2 * (shur * dlin + dlin * glyb + shur * glyb);
	plitk_na_1_m = (0.2 * 0.25) * 100;
	kol_plitk = pl_poverhn / plitk_na_1_m;
	cout << "- максимальный объем воды, который может поместиться в бассейн: " << obem << " ;\n" << "- площадь водной поверхности: " << pl_poverhn << " ;\n" << "- плитки размером 20 на 25см для того, чтобы выложить дно бассейна: " << kol_plitk << " шт." << endl;
	return 0;
}


