
#include <stdio.h>

void main() 
{
#pragma region 신술 연산자

	// [실습]
	// 1. 변수 = 변수 + 변수 

	// 2. 변수 = 변수 - 리터럴 상수

	// 3. 변수 = 변수 * 심볼릭 상수

	// 4. 변수 = 리터럴 상수 / 리터럴 상수 

	// 5. 변수 = 심볼릭 상수 % 리터럴 상수 


	//// [작성한 답안]
	//// 1

	//int a1 = 10;
	//int b1 = 21;

	//printf("1번 값은 : %d\n ", a1 + b1);


	//// 2

	//const int a2 = 45;

	//int b2 = 37;

	//printf("2번 값은 : %d\n ", b2 - 45);

	//// 3

	//const int a3 = 50;

	//int b3 = 45;

	//printf("3번 값은 : %d\n ", b3 - a3);

	//// 4

	//const int a4 = 66;

	//const int b4 = 33;

	//printf("4번 값은 : %d\n ", 66 / 33);

	//// 5 

	//const int a5 = 66;

	//const int b5 = 33;

	//printf("5번 값은 : %d\n ", a5 * b5);


	// [강사님 답안]

	//int storage = 0;

	//int x = 10;
	//int y = 5;
	//int z = 1;
	//int w = 10;


	//const int constant = 5;

	//// 1번

	//storage = x + y;

	//printf("storate : %df\n", storage);

	//// 2번

	//storage = z - 1;

	//printf("storate : %df\n", storage);

	////3번
	//
	//storage = w * constant;

	//printf("storate : %df\n", storage);


	////4번

	//storage = 20 / 5;

	//printf("storate : %df\n", storage);

	//// 5번

	//storage = constant % 5;

	//printf("storate : %df\n", storage);











	




#pragma endregion


#pragma region 비트

// 데이터를 나타내는 최소 단위  0 또는 1의
// 조합으로 논리 계산을 수행하는 단위

#pragma endregion

#pragma region (10) 진수를 (2)진수로 변한하는 과정
	// 10진수를 1이 될 때까지 게속 2로 나누어 준 다음 
	// 나눈 위치의 나머지 값을 아래에서 위로 순서대로 정렬한다.

	// 23/2 (2)진수 나오는 값 = > (2) 10111

#pragma endregion

#pragma region (2)진수를 (10)진수로 변환하는 과정

// 1 byte에 2진수로 저장된 값을 2의 제곱으로 나타냅니다.

// 각각의 비트에 1이 있다면 1과 2의 제곱의 위치를 게산한
// 다음 각각의 비트를 모두 더하여 10진수로 나타냅니다.



#pragma endregion







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

#pragma endregion


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

#pragma region 상수

// 프로그램이 실행되는 동안 더 이상 변경할 수 없는
// 메모리 공간

	const float pi = 3.141592f;
	printf("상수의 값 : %f\n", pi);


	// 상수의 경우 메모리 공간을 가지고 있지 않은 상수를
	// 리터럴 상수라고 하며 메모리 공간을 가지고 있는
	// 상수를 심볼릭 상수라고 한다.

	// ex) pi = 6.125f;
	// 상수는 메모리 공간을 생성하는 동시에 초기화해야 하며.
	// 한 번 저장된 값은 더 이상 변경할 수 없습니다.


#pragma endregion



#pragma region 비트 연산자

	// 비트 단위로 논리 연산을 수행하기 위해 사용하는 연산자

	// A & B = AND
	// A | B = OR
	// A ^ B = XOR
	// A ~ B = NOT
#pragma endregion

#pragma region AND 연산자 
	// 두 개의 피연산자가 모두 1이면 1을 반환하는 연산자

	//int wisdom = 10;	// 0000 1010
	//int dexterity = 6;// 0000 0110
	//					// ===========
	//					// 0000 0010

	//printf("wisdom & dexterity : %d\n", wisdom & dexterity);



#pragma endregion

#pragma region OR 연산자
	// 두 개의 피연산자 중에 하나라도 1이 있다면 1을 반환하는 연산자.

	//	int poison = 8;		//	0000 1000
	//	int freeze = 12;	//	0000 1100
	//						//	============
	//						//	0000 1100

	//	printf("poison | freeze : %d\n", poison | freeze);

#pragma endregion

#pragma region XOR 연산자
	// 두 개의 피연산자가 서로 같으면 0을 반환하고 서로 다르면 
	// 1을 반환하는 연산자

	//	int battle = 6;		// 0000 0110
	//	int idle = 15;		//  0000 1111
	//						// ============
	//						// 0000 1001

	//	printf("battle ^ idle : %d\n", battle ^ idle);
			
#pragma endregion

#pragma region NOT 연산자

	// 하나의 비트를 반전시키는 연산자

	//int status = 13; // 0000 1101
	//				// ========
	//				// 1111 0010

	//printf("~status : %d\n", ~status);

	// 첫 번째 비트는 부호를 나타내며, 첫 번째 비트에
	// 이 있다면 값은 음수가 된다.





#pragma endregion


#pragma region 시프트 연산자
	//// 비트를 특정한 위치로 정해진 수만큼 이동시키는 연산자.

	//int packet = 5; // 0000 0101;

	//printf("packet 변수를 왼쪽으로 2칸 이동한 결과 : %d\n", packet << 2);

	//printf("packet 변수를 오른쪽으로 1칸 이동한 결과 : %d\n", packet >> 1);

#pragma endregion


	// 메모리는 비트 단위로 데이터를 저장할 수 있으며. 
	// 1개의 비트에는 0 또는 1의 값만 저장할 수 있다. 






#pragma endregion








}

