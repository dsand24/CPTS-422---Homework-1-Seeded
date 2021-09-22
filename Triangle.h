#pragma once
#include <iostream>
#include <limits>

using namespace std;


enum class Result {
	Scalene, Isosceles, Equilateral, NotATriangle, Error
};




class Triangle
{
private:
	int a;	// side of triangle 1
	int b;	// side of triangle 2
	int c;	// side of triangle 3
	string triangle_type; // triangle type
	Result result;

public:
	Triangle() {
		a = 0;
		b = 0;
		c = 0;
	}
	Triangle(int _a, int _b, int _c) {
		a = _a;
		b = _b;
		c = _c;

		if (!testTriangleSides()) {
			setResult(Result::Error);
			setTriangleType("error");
		}
		else {
			determineTriangleType();
		}
	}

	int getUserInput() {
		bool valid = false;
		int input = -1;

		while (!valid) {
			std::cin >> input;
			if (std::cin.good()) {
				return input;
			}
			else {
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "The input must be an integer. Enter a new value: ";
			}
		}

		return input;
	}

	void setA(int input) {
		a = input;
	}
	void setB(int input) {
		b = input;
	}
	void setC(int input) {
		c = input;
	}

	void setTriangleType(string input) {
		triangle_type = input;
	}
	string getTriangleType() {
		return triangle_type;
	}
	void printTriangleType() {
		cout << triangle_type << endl;
	}

	void setResult(Result input) {
		result = input;
	}
	Result getResult() {
		return result;
	}

	bool testVariable(int input) {
		if (input > 200) {
			return false;
		}
		if (input < 1) {
			return false;
		}

		return true;
	}

	void setTriangleSides() {
		int userInput;

		std::cout << "Length of side a: ";
		userInput = getUserInput();
		setA(userInput);

		std::cout << "Length of side b: ";
		userInput = getUserInput();
		setB(userInput);

		std::cout << "Length of side c: ";
		userInput = getUserInput();
		setC(userInput);
	}

	bool testTriangleSides() {
		if (!testVariable(a)) {
			std::cout << "Value of 'a' is not in the range of permitted values (1 <= a <= 200)" << endl;
			return false;
		}
		if (!testVariable(b)) {
			std::cout << "Value of 'b' is not in the range of permitted values (1 <= b <= 200)" << endl;
			return false;
		}
		if (!testVariable(c)) {
			std::cout << "Value of 'c' is not in the range of permitted values (1 <= c <= 200)" << endl;
			return false;
		}

		return true;
	}

	void determineTriangleType() {
		//---Variables to store string output---//
		string iso = "Isosceles";
		string equ = "Equilateral";
		string sca = "Scalene";
		string nat = "Not a triangle";
		//--------------------------------------//




		int match = 0;	// variable to track how many sides are equivalent

		if (a == b) {
			match = match + 1;
		}
		if (a == c) {
			match = match + 1;			// here is seeded defect #1       ///////////////////////////////////////////////////////////////////////
		}
		if (b == c) {
			match = match + 1;			// here is seeded defect #2      ///////////////////////////////////////////////////////////////////////
		}

		// start checking
		if (match == 0) {
			if (a + b <= c) {
				// not a triangle
				setResult(Result::NotATriangle);
				setTriangleType(nat);
				//cout << "Not a triangle" << endl;
			}
			else {
				if (a + c <= b) {
					// not a triangle
					setResult(Result::NotATriangle);
					setTriangleType(nat);
					//cout << "Not a triangle" << endl;
				}
				else {
					if (b + c <= a) {
						// not a triangle
						setResult(Result::NotATriangle);
						setTriangleType(nat);
						//cout << "Not a triangle" << endl;
					}
					else {
						// ahh the scalene triangle
						setResult(Result::Scalene);
						setTriangleType(sca);
						//cout << "Scalene" << endl;
					}
				}
			}
		}
		else {
			if (match == 1) {
				if (a + b > c) {			// here is seeded defect #3    ///////////////////////////////////////////////////////////////////////
					// not a triangle
					setResult(Result::NotATriangle);
					setTriangleType(nat);
					//cout << "Not a triangle" << endl;
				}
				else {
					// isosceles
					setResult(Result::Isosceles);
					setTriangleType(iso);
					//cout << "isosceles" << endl;
				}
			}
			else if (match == 2) {
				if (a + c > b) {			// here is seeded defect #4     ///////////////////////////////////////////////////////////////////////
					// not a triangle
					setResult(Result::NotATriangle);
					setTriangleType(nat);
					//cout << "Not a triangle" << endl;
				}
				else {
					// isosceles
					setResult(Result::Isosceles);
					setTriangleType(iso);
					//cout << "isosceles" << endl;
				}
			}
			else if (match == 3) {
				if (b + c > a) {			// here is seeded defect #5    ///////////////////////////////////////////////////////////////////////
					// not a triangle
					setResult(Result::NotATriangle);
					setTriangleType(nat);
					//cout << "Not a triangle" << endl;
				}
				else {
					// isosceles
					setResult(Result::Isosceles);
					setTriangleType(iso);
					//cout << "isosceles" << endl;
				}
			}
			else {
				// equilateral
				setResult(Result::Equilateral);
				setTriangleType(equ);
				//cout << "Equilateral" << endl;
			}
		}
	}
};