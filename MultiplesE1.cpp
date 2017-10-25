#include <stdio.h>
#include <iostream>

int main(int argc, char **argv)
{
	//this problem wants the sum of multiples of 3 or 5 below 1000
	//repeating cycles of 15 of the form (3+15n + 5+15n + 6+15n + 9+15n + 10+15n + 12+15n + 15+15n) 0 to 1000/15 = 66 2/3
	//aka 60 + (15*7)n
	// = 60*66 + sum 1 to 65 105n (one less because n starts at 0)
	//can use triangle number formulae n(n+1)/2 = 105*33*67
	double bigSum = 60*66 + 105*33*65;
	//now need to account for the last 2/3 - This is from 990 to 1000, also know this is start of a new cycle so easy to just add numbers directly
	double finalResult = bigSum + 993 + 995 + 996 + 999;
	std::cout << finalResult;
	return 0;
}


