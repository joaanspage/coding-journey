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
	std::cout << pokemon.size() << " Pokemon loaded!\n";
        std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<> dist(0, pokemon.size() - 1);

	int randomPokemon = dist(gen);

	std::cout << pokemon[randomPokemon] << " is your Pokemon!\n";

}
