#include <iostream>

int main()
{
	const int x{ 10 };

	const int& ref{ x };
	// 상수를 참조

	int& const ref{ x };
	// 이것은 안된다.
	// reference type 자체가 이미 다른 변수를 참조할 수 없다.
	// 라는 규칙이 있다

	// 상수 포인터가 참조가 안된다는 규칙을 갖고있으므로 
	// 규칙이 중복이 된다.
	// 그러므로 위와 같은 형태는 불가능하다.
}