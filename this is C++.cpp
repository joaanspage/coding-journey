#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <fstream>

int main() {
	std::vector<std::string> pokemon;
	
	std::string name;

	std::ifstream file("pokemon.txt");
	while (std::getline(file, name)) {
		pokemon.push_back(name);
	}
	std::cout << pokemon.size() << "Pokemon loaded!\n";

}

