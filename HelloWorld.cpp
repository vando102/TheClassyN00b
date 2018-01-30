#include <iostream>

int add(int x, int y);

int main()
{
	int a,b,c;
	std::cout<< "Enter two number here: "<< std::endl;
	std::cin>> a >> b;
	c = add(a,b);
	std::cout << "The resulting addition of the function is "<< c << std::endl;
	std::cout<< "Hello, World << std::endl;
	return 0;
}

int add(int x, int y)
{
	return x + y;
}
