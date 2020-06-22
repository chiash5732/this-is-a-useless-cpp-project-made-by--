#include<iostream>

using namespace std;

void swap_two_int_call_by_value(int, int);
void swap_two_int_call_by_reference(int*, int*);

int main()
{
	cout << "現在有兩個int, a和b, 資料如下: " << endl;
	cout << endl;

	int a = 10, b = 15;

	cout << "a的值 = " << a << ", a的記憶體位置 = " << &a << endl;
	cout << "b的值 = " << b << ", b的記憶體位置 = " << &b << endl;
	cout << endl;

	int temp;
	temp = a;
	a = b;
	b = temp;

	cout << "main裡面swap完之後資料如下: " << endl;
	cout << endl;

	cout << "a的值 = " << a << ", a的記憶體位置 = " << &a << endl;
	cout << "b的值 = " << b << ", b的記憶體位置 = " << &b << endl;
	cout << endl;

	temp = a;
	a = b;
	b = temp;

	cout << "復原swap" << endl;
	cout << endl;

	cout << "(call by value)" << endl;
	cout << "現在撰寫一個function來做swap: " << endl;

	cout << "a的值 = " << a << ", a的記憶體位置 = " << &a << endl;
	cout << "b的值 = " << b << ", b的記憶體位置 = " << &b << endl;
	cout << endl;

	swap_two_int_call_by_value(a, b);

	cout << "離開function" << endl;
	cout << endl;

	cout << "a的值 = " << a << ", a的記憶體位置 = " << &a << endl;
	cout << "b的值 = " << b << ", b的記憶體位置 = " << &b << endl;
	cout << endl;

	cout << "(call by reference)" << endl;
	cout << "現在撰寫一個function來做swap: " << endl;

	cout << "a的值 = " << a << ", a的記憶體位置 = " << &a << endl;
	cout << "b的值 = " << b << ", b的記憶體位置 = " << &b << endl;
	cout << endl;

	swap_two_int_call_by_reference(&a, &b);

	cout << "離開function" << endl;
	cout << endl;

	cout << "a的值 = " << a << ", a的記憶體位置 = " << &a << endl;
	cout << "b的值 = " << b << ", b的記憶體位置 = " << &b << endl;
	cout << endl;

	return 0;
}

void swap_two_int_call_by_value(int x, int y)
{
	cout << "function內狀況: " << endl;
	cout << "a的值 = " << x << ", a的記憶體位置 = " << &x << endl;
	cout << "b的值 = " << y << ", b的記憶體位置 = " << &y << endl;
	cout << endl;

	int temp;
	temp = x;
	x = y;
	y = temp;

	cout << "swap完成" << endl;
	cout << endl;

	cout << "a的值 = " << x << ", a的記憶體位置 = " << &x << endl;
	cout << "b的值 = " << y << ", b的記憶體位置 = " << &y << endl;
	cout << endl;
}
void swap_two_int_call_by_reference(int* x, int* y)
{
	cout << "function內狀況: " << endl;
	cout << "a的值 = " << *x << ", a的記憶體位置 = " << x << endl;
	cout << "b的值 = " << *y << ", b的記憶體位置 = " << y << endl;
	cout << endl;

	int temp;
	temp = *x;
	*x = *y;
	*y = temp;

	cout << "swap完成" << endl;
	cout << endl;

	cout << "a的值 = " << *x << ", a的記憶體位置 = " << x << endl;
	cout << "b的值 = " << *y << ", b的記憶體位置 = " << y << endl;
	cout << endl;
}