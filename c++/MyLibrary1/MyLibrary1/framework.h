#pragma once

#define WIN32_LEAN_AND_MEAN             // Исключите редко используемые компоненты из заголовков Windows
// Файлы заголовков Windows
#include <windows.h>

#ifdef MyLibrary_EXPORTS
#define SUMDLL_API __declspec(dllexpert)
#else
#define SUMDLL_API __declspec(dllimport)
#endif

namespace MathOperation
{
	class MyFunc
	{
		public:
			 static SUMDLL_API double FuncS(double x);
			 static SUMDLL_API double FuncF(double x, double y);
	};
}