#include <iostream>


int ToInt(char symbol) {
	switch (symbol)
	{
	case 'I': return 1;
	case 'V': return 5;
	case 'X': return 10;
	case 'L': return 50;
	case 'C': return 100;
	case 'D': return 500;
	case 'M': return 1000;
	default:
		return 0;
	}
}


int ToInt(const string& s) {
	int retvet = 0, numBeth = 0;
	for (auto pc = s.rbegin(); pc != s.rend(); ++pc) {
		const int symbolInInt = ToInt(*pc);
		retvet += symbolInInt < numBeth ? - symbolInInt : symbolInInt;
		/*std::cout << retvel << endl;*/
		numBeth = symbolInInt;
	}
	return retvet;
}


void DZ_4_6() {
	string number;
	std::cout << "input number" << endl;
	std::cin >> number;
	std::cout << "\n" << ToInt(number) << endl;
}
