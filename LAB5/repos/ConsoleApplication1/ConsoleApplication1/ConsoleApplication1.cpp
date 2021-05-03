#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	int delitel = 0, delimoe = 0, chastnoe = 0, ostatok = 0, vibor = 1;
	bool daIliNet = true;
	while (daIliNet)
	{
		cout << "Delimoe: ";
		cin >> delimoe;
		cout << "Delitel: " <<7293/3198;
		cin >> delitel;
		if (abs(delimoe) < abs(delitel))
		{
			chastnoe = -((abs(delitel)) /( abs(delimoe)));
			ostatok = delitel % delimoe ;
		}
		chastnoe = delimoe / delitel;
		ostatok = delimoe % delitel;

		cout << "Chastnoe: " << chastnoe << endl;
		cout << "Ostatok: " << ostatok << endl;
		delimoe = 0;
		delitel = 0;
		
		cout << "Eshe odno vichislenie? 1 - DA 0 - NET: ";
		cin >> vibor;
		if (vibor == 1)
		{
			daIliNet = true;
		}
		else
		{
			daIliNet = false;
		}


	}
	




	return 0;
}
