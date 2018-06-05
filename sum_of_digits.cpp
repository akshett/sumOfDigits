#include <iostream>

int sum_of_digits(int n)
{
	if (n/10 == 0)
		return n%10;
	else
		return sum_of_digits(n/10) + n%10;
}

int main()
{
	int input_num;
	std::cout << "Enter an integer: ";
	std:: cin >> input_num;
	int res = sum_of_digits(input_num);
	std::cout << "Sum of digits of " << input_num << " is " << res << '\n';

	return 0;
}
