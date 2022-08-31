#include <iostream>
#include <math.h>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "Ukrainian");
	int a;
	cout << "Введiть номер завдання: ";
	cin >> a;
	if(a == 1)
	{
		cout << "Гiпотенуза за двома катетами\n";
		int a, b;
		cin >> a >> b;
		cout << sqrt(pow(a, 2) + pow(b, 2));
	}
	if (a == 2) 
	{
		cout << "Завдання про перше число +1 та друге -1\n";
		int i;
		cin >> i;
		cout << "The next number for the number " << i << " is " << i + 1 << "." << endl;
		cout << "The previous number for the number " << i << " is " << i - 1 << ".";
	}
	if (a == 3)
	{
		cout << "Завдання про подiл яблук\n";
		int x, c;
		cin >> x >> c;
		cout << x / c;
	}
	if (a == 4)
	{
		cout << "Завдання про залишок яблук\n";
		int n, b;
		cin >> n >> b;
		cout << n / b;
	}
	else {
		cout << "Оберiть завдання вiд 1 до 4-го";
	}
	return 0;
}