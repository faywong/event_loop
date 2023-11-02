#include <functional>
#include <numeric>
#include <algorithm>
#include <iostream>

int main()
{
	{
		EventLoop eventLoop;
		
		eventLoop.enqueue([]
		{
			std::cout << "message from a different thread\n";
		});
		
		std::cout << "prints before or after the message above\n";
	}
	
	std::cout << "guaranteed to be printed the last\n";
}
