#include<iostream>
using namespace std;
#define offset "\t\t\t\t\t\t"
#define ELOCHKA
void main()
{
	setlocale(LC_ALL, "russian");
#if defined ELOCHKA 
	cout << offset << "В лесу родилась елочка\n";
	cout << offset << "В лесу она росла,\n";
	cout << offset << "Зимой и летом стройная,\n";
	cout << offset << "зеленая была.\n";
	cout << endl;
	cout << offset << "Метель ей пела песенку:\n";
	cout << offset << "Спи, елочка, бай-бай!\n";
	cout << offset << "Мороз снежком укутывал:\n";
	cout << offset << "Смотри, не замерзай!\n";
	cout << endl;
	cout << offset << "Трусишка зайка серенький\n";
	cout << offset << "Под ёлочкой скакал.\n";
	cout << offset << "Порою волк, сердитый волк,\n";
	cout << offset << "Рысцою пробегал.\n";
	cout << endl;
	cout << offset << "Чу! Снег по лесу частому\n";
	cout << offset << "Под полозом скрипит.\n";
	cout << offset << "Лошадка мохноногая\n";
	cout << offset << "Торопится, бежит.\n";
	cout << endl;
	cout << offset << "Везет лошадка дровеньки,\n";
	cout << offset << "На дровнях мужичёк.\n";
	cout << offset << "Срубил он нашу ёлочку\n";
	cout << offset << "Под самый корешок.\n";
	cout << endl;
	cout << offset << "Теперь она нарядная,\n";
	cout << offset << "На праздник к нам пришла.\n";
	cout << offset << "И много-много радости\n";
	cout << offset << "Детишкам принесла.\n";
	cout << endl;
#endif
}