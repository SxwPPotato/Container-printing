#include <iostream>
#include <vector>
#include <set>
#include <list>

template<class T> 
void print_container(T cont) {
	auto it = cont.begin();

	while (it != cont.end()) {
		std::cout << *it << " ";
		it++;
	}
}

int main()
{
	std::set<std::string> test_set = { "one", "two", "three", "four" };
	print_container<std::set<std::string>>(test_set);

	std::cout << "\n";

	std::list<std::string> test_list = { "one", "two", "three", "four" };
	print_container<std::list<std::string>>(test_list);

	std::cout << "\n";

	std::vector<std::string> test_vector = { "one", "two", "three", "four" };	
	print_container<std::vector<std::string>>(test_vector);
	return 0;

}