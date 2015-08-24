#include <map>

int main()
{
	std::map<int, int> m;
	m.emplace(0, 1); // travis CI's current libstdc++ can not do this
	return 0;
}

