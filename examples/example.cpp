#include <codecvt>
#include <iostream>

#include "Stack1.hpp"

int main() {
	Stack<int> Example;
	char c;
	cout << "Add an element: +element\nShow the last element: ?\nPop the last element: -\nShow the stack: =\nExit: q\n\n";
	while (cin >> c && c != 'q')
	{
		int i;
		switch (c)
		{
		case '+':
		{
			cin >> i;
			Example.push(i);
			break;
		}
		case '-':
			Example.pop();
			break;
		case '=':
			Example.print();
			break;
		case '?':
			cout<< Example.last()<<endl;
			break;
		}
	}
	system("pause");
	return 0;
}
