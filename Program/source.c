
#include <stdio.h>

void main()
{
#pragma region 변수

// 데이터를 저장할 수 있는 메모리 공간을 생성하는 것.

#pragma region 자료형
	// 데이터를 저장하기 위해 데이터의 형태를 정해주는 것

	// 자료형은 각각의 자료형마다 크기가 정해져 있으며 자료형의 
	// 크기는 바이트 단위로 이루어져 있다. 자료형의 경유 자료형에
	// 따라 저장할 수 있는 값의 종류와 범위가 결정된다.


#pragma endregion

#pragma region 변수의 이름 규칙

	// 1. 변수의 이름은 대소문자를 구분한다

	// ex)int HEALTH;
	// ex) int health;

// 변수의 이름으로 예약어를 사용할 수 없다

// ex) char char)

// 3. 변수의 이름에는 공백이 포함될 수 없다.
// ex) float time Delta;

// 4. 변수의 이름으로 특수 문자 "_", "$" 만 사용할 수 있다.

	long currency$;
	short under_score;
	
// 5. 변수의 이름은 숫자로 시작할 수 없다.

	//ex) int year2025;
	//ex) int 5day;


#pragma region 서식 지정자

	// 변수의 값을 출력하기 위한 자료형의 정보를 명시적으로
	// 지정해주는 것입니다.

	//// 서식 지정자의 경우 하나의 표준 출력 함수에 여러 개의
	//// 서식을 넣을 수 있으며, 서식 지정자의 순서는 왼쪽에서
	//// 부터 시작이 된다


	//// 서식 지정자는 각각의 서식에 따라 원하는 데이터를 출력
	//// 할 수 있으며, 서식과 변수의 형태가 일치하지 않으면
	//// 원하는 값이 출력되지 않는다.

	//char character = 'A';
	//int atk = 10;
	//int def = 20;
	//int speed = 15;
	//int hp = 500;  

	//float increaseExp = 3.5f;

	//printf("character : %c\n", character); 
	//printf("atk : %d\n", atk);
	//printf("def : %d\n", def);
	//printf("spped : %d\n", speed);
	//printf("hp : %d\n", hp);
	//printf("레벨 당 증가 EXP : %f", increaseExp);

	//h = 7.25f;
	//integer = 25;
	//charA = 'B'

	//	// 변수는 프로그램이 실행되는 동안 값을 바꿀 수 있으며,
	//	// 원래 저장되어 있는 값은 새로 저장되는 값에 의해 지워집니다.

	///*printf("character : %c\n", charA);
	//printf("integer : %d\n", integer);*/

	///*printf("character : %c \natk : %d \n레벨 당 경험치 증가량 : %f", character, atk, increaseExp);*/




#pragma endregion


	






#pragma endregion

	#@#pragma region 상수

		// 프로그램이 실행되는 동안 더 이상 변경할 수 없는
		// 메모리 공간

		const float pi = 3.141592f
		printf("상수의 값 : %\n", pi);


		// 상수의 경우 메모리 공간을 가지고 있지 않은 상수를
		// 리터럴 상수라고 하며 메모리 공간을 가지고 있는
		// 상수를 심볼릭 상수라고 한다.
#pragma endregion




		







#pragma endregion








}

