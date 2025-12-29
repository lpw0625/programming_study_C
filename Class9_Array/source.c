#include <stdio.h>


//void reset(char grade, int level, float experience)
//{
//	printf("Grade : %c\n", grade);
//	printf("Level : %d\n", level);
//	printf("Experience %f\n", experience);
//
//}
//
//void coordinate(int x, int y)
//{
//	printf("x : %d  / y  : %d\n", x, y);
//}
//
//void initalize()
//{
//
//	printf("나는 바보다");
//
//}




void swap(int argumentX, int argumentY)
{

	int temp = argumentY;

	argumentY = argumentX;

	argumentX = temp;

	printf("argux 값  %d\n :", argumentX);
	printf("arguy 값  %d\n :", argumentY);

} 




void main()
{
	/*int x = 10;

	int y = 20;

	int temp = y;

	y = x;

	x = temp;*/

	swap(10, 20);

	/*coordinate(10, 20);
	reset('A', 1, 21.5);*/
		


	
#pragma region 함수
	// 하나의 특별한 목적의 작업을 수행하기 위해
	// 독립적으로 설계된 코드의 집합

	/*initalize();*/


#pragma endregion


#pragma region 매개변수

	// 함수의 정의에서 전달받은 인수를 함수 내부로
	// 전달하기 위해 사용하는 변수

	// 매개 변수는 함수 내부에서만 연산이 이루어지며 
	// 함수가 종료되면 메모리에서 해제

	// 하나의 함수에 서로 다른 자료형의 매개 변수를 함께 
	// 정의할 수 있으며 여러 개의 매개 변수를 생성할 수 있다.
#pragma endregion

#pragma region 인수
	// 함수가 호출될 때 매개 변수에 실제로 전달되는 값

	// 인수의 경우 함수에 있는 매개 변수에 따라 전달할 수 있는
	// 인수의 수가 결정되며 값을 전달하는 인수와 값을 전달 받는
	// 매개 변수의 자료형이 서로 일치해야한다.
#pragma endregion


}