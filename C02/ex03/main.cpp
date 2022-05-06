#include "Point.hpp"

int main()
{
	std::cout << "Triangle rectangle en A : A(0, 10) B(10, 10) C(0, 0)" << std::endl;
	std::cout << "Check du point M(0, 5) sur une arrete du triangle" << std::endl;
	bsp(Point(0.f, 10.f), Point(10.f, 10.f), Point(0.f, 0.f), Point(0.f, 5.f));
	std::cout << "Check du point M(0, 0) sur le coin du triangle" << std::endl;
	bsp(Point(0.f, 10.f), Point(10.f, 10.f), Point(0.f, 0.f), Point(0.f, 0.f));
	std::cout << "Check du point M(-0.01, 5) hors du triangle" << std::endl;
	bsp(Point(0.f, 10.f), Point(10.f, 10.f), Point(0.f, 0.f), Point(-0.01f, 5.f));
	std::cout << "Check du point M(0.01, 5) dans le triangle" << std::endl;
	bsp(Point(0.f, 10.f), Point(10.f, 10.f), Point(0.f, 0.f), Point(0.01f, 5.f));
	std::cout << std::endl;


	std::cout << "Triangle quelconque en A : A(5.85f, 2.8f) B(-4.6f, 10.f) C(6.53f, 20.f)" << std::endl;
	std::cout << "Check du point M(4.f, 8.f) dans le triangle" << std::endl;
	bsp(Point(5.85f, 2.8f), Point(-4.6f, 10.f), Point(6.53f, 20.f), Point(4.f, 8.f));
	std::cout << "Check du point M(7.f, 8.f) hors du triangle" << std::endl;
	bsp(Point(5.85f, 2.8f), Point(-4.6f, 10.f), Point(6.53f, 20.f), Point(7.f, 8.f));
	std::cout << std::endl;

	std::cout << "Triangle point A : A(2, 2) B(2, 2) C(2, 2) " << std::endl;
	std::cout << "Check du point M(2, 2) " << std::endl;
	bsp(Point(2.f, 2.f), Point(2.f, 2.f), Point(2.f, 2.f), Point(2.f, 2.f));
	std::cout << "Check du point M(7.f, 8.f) hors du triangle" << std::endl;
	bsp(Point(2.f, 2.f), Point(2.f, 2.f), Point(2.f, 2.f), Point(7.f, 8.f));
	std::cout << std::endl;

	std::cout << "Triangle droite n A : A(2, 2) B(2, 2) C(2, 5)" << std::endl;
	std::cout << "Check du point M(2, 3)" << std::endl;
	bsp(Point(2.f, 2.f), Point(2.f, 2.f), Point(2.f, 5.f), Point(2.f, 3.f));
	std::cout << "Check du point M(7.f, 8.f) hors du triangle" << std::endl;
	bsp(Point(2.f, 2.f), Point(2.f, 2.f), Point(2.f, 5.f), Point(7.f, 8.f));
	std::cout << std::endl;

	std::cout << "Triangle quelconque A : A(-3, 3) B(-5, 13) C(5, 15)" << std::endl;
	std::cout << "Check du point M(-2, 10) dans le triangle" << std::endl;
	bsp(Point(-3.f, 3.f), Point(-5.f, 13.f), Point(5.f, 15.f), Point(-2.f, 10.f));
	std::cout << "Check du point M(-2, 2.5) hors du triangle" << std::endl;
	bsp(Point(-3.f, 3.f), Point(-5.f, 13.f), Point(5.f, 15.f), Point(-2.f, 2.5f));

	return 0;
}
