// pch.cpp: файл исходного кода, соответствующий предварительно скомпилированному заголовочному файлу

#include "pch.h"
#include <cmath>

// При использовании предварительно скомпил	ированных заголовочных файлов необходим следующий файл исходного кода для выполнения сборки.

namespace MathOperation
{
	double MyFunc::FuncS(double x)
	{
		return log(fabs(cos(x))) / log(1 + pow(x, 2));
	}

	double MyFunc::FuncF(double x, double y)
	{
		return pow((x + 1) / (x - 1), x) + 18 * x * pow(y, 2);
	}
}