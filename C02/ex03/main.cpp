#include "Point.hpp"

int	main(void)
{
	Point const a(4.6f, -1.02f);
	Point const	b(6.3f, 4.38f);
	Point const c(12.14f, 2.58f);
	Point const d(5.05f, 1.01f);
	Point const e(2 , 5.05f);
	Point const f(7.78f, 2.38f);
	Point const g(6.3f, 4.38f);

	std::cout << bsp(a, b, c, d) << std::endl;
	std::cout << bsp(a, b, c, e) << std::endl;
	std::cout << bsp(a, b, c, f) << std::endl;
	std::cout << bsp(a, b, c, g) << std::endl;

	return (0);
}
