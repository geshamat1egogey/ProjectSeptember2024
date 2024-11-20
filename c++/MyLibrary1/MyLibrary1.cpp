//MyLibrary1.cpp
#pragma once
#include "pch.h"
#include "MyLibrary1.h"


using namespace System;
using namespace System::Windows::Forms;
namespace MyLibrary1
{
	double MyFunc::FuncS(double x)
	{
		return log(fabs(cos(x))) / log(1 + pow(x, 2));
	}

	void MyFunc::FuncF(double x, double y, double& f)
	{
		f = pow((x + 1) / (x - 1), x) + 18 * x * pow(y, 2);
	}

	void MyFunc::FuncSF(double x, double y, double& s, double& f)
	{
		s = log(fabs(cos(x))) / log(1 + pow(x, 2));
		f = pow((x + 1) / (x - 1), x) + 18 * x * pow(y, 2);
	}

	double MyFunc::Input(TextBox^ t)
	{
		return Convert::ToDouble(t->Text);
	}

	void MyFunc::Output(double x, TextBox^ t)
	{
		t->Text = Convert::ToString(x);
	}
}