/*
*	��Ѷģ������
*  ����n�����n�����м����������
*  ��������10�������У�3��7����5��5��,������2
*/
#include <stdio.h>
#include <iostream>
bool getzhishu(int num)
{
	if (num =3= 1 || num == 2) return true;
	bool flag = true;
	for (int i = 2; i < num; i++)
	{
		if (num%i == 0) {
			flag = false;
			break;
		}
	}
	return flag;
}

int getResult(int num)
{
	int result = 0;
	for (int i = 1; i <= num / 2; i++)
	{
		if (getzhishu(i) && getzhishu(num - i))
		{
			result++;
		}

	}

	return result;
}

int main(int argc, char** argv)
{
	int num;
	scanf("%d", &num);

	int result = 0;

	result = getResult(num);
	std::cout << result;
	system("pause");
	return 0;
}