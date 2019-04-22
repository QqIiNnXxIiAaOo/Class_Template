#include<stdio.h>
#include <iostream>
#include "stack_userdefine.h"
using namespace std;
class Test
{
public:
	Test(int x) :m_x(x) {}
private:
	int m_x;
};
int main() {

	MyStack<string> myStack;
	char ch;
	string str;
	cout << "A to push    " << "P to pop    " << "Q to quit" << endl;
	cin >> ch;
	while (toupper(ch) != 'Q')
	{
		switch (ch)
		{
		case 'A':
			cout << "Enter a string to add:";
			cin >> str;
			if (myStack.isfull()) {
				cout << "The Stack is full.\n";
				break;
			}
			else {
				myStack.push(str);
				cout << str << " had a push.\n";
				break;
			}
		case 'P':
			if (myStack.isempty()) {
				cout << "Stack is Empty!" << endl;
				break;
			}
			else {
				myStack.pop(str);
				cout << str << " had a pop." << endl;
				break;
			}
		}
		cout << "A to push  " << "P to pop  " << "Q to quit" << endl;
		cin >> ch;
	}
	cout << "Bye Bye!";

	return 0;
}
#ifndef STACK_QINXIAO_H
#define STACK_QINXIAO_H
#define Stack_MAXSIZE 1
template<class T>
class MyStack
{
public:
	MyStack();
	bool isempty();
	bool isfull();
	bool push(T& x);
	bool pop(T& x);
private:
	T array[Stack_MAXSIZE];
	int top;
};
template<class T>
MyStack<T>::MyStack() {
	top = 0;
}
template<class T>
bool MyStack<T>::isempty() {
	if (top == 0)
		return true;
	else
		return false;
}
template<class T>
bool MyStack<T>::isfull() {
	if (top == Stack_MAXSIZE)
		return true;
	else
		return false;
}
template<class T>
bool MyStack<T>::push(T & x) {
	if (top < Stack_MAXSIZE) {
		array[top++] = x;
		return true;
	}
	else
		return false;
}
template<class T>
bool MyStack<T>::pop(T & x) {
	if (top < 0)
		return false;
	else
	{
		x = array[--top];
		return true;
	}
}
#endif // !1