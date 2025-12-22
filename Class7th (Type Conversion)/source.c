#include <stdio.h>

void main()
{
#pragma region 변수연산자 

// 변수의 주소 값을 반환하는 연산자

	/*int data = 10;

		printf("데이터 변수의 주소 : %p", &data);*/

	// 데이터의 주소는 해당 데이터가 저장된 메모리의 시작 주소를
	// 의미하며, 메모리의 공간은 1 byte의 크기로 나누어 표현된다.



#pragma endregion

#pragma region scanf_s 함수

		//// 여러 종류의 데이터를 다양한 서식에 맞추어
		//// 출력하는 함수

		//int x = 0;

		//printf("x 변수의 값을 입력 : ");

		//scanf_s("%d", &x);

		//printf("x의 값 : %d\n", x);

		//// 표준 입력 함수는 입력을 수행할 때까지 다음 작업으로
		//// 넘어갈 수 없다.

		//// 버퍼는 데이터가 이동할 때 임시로 저장되는 공간
		//// 서식 지정자에 따라 입력할 수 있는 데이터의 범위도 결정된다.

		//// 표준 입력 함수로 데이터를 입력하게 되면 버퍼에 데이터를 보관
		//// 하였다가 입력하는 순간 버퍼 안의 내용을 프로그램에 전송



#pragma endregion

#pragma region 포인터

	// 메모리의 주소 값을 저장할 수 있는 변수

	int storage = 10;
	int* pointer = &storage;

	printf("storage의 주소 : %p\n", storage);
	printf("pointer의 주소 값 : %p\n", pointer);

	*pointer = 99;
	printf("storage의 값 : %d\n", storage);
	printf("pointer의 주소 값 : %d\n", *pointer);

	


	// 포인터가 가리키는 메모리 공간의 자료형은 알 수 없으므로
	// 포인터가 가리키는 메모리의 자료형을 선언해줘야 한다.



		
#pragma endregion





}