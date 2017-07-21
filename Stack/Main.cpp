#include <iostream>
#include "Stack.h";

using namespace std;

Stack s_var1(10);

void f(Stack &s_ref, int i) {
	Stack s_var2(i);
	Stack *s_ptr = new Stack(20);

	s_var1.push('a');
	s_var2.push('b');
	s_ref.push('c');
	s_ptr->push('d');

	cout << s_var1.pop() << endl;
	cout << s_var2.pop() << endl;
	cout << s_ptr->pop() << endl;
}

int main() {
	Stack s_ref(10);
	f(s_ref, 10);
	cout << s_ref.pop() << endl;
	return 0;
}
