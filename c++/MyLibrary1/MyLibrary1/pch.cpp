// pch.cpp: файл исходного кода, соответствующий предварительно скомпилированному заголовочному файлу

#include "pch.h"
#include <cmath>

// При использовании предварительно скомпилированных заголовочных файлов необходим следующий файл исходного кода для выполнения сборки.

namespace MathOperation
{
	double MyFunc::FuncS(double x)
	{
		return log(fabs(cos(x))) / log(1 + pow(x, 2));
	}

	void MyFunc::FuncF(double x, double y, double& f)
	{
		f = pow((x + 1) / (x - 1), x) + 18 * x * pow(y, 2);
	}

	void MyFunc::FuncSF(double x, double y, double &s, double& f)
	{
		s = log(fabs(cos(x))) / log(1 + pow(x, 2));
		f = pow((x + 1) / (x - 1), x) + 18 * x * pow(y, 2);
	}
}