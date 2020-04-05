/*
 * COST CALCULATOR
 */

#include <iostream>
#include <vector>

int main() {
	std::vector <int> vector1;
	std::vector <int> vector2;
	std::vector < std::vector <int> > vector_2d;

	vector1.push_back(10);
	vector1.push_back(20);
	std::cout << "The first element of vector1 is " << vector1.at(0) << std::endl;
	std::cout << "The second element of vector1 is " << vector1.at(1) << std::endl;
	std::cout << "The size if vector1 is " << vector1.size() << std::endl;

	vector2.push_back(100);
	vector2.push_back(200);
	std::cout << "The first element of vector2 is " << vector2.at(0) << std::endl;
	std::cout << "The second element of vector2 is " << vector2.at(1) << std::endl;
	std::cout << "The size of vector2 is " << vector2.size() << std::endl;

	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);
	std::cout << "The second element of the first element of vector_2d is " << vector_2d.at(0).at(1) << std::endl;

	vector1.at(1) = 1000;
	std::cout << "The second element of vector1 is " << vector1.at(1) << std::endl;
	std::cout << "The second element of the first element of vector_2d is " << vector_2d.at(0).at(1) << std::endl;
	std::cout << "The second element of the second element of vector_2d is " << vector_2d.at(1).at(1) << std::endl;


	return 0;
}
