#include <iostream>
#include "Stack.h"

int main()
{
    Stack<int> s;
	s.push(2);
	s.push(12);
	s.push(17);

	cout << "izbacili smo broj:" << s.pop()<< endl;
    std::cout << "string je prazan = " << s.isEmpty() << std::endl;
    s.print();
}
