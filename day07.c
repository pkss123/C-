#include <stdio.h>

int main() {

	/*
		switch��
		 switch���� �Էµ� ���� ��Ȯ�ϰ� ��Ī�Ǵ� case���� ã�Ƽ� �ڵ带 ����
		 switch�� �ȿ� ����ϴ� ���� ���´� ����, ���ڸ� ����(�Ǽ�, ���ڿ� X)
		 case�� ���Ǵ� ���� ����� ����(���� X)

		 switch(��){
		 case ����� :
			���� �ڵ�
			break;

		 ....

		 case ����� :
			���� �ڵ�
			break;

		default :			// default�� ��� ��ġ�ϴ� case���� ���� ��쿡 ����(����)
			�����ڵ�
		}
	*/

	//int val;
	//printf(" 1~ 3�߿� �ϳ� �Է� : "); scanf_s("%d", &val);

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
	//printf("C��� : C, java : J\n���� -> ");
	//lang = getchar();
	//
	//switch (lang) {
	//case 'C':
	//	puts("C��� ����\n");
	//	break;
	//case 'J':
	//	puts("java ����\n");
	//	break;
	//default:
	//	puts("���� �����Դϴ�\n");
	//}

//}

/*
	enum	: ������
			  main �Լ� �ٱ��ʿ��� switch���� case�� ����� ��ſ� ����� �̸� ����

	enum <enum �̸�> {
		�̸�1,	// 0
		�̸�2,  // 1
		�̸�3,  // 2
	}

	enum <enum �̸�> {
		�̸�1 = 1,		// 1
		�̸�2,			// 2
		�̸�3			// 3
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
//	printf("1. ����\n2. �Ͻ�����\n3. ����\n>>> ");	scanf_s("%d", &select);
//	puts("");
//
//	switch (select) {
//	case START:
//		puts("�����մϴ�");
//		break;
//	case PAUSE:
//		puts("��� ����ϴ�");
//		break;
//	case END:
//		puts("�����մϴ�");
//		break;
//	}
//}

	//int cal;
	//printf("�� �Է� : "); scanf_s("%d", &cal);

	//switch (cal) {
	//case 1:
	//case 3:
	//case 5:
	//case 7:
	//case 8:
	//case 10:
	//case 12:
	//	printf("%d���� 31�ϱ��� �ֽ��ϴ�",cal);
	//	break;
	//case 2:
	//	printf("%d���� 28 or 29�ϱ��� �ֽ��ϴ�", cal);
	//	break;
	//case 4:
	//case 6:
	//case 9:
	//case 11:
	//	printf("%d���� 30�ϱ��� �ֽ��ϴ�", cal);
	//	break;
	//}

	//int money, pay;
	//char c;
	//printf("ī�� Ȯ�� : "); scanf_s("%c", &c);
	//printf("�ܾ� Ȯ�� : "); scanf_s("%d", &money);
	//

	//	switch (c) {
	//	case 'g':
	//	case 'G':
	//		printf("�Ϲ� �Դϴ�\n");
	//		if (money >= 1250) {
	//			pay = money - 1250;
	//			printf("%d - 1250 = %d\n", money, pay);
	//			printf("�ܾ��� %d�� �Դϴ�", pay);

	//		}
	//		else {
	//			puts("�ܾ��� �����մϴ�");
	//		}
	//		break;
	//	case 's':
	//	case 'S':
	//		printf("�л� �Դϴ�\n");
	//		if (money >= 720) {
	//		pay = money - 720;
	//		printf("%d - 720 = %d\n", money, pay);
	//		printf("�ܾ��� %d�� �Դϴ�", pay);
	//		}
	//		else {
	//			puts("�ܾ��� �����մϴ�");
	//		}
	//		break;
	//	}

	//	int money = 2000, gPrice = 1250, sPrice = 720;
	//	char sg;
	//	printf("�Ϲ� : g\n�л� : s\n");  sg = getchar();
	//	puts("");

	//	if (money >= 1250) {
	//		switch (sg) {
	//		case 'g': case 'G':
	//			money -= gPrice;
	//			printf("�Ϲ� ��� %d���� �����˴ϴ�\n", gPrice);
	//			break;
	//		}
	//		printf("���� �ܾ��� %d�� �Դϴ�\n", money);
	//	}
	//	else if (money >= 720){
	//		switch (sg) {
	//		case 's': case 'S':
	//			money -= sPrice;
	//			printf("�л� ��� %d���� �����˴ϴ�\n", sPrice);
	//			break;
	//		}
	//		printf("���� �ܾ��� %d�� �Դϴ�\n", money);
	//	}
	//	else
	//		puts("�ܾ��� �����մϴ�");

	/*
		������ ���� ���α׷� �ڵ� �ۼ�

	*/
	
	//char su;
	//int x, y, result;

	//printf("��Ģ���� ���� �� ���� �ΰ� �Է� : ");
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
	//	printf("�߸��� ������ �Դϴ�");
	//	break;
	//}

	//int s1, s2, result;
	//char bu;
	//printf("������ �Է� : ");	bu = getchar();
	//printf("���� �� �� �Է� : ");	scanf_s("%d %d", &s1, &s2);
	//puts("");

	//switch (bu)	{
	//case '+':	result = s1 + s2; break;
	//case '-':	result = s1 - s2; break;
	//case '*':	result = s1 * s2; break;
	//case '/':	result = s1 / s2; break;
	//default:	puts("�߸��� ������ �Դϴ�");	break;
	//}

	//if (bu == '+' || bu == '-' || bu == '*' || bu == '/')
	//	printf("%d %c %d = %d\n", s1, bu, s2, result);

	int s1, s2, s3, sum;
	double avg;

	printf("���� �� �� �Է� : ");	scanf_s("%d %d %d", &s1, &s2, &s3);
	sum = s1 + s2 + s3;
	avg = (double)sum / 3;
	int avg_i = avg / 10;

	switch (avg_i) {
	case 10: case 9:
		printf("A���� �Դϴ�");
		break;
	case 8:
		printf("B���� �Դϴ�");
		break;
	case 7:
		printf("C���� �Դϴ�");
		break;
	case 6:
		printf("D���� �Դϴ�");
		break;
	default:	printf("F���� �Դϴ�");
		break;
	}
}
