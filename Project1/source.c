#include <stdio.h>

#define SIZE 5

void main()
{
#pragma region 자료형 변환
	// 서로 다른 자료형을 가지고 있는 변수끼리 연산이
	// 이루어질 때 기존에 지정했던 자료형을 다른 자료형
	// 으로 변환하는 과정.

#pragma region 암묵적 형 변환
	// 서로 다른 자료형으로 연산이 이루어질 때 자료형의
	// 크기가 더 큰 자료형으로 변환되는 과정 


	//int a = 10;

	//float b = 12.5f;

	//printf("두 변수의 합은? %f\n :", a + b);

	//// 표현 범위가 작은 데이터에 표현 범위가 큰 데이터를
	//// 저장하게 되면 암묵적으로 데이터 손실이 발생

#pragma region 명시적 자료형 변환

	//int atk = 10;

	//int monsterAtk = 3;


	//float result = (float)atk / monsterAtk;

	//printf("두 변수의 차감은? %f\n", result);

	//// 정수형 변수끼리 연산을 수행하게 되면 정수의 결과
	//// 값만 가질 수 있다.
#pragma endregion



	
#pragma endregion



#pragma endregion

#pragma region 단축 평가 계산
	// 평가 계산을 진행하는 도중에 결과가 미리 확정된 경우
	// 나머지 계산을 생략하는 과정.
	/*int gold = 0;

	int coin = 0;

	if (gold != 0 && coin++)
	{
		print("short circuit");
	}

	if (gold != 0 || coin++)
		{
		printf("y의 값은 : %d\n", coin);
		}*/
#pragma endregion


#pragma region 메크로
	//// 프로그램 내에서 특정한 데이터가 문자열로 정의되고
	//// 처리되는 과정

	//printf("메크로 SIZE의 값 : %d\n", SIZE);

	//// 매크로의 경우 자료형이 존재하지 않으므로 메모리 공간을
	//// 가지고 있지 않는다.

	//// ex ) SIZE = 100;

	//// 매크로의 과정은 컴파일 이전에 실행되며, 각 메크로가 실행될 때
	//// 매크로의 대체 목록을 넣어야 하므로 프로그램의 크기가 커지게 된다.

#pragma endregion







}