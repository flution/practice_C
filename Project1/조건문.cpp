#include <stdio.h>

int main() {
    /*int a = 0;
    printf("������ �Է��ϼ��� : ");
    scanf_s("%d", &a);

    if (a > 0)
    {
        printf("a�� %d���� Ů�ϴ�.", a);
    }
    if (a <= 0)
    {
        printf("a�� %d���� �۰ų� �����ϴ�.", a);
    }

    return 0;
}*/

    //swtich-case��

    /*int shortcut = 0;
    
    printf("����Ű�� �Է��ϼ��� : ");
    scanf_s("%d", &shortcut);

    switch (shortcut)
    {
    case 1: 
        printf("���� : 010-xxxx-xxxxx\n");
        break;
    case 2:
        printf("�ƺ� : 010-xxxx-xxxxx\n");
        break;
    case 3:
        printf("ģ�� : 010-xxxx-xxxxx\n");
        break;
    default:
        printf("�ش� ����Ű�� �����ϴ�.\n");
        break;
    }*/

	int season = 0;

	printf("������ �� �� �ΰ��� : ");
	scanf_s("%d", &season);

	switch (season)
	{
	case 1:
	case 2:
		printf("%d���� �ܿ��Դϴ�.\n");
		break;
	case 3:
	case 4:
	case 5:
		printf("%d���� ���Դϴ�.\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("%d���� �����Դϴ�.\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("%d���� �����Դϴ�.\n");
		break;
	case 12:
		printf("%d���� �ܿ��Դϴ�.\n");
		break;
	default:
		printf("�׷� ���ڴ� �޷¿� �����.");
		break;
	}
}