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