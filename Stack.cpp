#include "Stack.h"

Stack::Stack(){
	std::vector<int> _stack(0);
}
Stack::Stack(int stack_len){
	std::vector<int> _stack(stack_len);
}

int Stack::get_stack_elem(int ind){
	return _stack[ind];
}
inline bool Stack::empty(){
	return _stack.empty();
}

inline bool Stack::full(){

	return _stack.size() == _stack.max_size();
}

bool Stack::pop(int& elem){
	if(empty()){ return false;}
	elem = _stack.back();
	_stack.pop_back();
	return true;
}

bool Stack::push(const int& elem){
	if(full()){	return false;}
	_stack.push_back(elem);
	return true;
}

bool Stack::peek(int& elem){
	if (empty()){return false;	}
	elem = _stack.back();
	return true;
}

bool Stack::find(const int& elem){
	bool isFind = false;
	
	int len =_stack.size();
	for (int i=0; i < len; i++)
	{
		if (_stack[i]==elem)
		{
			isFind =true;
		} 
	}
	
		return isFind;
	
}

int Stack::count(const int& elem){
	int num = 0;
	int len = _stack.size();
	for (int i=0; i < len; i++)
	{
		if (_stack[i]==elem)
		{
			num++;
		} 
	}
	return num;
}