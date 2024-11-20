//MyLibrary1.h
#ifndef MYLIBRARY1_H
#define MYLIBRARY1_H

using namespace System;
using namespace System::Windows::Forms;

namespace MyLibrary1 {
	public ref class MyFunc
	{
		public:

		static double FuncS(double x);
		static void FuncF(double x, double y, double& f);
		static void FuncSF(double x, double y, double& s, double& f);
		static double Input(TextBox^ t);
		static void Output(double x, TextBox^ t);
	};
}
#endif // MYLIBRARY1_H