#include <vector>
#include <iostream>

 
class Stack{
public:
	Stack();
	Stack(int stack_len);
	int get_stack_elem(int ind);
	bool push(const int& elem);
	bool pop(int& elem);
	bool peek(int& elem);

	bool empty();
	bool full();
	
	bool find(const int& elem);
	int count(const int& elem);

	inline int size(){return _stack.size();}

private:
	std::vector<int> _stack;
	

};