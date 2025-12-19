#include <stdio.h>

void main()
{
#pragma region 조건문
    // 어떤 조건이 주어질 때 해당 조건에 따라 동작을
    // 수행하도록 실행하는 명령문입니다.

#pragma region 관계 연산자
    // 두 개의 피연산자의 값을 비교하여 그 결과를 0 또는
    // 1이라는 값으로 나타내는 연산자입니다.

    // printf("10 < 20  : %d\n", 10 < 20);
    // 
    // printf("10 > 20  : %d\n", 10 > 20);
    // 
    // printf("15 <= 30 : %d\n", 15 <= 30);
    // 
    // printf("25 >= 30 : %d\n", 25 >= 30);
    // 
    // printf("10 != 10 : %d\n", 10 != 10);
    // 
    // printf("10 == 10 : %d\n", 10 == 10);

    // 관계 연산자는 조건이 맞을 때 1이라는 값으로 반환되며,
    // 조건이 틀릴 때 0이라는 값으로 반환됩니다.
#pragma endregion

#pragma region if문
    // 어떤 특정한 조건을 비교하여 조건이 맞다면 실행되는
    // 명령문입니다.

    // int health = 0;
    // 
    // if (health <= 0)
    // {
    //       printf("Destroy");
    // }

    // if문은 조건이 1일 때 실행되며, 0일 때 실행되지 않습니다.
#pragma endregion

#pragma region else if문
    // if문의 조건이 틀릴 때 else if문의 조건이
    // 맞다면 실행되는 명령문입니다.

    //    int level = 99;
    //    
    //    if (level < 11)
    //    {
    //        printf("1 Circles");
    //    }
    //    else if (level >= 99)
    //    {
    //        printf("5 Circles");
    //    }

    // else if문은 여러번 정의할 수 있으며, if문이
    // 존재할 때 사용할 수 있습니다.
#pragma endregion

#pragma region else문
    // if문과 else if문의 조건이 다 틀리면
    // 실행되는 명령문입니다.

    //int integer = 0;
    //
    //if (integer > 0)
    //{
    //     printf("positive");
    //}
    //else if (integer < 0)
    //{
    //     printf("negative");
    //}
    //else
    //{
    //     printf("integer");
    //}

    // if문에 연결된 모든 조건문의 조건이 맞을 때
    // 가장 위에 있는 조건문만 실행됩니다.
#pragma endregion

#pragma region switch문
    // 어떤 결과에 따라 그 결과부터 실행되는 명령문입니다.


   /* char grade = 'K';*/

    // switch문은 해당 조건이 완료되었을 때, break문이 없으면
    // 나머지 밑에 있는 case 문까지 계속 실행시키다가 종료.

 /*   switch (grade)
    {
    case 'A': printf("100~ 90 points\n");

        break;

    case 'B': printf("89 ~ 80 points\n");

        break;

    case 'C': printf("79 ~ 70 points\n");

        break;

    case 'D': printf("69 ~ 60 points\n");

        break;

    case 'F': printf("a score lower then 60 points \n");

        break;

    default : printf("exception \n");

        break;


    }*/

    // switch문의 경우 조건에 해당하는 값에 따라 조건의
    // 위치로 이동한다.




#pragma endregion


#pragma region 논리 연산자

#pragma region And 연산자

     // 두 개의 조건이 다 성립될 때 실행되는 연산자.

    //int score = 75;

    //int attendance = 90; 

    //if (score >= 60 && attendance >= 90)

    //{
    //    printf("Graduate");
    //}

    //// 조건문에서 하나 이상의 조건이 있다면 왼쪽부터 조건을 검사한다.



#pragma endregion

#pragma region OR 연산자

// 두 개의 조건 중에서 하나라도 조건이 성립될 때 실행되는 연산자 


// 내가 적은거 
//int scoreA = 60;
//
//int scoreB = 90;
//
//if (scoreA >= 60 || scoreB <= 90);
//
//{
//
//    printf(" 합격 ");
//}
//
//else
//{
//
//}


//int weight = 70;
//int bodyfat = 30;
//
//if(weight >= 85 || bodyfat > 20)
//{
//    printf("비만");
//}


// 조건문의 논리 표현식을 평가하는 도중에 결과가 이미 확정이 났다면, 그 이후의 평가는 생략한다.




#pragma endregion

#pragma region NOT 연산자

// 하나의 조건을 반전시키는 연산자 

//int power = 0;
//
//if (!power)
//{
//    printf("the power is on");
//}
//else
//{
//    printf("the power is off");
//}


#pragma endregion

#pragma region 사분면

   /* int x = 2;

    int y = 5;

    if (x > 0 && y > 0)
    {

        printf("1 사분면");

    }

    else if (x < 0 && y > 0)
    {

        printf("2 사분면");

    }

    else if (x < 0 && y < 0)

    {

        printf("3 사분면");

    }
    else if (x > 0 && y < 0)

    {

        printf("4 사분면");

    }

    else if (x != 0 && y == 0)

    {

        printf("x 절편");

    }

    else if (x == 0 && y != 0)

    {

        printf("y 절편");

    }

    else
    {

        printf("원점");
    }*/






#pragma endregion



#pragma endregion









#pragma endregion

#pragma region 반복문

    // 프로그램 내에서 특정한 작업을 반복적으로
    // 수행하는 명령문.

#pragma region 증감 연산자
//    // 피연산자를 하나씩 증가시키거나 감소시킬 때
//    // 사용하는 연산자
//
//
//// 전위 증가
//
//int damage = 0;
//
//int damageScore = ++damage;
//
// 
//printf("damageScore : %d\n" , damageScore);
//printf("damage : %d\n" , damage);
//
//// 전위 감소
//
//int heal = 0;
//
//int healScore = --heal;
//
//
//printf("damageScore : %d\n", healScore);
//printf("damage : %d\n", heal);
//
//// 전위 증감 연산자는 변수의 값을 증감시킨 후에
//// 연산을 수행.


//int money = 0;
//
//int coinMoney = money++;
//
//printf("coinMoney : %d\n", coinMoney);
//printf("money : %d\n", money);
//
//
//coinMoney = money--;
//
//printf("coinMoney : %d\n", coinMoney);
//printf("money : %d\n", money);


#pragma endregion



#pragma endregion

#pragma region for문
        // 초기식을 연산하여 조건식의 결과에 따라 특정한
        // 횟수만큼 반복하는 반복문

//for (int i = 0;i < 5; i++)
//{
//  
//    printf("start : \n");
//}

// 반복문이 동작되는 순서는 초기화 → 조건 검사 → 증감의 구조로 동작



#pragma endregion

#pragma region while문
    // 특정 조건을 만족할 때까지 계속해서 주어진 명령문을 실행하는 반복문

//int count = 1;
//
//while (count <= 5)
//{
//    printf("count : %d\n", count);
//
//    count++;
//}
//
//    // 반복문은 순차적으로 실행하면서 조건 분기(Branch)를 만나게 되면, 어느 쪽으로
//    // 실행 흐름이 같지 미리 예측(Branch prediction) 합니다.


#pragma endregion

#pragma region do while문
    // 조건과 상관없이 한 번의 작업을 수행한 다음 조건에 따라 영향문을 실행하는 반복문

//int connect = 0;
//
//do
//{
//    printf("Access");
//
//    while (connect > 10);
//}

#pragma endregion

#pragma region Continue문
// 해당 조건문만 실행하지 않고 반복문은 이어서
// 실행하는 제어문

//int main() {
//    
//    for (int i = 1; i <= 5; i++) 
//    {
//
//        
//        if (i == 3) 
//        {
//            continue;
//        }
//
//        printf("%d", i);
//
//    }
//    }
//
//
//}
#pragma endregion




}