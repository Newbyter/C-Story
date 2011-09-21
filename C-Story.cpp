#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class Dinosaur {
	private:
		string genus;
		string commonName;
		string guttural;
	public:
		Dinosaur(string, string, string);
		string noise();
};
Dinosaur::Dinosaur (string gen,string com,string gut) {
	genus=gen;
	commonName=com;
	guttural=gut;	
}
string Dinosaur::noise () {return guttural;}

int main()
{
	Dinosaur trikey("Torosaurus","Triceratops","ARUUUUUGA");
	// 2011-9-20 by jianru.lin@gmail.com
	printf("#1(jianru.lin): oh yeah~!\n");
	// your turn
	// ...	

	// 2011-9-20 by Lambdanaut
	// Needs more dinosaurs
	cout << "Trikey: " << trikey.noise() << "\n";

	return 0;
}
