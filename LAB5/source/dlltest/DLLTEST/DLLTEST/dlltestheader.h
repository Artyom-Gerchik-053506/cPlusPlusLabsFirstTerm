#pragma once


//Вы можете экспортировать данные, функции, классы или функции-члены из библиотеки
//DLL с помощью __declspec(dllexport) ключевого слова.

__declspec(dllexport) double formula(double* a, int len);

