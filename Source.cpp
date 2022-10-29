#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "russian");
	//int i = 1;
	//do {
	//	cout << i << " ";
	//	i = i + 1;
	//} while (i <= 10);
	//№1
	//int x;
	//int k = 0;
	//int sum = 0;
	//do {
	//	cin >> x;
	//	k = k + 1;
	//	sum = sum + x;
	//} while (x != 0);
	//double sr = (double)sum / k;
	//cout << "сумма = " << sum << endl;
	//cout << "С А = " << sr << endl;
	//cout << "колл-во " << k - 1 << endl;
	//int a, b, i, sum = 0;
	//cin >> a;
	//cin >> b;
	//i = a;
	//do {
	//	if (i % 2 != 0) {
	//		sum = sum + i;
	//	}
	//	i = i + 1;
	//} while (i <= b);
	//cout << sum << endl;
	//int i, h;
	//cout << "введите высоту = ";
	//cin >> h;
	//i = 1;
	//do {
	//	for (int j = 1; j <= h - i; j++) 
	//		cout << " ";
	//	for (int j = 1; j <= 2 * i - 1; j ++)
	//		cout << "^";
	//	cout << endl;
	//	i++;
	//} while (i <= h);
	//17. В ЭВМ вводятся по очереди данные о росте N учащихся класса. Определить средний рост учащихся класса.
//	int n, i;
//	double x, sr;
//	cout << "введите колл-во учеников = ";
//	cin >> n;
//	i = 1;
//	do {
//		cout << "введите рост ", i, "ученика = ";
//		cin >> x;
//		sr = sr + x;
//		i = i + 1;
//	} while (i <= n);
//	sr = sr / n;
//	cout << "средний рост = " << sr << endl;
//}
	//29. с помощью оператора while напишите программу вывода всех четных чисел в диапазоне от 2 до 100 включительно.
	//int i;
	//do {
	//	i = i + 2;
	//	cout << i << endl;
	//} while (i < 100);
	//30. С помощью оператора while напишите программу определения суммы всех нечетных чисел в диапазоне от 1 до 99 включительно.
	//int i = 1, sum = 0;
	//do {
	//	if (i % 2 != 0) {
	//		i = i + 2;
	//		sum = sum + i;
	//	}
	//} while (i <= 99);
	//cout << sum << endl;
	//18. Задано натуральное число N. Найти количество натуральных чисел, не превосходящих N и не делящихся ни на одно из чисел 2,3,5.
//	int n, i = 0;
//	cout << "Введите число  = ";
//	cin >> n;
//	int count = 0;
//	do {
//		if (i % 2 == 0 and i % 3 == 0 and i % 5 == 0) {
//			count++;
//			i = i + 1;
//		}
//	} while (i < n);
//#include <iostream>
//	using namespace std;
//	int main() {
//		setlocale(LC_ALL, "russian");
		//int i = 1;
		//do {
		//	cout << i << " ";
		//	i = i + 1;
		//} while (i <= 10);
		//№1
		//int x;
		//int k = 0;
		//int sum = 0;
		//do {
		//	cin >> x;
		//	k = k + 1;
		//	sum = sum + x;
		//} while (x != 0);
		//double sr = (double)sum / k;
		//cout << "сумма = " << sum << endl;
		//cout << "С А = " << sr << endl;
		//cout << "колл-во " << k - 1 << endl;
		//int a, b, i, sum = 0;
		//cin >> a;
		//cin >> b;
		//i = a;
		//do {
		//	if (i % 2 != 0) {
		//		sum = sum + i;
		//	}
		//	i = i + 1;
		//} while (i <= b);
		//cout << sum << endl;
		//int i, h;
		//cout << "введите высоту = ";
		//cin >> h;
		//i = 1;
		//do {
		//	for (int j = 1; j <= h - i; j++) 
		//		cout << " ";
		//	for (int j = 1; j <= 2 * i - 1; j ++)
		//		cout << "^";
		//	cout << endl;
		//	i++;
		//} while (i <= h);
		//17. В ЭВМ вводятся по очереди данные о росте N учащихся класса. Определить средний рост учащихся класса.
	//	int n, i;
	//	double x, sr;
	//	cout << "введите колл-во учеников = ";
	//	cin >> n;
	//	i = 1;
	//	do {
	//		cout << "введите рост ", i, "ученика = ";
	//		cin >> x;
	//		sr = sr + x;
	//		i = i + 1;
	//	} while (i <= n);
	//	sr = sr / n;
	//	cout << "средний рост = " << sr << endl;
	//}
		//29. с помощью оператора while напишите программу вывода всех четных чисел в диапазоне от 2 до 100 включительно.
		//int i;
		//do {
		//	i = i + 2;
		//	cout << i << endl;
		//} while (i < 100);
		//30. С помощью оператора while напишите программу определения суммы всех нечетных чисел в диапазоне от 1 до 99 включительно.
		//int i = 1, sum = 0;
		//do {
		//	if (i % 2 != 0) {
		//		i = i + 2;
		//		sum = sum + i;
		//	}
		//} while (i <= 99);
		//cout << sum << endl;
		//18. Задано натуральное число N. Найти количество натуральных чисел, не превосходящих N и не делящихся ни на одно из чисел 2,3,5.
		//int n;
		//cout << "введите число = ";
		//cin >> n;
		//int i = 0;
		//int count = 0;
		//do{
		//	if (i % 2 == 0 and i % 3 == 0 and i % 5 == 0) {
		//		count++;
		//	}
		//	i = i + 1;
		//} while (i <= n);
		//cout << count << endl;
//22. дано натуральное n. вычислить: 1 + 1/2 + 1/3 + 1/4 + ... + 1/n.
//int n, i = 1;
//double s = 0;
//double st = 1;
//cout << "введите n = ";
//cin >> n;
//do {
//	i = i + 1;
//	for (int j = 1; j <= i; j++) st * 1;
//	s += double(1) / st;
//} while (i <= n);
//cout << s << endl;
}