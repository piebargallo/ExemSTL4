// CPP program to illustrate pair in STL

#include <iostream>
#include <string>
#include <utility>

using namespace std;

// Driver code
int main() {
	
	// Def pair
	pair<string, int> g1;
	
	// Ini pair with make_pair, first and second values
	g1 = make_pair(string("Hello C++"), 1);
	
	// Print of content pair
	cout << "This is pair g" << g1.second << " with "
		<< "value " << g1.first << "." << endl
		<< endl;

	return 0;

} // End driver
