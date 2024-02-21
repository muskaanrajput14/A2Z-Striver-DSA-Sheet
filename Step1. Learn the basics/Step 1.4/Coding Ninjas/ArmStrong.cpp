// score - 80/80
#include <cmath>

bool checkArmstrong(int n) {
    int sum = 0, original = n;
    int numDigits = log10(n) + 1; // Calculate the number of digits in the original number

    while (n > 0) {
        int lastDigit = n % 10;
        sum = sum + pow(lastDigit, numDigits); // Raise each digit to the power of the number of digits
        n = n / 10;
    }

    return sum == original; // Check if the sum of the powered digits is equal to the original number
}
/*
For example:
- For (n = 153), (log_{10}(153)=2.184 (approximately).
- Adding 1 to 2.184 gives us 3.184.
- Taking the floor of 3.184 gives us 3, which is the number of digits in 153

*/


//  score was - 52/80
// some test cases were not
#include<math.h>
bool checkArmstrong(int n){
	//Write your code here
	int sum=0, lastDigit, orginal=n;
	while(n>0)
	{
		lastDigit = n%10;
		// sum = sum + (lastDigit*lastDigit*lastDigit);
		sum = sum + pow(lastDigit, 3);
		n=n/10;
	}
	return sum==orginal;
}
