#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char * argv[])
{
	if (argc != 4)
	{
		cout << "Too many parameters have been entered, there should be 4.";
		return 1;
	}
	char *pointer1, *pointer2;
	double argument1 = strtod(argv[1], &pointer1);
	double argument2 = strtod(argv[3], &pointer2);
	if ((*pointer1 != 0) || (*pointer2 != 0))
	{
		cout << "One or both operands are not numbers.";
		return 2;
	}
	if (strlen(argv[2]) != 1)
	{
		cout << "The operator is not a single character.";
		return 3;
	}
	if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*' && argv[2][0] != '/')
	{
		cout << "The operator is not '+' or '-' or '/' or '*'.";
		return 4;
	}
	switch (argv[2][0])
	{
	case '+':
		cout << argument1 + argument2;
		break;
	case '-':
		cout << argument1 - argument2;
		break;
	case '/':
		cout << argument1 / argument2;
		break;
	case '*':
		cout << argument1 * argument2;
		break;
	default:
		cout << "Error.";
		return 5;
	}
	return 0;
}