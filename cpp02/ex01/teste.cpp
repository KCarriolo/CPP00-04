#include <iostream>
#include <cmath>

int	main(void)
{
	int	n = 2;
	int	k = 8;
	float f = 42.42f;
	float h;
	int ret;

	int	r = n;

	for (int i = 0; i < (k - 1); i++){
		r *= n;
	}
	h = f * r;
	h = roundf(h);
	std::cout << h << std::endl;;
	return (0);
}
