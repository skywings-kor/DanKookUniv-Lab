//#include <stdio.h>
//#include<stdlib.h>
//#include <string.h>
//#include <time.h>
//#pragma warning (disable:4996)
//
//int main()
//{
//	int a=0, b;
//	char str[200];		//���� �������� ���� ����
//	char* tripkey,*driverecord,*chade,*cardef,*carnum,*company,*driverCode,*daydrive,*totaldrive,*carspeed,*carengine,*carbreak,*positionX,*positionY,*GIS,*acclerateX,*accelerateY,*signalCode,*areaCode,*inforDate;
//	float sumDayDrive=0;
//	float sumCarSpeed=0;
//	float sumCarBreak = 0;
//
//	int count = 0;
//	FILE* fp;
//
//	fp = fopen("DTG-r-00000", "rb");
//
//	
//	
//	while (!feof(fp))
//	{
//		fgets(str, sizeof(str), fp);	
//		tripkey =strtok(str, " |\n");		//Ʈ�� Ű
//		driverecord =strtok(NULL, " |\n");		//��������ġ
//		chade =strtok(NULL, " |\n");		//�����ȣ		
//		cardef =strtok(NULL, " |\n");		//�ڵ��� ����
//		carnum = strtok(NULL, " |\n");		//�ڵ��� ��Ϲ�ȣ �泲70��...
//		company = strtok(NULL, " |\n");		//��ۻ���� ��Ϲ�ȣ
//		driverCode = strtok(NULL, " |\n");		//������ �ڵ�
//		daydrive = strtok(NULL, " |\n");		//���� ����Ÿ�
//		totaldrive = strtok(NULL, " |\n");		//���� ����Ÿ�
//		carspeed = strtok(NULL, " |\n");		//�����ӵ�
//		carengine = strtok(NULL, " |\n");		//�д� ����ȸ�� ��
//		carbreak = strtok(NULL, " |\n");		//�극��ũ ��ȣ
//		positionX = strtok(NULL, " |\n");		//���� ��ġX
//		positionY = strtok(NULL, " |\n");		//���� ��ġY
//		GIS = strtok(NULL, " |\n");		//GIS ������
//		acclerateX = strtok(NULL, " |\n");		// ���ӵ� VX	
//		accelerateY = strtok(NULL, " |\n");		// ���ӵ� VY
//		signalCode = strtok(NULL, " |\n");		//��Ż����ڵ�
//		areaCode = strtok(NULL, " |\n");		//���������ڵ�
//		inforDate = strtok(NULL, " |\n");		//�����߻��Ͻ�
//
//		a = a + 1;
//		if (strcmp(carnum, "1016") == 0)
//		{
//			sumDayDrive = atoi(daydrive)+sumDayDrive;
//			sumCarBreak = atoi(carbreak) + sumCarBreak;
//
//			
//			count = count + 1;
//
//			
//			printf("�м���.. %d\n", a);
//		}
//
//		else
//		{
//			printf("�м���.. %d\n", a);
//		}
//
//	}
//
//	printf("���� ��� ����Ÿ�: %.2f km\n\n" , sumDayDrive / count);
//	printf("���� ��� �극��ũ ���� Ƚ��: %.2f ȸ",sumCarBreak/ count);
//	
//}