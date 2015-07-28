#include <iostream>
#include <cstdlib>
#include "Stack.h"


	
int main()
{
	Stack stack_int;
	std::cout<<"Stack size: "<<stack_int.size()<<std::endl;
	stack_int.push(1);
	stack_int.push(2);
	stack_int.push(3);
	stack_int.push(4);
	stack_int.push(5);
	stack_int.push(6);
	std::cout<<"Stack size: "<<stack_int.size()<<std::endl;
	std::cout<<"Stack: ";
	for (int i =0; i<stack_int.size(); i++)
	{
		std::cout<<stack_int.get_stack_elem(i)<<" ";
	}
	
	return 0;
}
