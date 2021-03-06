/*CIT237 Polynomial
/*Hanfei XU
*/

/*Term is the basic element of polynomial
 * In this case, format is 3x^2 or -4y^7
 */

#ifndef TERM_H
#define TERM_H
#include <iostream>
using namespace std;

template <class T>
class Term{
private:
	char sign;
	T coef;
	char letter;
	int exp;

public:
	Term(){
		char = '+';
		coef = 0;
		letter = '/0';
		exp = 0;
	}

	Term(char, T, int);

};


#endif