#include <stdio.h>

int main() {

	/*
		switch문
		 switch문에 입력된 값과 정확하게 매칭되는 case값을 찾아서 코드를 실행
		 switch문 안에 사용하는 값의 형태는 정수, 문자만 가능(실수, 문자열 X)
		 case에 사용되는 값은 상수만 가능(변수 X)

		 switch(값){
		 case 상수값 :
			실행 코드
			break;

		 ....

		 case 상수값 :
			실행 코드
			break;

		default :			// default의 경우 일치하는 case값이 없을 경우에 동작(선택)
			실행코드
		}
	*/

	//int val;
	//printf(" 1~ 3중에 하나 입력 : "); scanf_s("%d", &val);

	//switch (val) {
	//case 1:
	//	printf("1 - one\n");
	//	break;
	//case 2:
	//	printf("2 - two\n");
	//	break;
	//case 3:
	//	printf("3 - three\n");
	//	break;
	//}

	//char lang;
	//printf("C언어 : C, java : J\n선택 -> ");
	//lang = getchar();
	//
	//switch (lang) {
	//case 'C':
	//	puts("C언어 선택\n");
	//	break;
	//case 'J':
	//	puts("java 선택\n");
	//	break;
	//default:
	//	puts("없는 과목입니다\n");
	//}

//}

/*
	enum	: 열거형
			  main 함수 바깥쪽에서 switch문의 case에 상수값 대신에 사용할 이름 지정

	enum <enum 이름> {
		이름1,	// 0
		이름2,  // 1
		이름3,  // 2
	}

	enum <enum 이름> {
		이름1 = 1,		// 1
		이름2,			// 2
		이름3			// 3
	}
*/

//enum SELECT {
//	START = 1,
//	PAUSE,
//	END
//};
//
//int main() {
//	int select;
//	printf("1. 시작\n2. 일시정시\n3. 종료\n>>> ");	scanf_s("%d", &select);
//	puts("");
//
//	switch (select) {
//	case START:
//		puts("시작합니다");
//		break;
//	case PAUSE:
//		puts("잠시 멈춥니다");
//		break;
//	case END:
//		puts("종료합니다");
//		break;
//	}
//}

	//int cal;
	//printf("월 입력 : "); scanf_s("%d", &cal);

	//switch (cal) {
	//case 1:
	//case 3:
	//case 5:
	//case 7:
	//case 8:
	//case 10:
	//case 12:
	//	printf("%d월은 31일까지 있습니다",cal);
	//	break;
	//case 2:
	//	printf("%d월은 28 or 29일까지 있습니다", cal);
	//	break;
	//case 4:
	//case 6:
	//case 9:
	//case 11:
	//	printf("%d월은 30일까지 있습니다", cal);
	//	break;
	//}

	//int money, pay;
	//char c;
	//printf("카드 확인 : "); scanf_s("%c", &c);
	//printf("잔액 확인 : "); scanf_s("%d", &money);
	//

	//	switch (c) {
	//	case 'g':
	//	case 'G':
	//		printf("일반 입니다\n");
	//		if (money >= 1250) {
	//			pay = money - 1250;
	//			printf("%d - 1250 = %d\n", money, pay);
	//			printf("잔액은 %d원 입니다", pay);

	//		}
	//		else {
	//			puts("잔액이 부족합니다");
	//		}
	//		break;
	//	case 's':
	//	case 'S':
	//		printf("학생 입니다\n");
	//		if (money >= 720) {
	//		pay = money - 720;
	//		printf("%d - 720 = %d\n", money, pay);
	//		printf("잔액은 %d원 입니다", pay);
	//		}
	//		else {
	//			puts("잔액이 부족합니다");
	//		}
	//		break;
	//	}

	//	int money = 2000, gPrice = 1250, sPrice = 720;
	//	char sg;
	//	printf("일반 : g\n학생 : s\n");  sg = getchar();
	//	puts("");

	//	if (money >= 1250) {
	//		switch (sg) {
	//		case 'g': case 'G':
	//			money -= gPrice;
	//			printf("일반 요금 %d원이 차감됩니다\n", gPrice);
	//			break;
	//		}
	//		printf("현재 잔액은 %d원 입니다\n", money);
	//	}
	//	else if (money >= 720){
	//		switch (sg) {
	//		case 's': case 'S':
	//			money -= sPrice;
	//			printf("학생 요금 %d원이 차감됩니다\n", sPrice);
	//			break;
	//		}
	//		printf("현재 잔액은 %d원 입니다\n", money);
	//	}
	//	else
	//		puts("잔액이 부족합니다");

	/*
		간단한 계산기 프로그램 코드 작성

	*/
	
	//char su;
	//int x, y, result;

	//printf("사칙연산 선택 및 숫자 두개 입력 : ");
	//scanf("%d %c %d", &x, &su, &y);

	//switch (su) {
	//case '+':
	//	result = x + y;
	//	printf("%d %c %d = %d", x, su, y, result);
	//	break;
	//case '-':
	//	result = x - y;
	//	printf("%d %c %d = %d", x, su, y, result);
	//	break;
	//case '*':
	//	result = x * y;
	//	printf("%d %c %d = %d", x, su, y, result);
	//	break;
	//case '/':
	//	result = x / y;
	//	printf("%d %c %d = %d", x, su, y, result);
	//	break;
	//default:
	//	printf("잘못된 연산자 입니다");
	//	break;
	//}

	//int s1, s2, result;
	//char bu;
	//printf("연산자 입력 : ");	bu = getchar();
	//printf("숫자 두 개 입력 : ");	scanf_s("%d %d", &s1, &s2);
	//puts("");

	//switch (bu)	{
	//case '+':	result = s1 + s2; break;
	//case '-':	result = s1 - s2; break;
	//case '*':	result = s1 * s2; break;
	//case '/':	result = s1 / s2; break;
	//default:	puts("잘못된 연산자 입니다");	break;
	//}

	//if (bu == '+' || bu == '-' || bu == '*' || bu == '/')
	//	printf("%d %c %d = %d\n", s1, bu, s2, result);

	int s1, s2, s3, sum;
	double avg;

	printf("점수 세 개 입력 : ");	scanf_s("%d %d %d", &s1, &s2, &s3);
	sum = s1 + s2 + s3;
	avg = (double)sum / 3;
	int avg_i = avg / 10;

	switch (avg_i) {
	case 10: case 9:
		printf("A학점 입니다");
		break;
	case 8:
		printf("B학점 입니다");
		break;
	case 7:
		printf("C학점 입니다");
		break;
	case 6:
		printf("D학점 입니다");
		break;
	default:	printf("F학점 입니다");
		break;
	}
}
