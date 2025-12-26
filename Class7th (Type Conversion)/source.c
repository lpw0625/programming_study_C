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

	/*int storage = 10;
	int* pointer = &storage;

	printf("storage의 주소 : %p\n", storage);
	printf("pointer의 주소 값 : %p\n", pointer);

	*pointer = 99;
	printf("storage의 값 : %d\n", storage);
	printf("pointer의 주소 값 : %d\n", *pointer);*/

	


	// 포인터가 가리키는 메모리 공간의 자료형은 알 수 없으므로
	// 포인터가 가리키는 메모리의 자료형을 선언해줘야 한다.



		
#pragma endregion

#pragma region 포인터 상수
	// 포인터 변수가 가리ㅣ고 잇는 주소 값을 변경할 수 
	// 없는 포인터 .

	/*int abc = 30;
	int def = 50;

	int * const orq = &def;

	*orq = 99;

	printf("변수의 값은 : ", *orq);
	printf("변수의 값은 : ", abc);*/

#pragma endregion

#pragma region 허상 포인터 
	// 이미 해제된 메모리 영역을 가리키는 포인터.

	/*pointer = pointer + 1;

	*pointer = 22;

	printf("pointer 변수의 값 : %p\n", pointer)*/


// 배열의 연속적인 메모리 공간을 가지며, 배열의 이름은 
// 배열의 시작 주소를 가리킵니다.
#pragma endregion

#pragma region 문자열
	
//	const char * character = "h";
//
//	printf("character 가 출력하는 값은? %s  ", character);
//
//	char message[] = "message";
//	message[1] = 'a';
//
//	printf("message가 가리키는 문자열은 ? %s", message);
//
//	character = "exercise";
//
//	printf("character가 가리키는 문자열은 ? %s", character);
//
//
//	character = "show\0er";
//
//
//
//printf("character가 가리키는 문자열은 ? %s\n", character);
//
//	//문자열의 경우 서로 연속적인 메모리 공간으로 연결되어 잇찌만
//	// 문자 배열 사이에 무혀의 문자를 넣게 되면 무혀의 문자까지만 출력
//
//	// 문자열의 경우 포인터를 이용하여 문자열 상수를 가리키도록
//	// 할 수 있으며 문자열 상수는 데이터 영역의 읽기 전용 공간에 
//	// 저장 되기 때문에 문자열의 값을 변경할 수 없습니다.
//	
//	// 문자열은 공백도 함께 메모리 공간에 포함하여 크기가 결정되며,
//	// 마지막에 문자열의 끝을 알려주는 제어 문자가 추가.
#pragma endregion

#pragma region (2)차원 배열


// 배열의 요소로 또 다른 배열을 가지는 배열

// 2차원 배열은 행과 열로 구분되며, 앞에 있는 배열은 
// 열을 의미하고 뒤에 있는 배열은 행을 의미한다.

//int array2D[3][3] =
//{
//	{1,2,3},
//	{4,5,6},
//	{7,8,9},
//};
//
//for (int i = 0; i < 3; i++)
//{
//	for (int j = 0; j < 3; j++)
//	{
//		printf("%d", array2D[i][j]);
//	}
//
//	printf("\n");
//}
#pragma endregion

#pragma region 아스키 코드

// 미국 구립 표준 협회에서 표준화한 정보 교환용
// 7 bit 부호 체계

char alphabet = 'A';

for (int i = 0; i < 26; i++)
{
	printf("알파벳 : %c\n", 65 + i);
}
#pragma endregion


}