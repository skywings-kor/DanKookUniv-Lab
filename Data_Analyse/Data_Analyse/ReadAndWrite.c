#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include <time.h>
#pragma warning (disable:4996)





int main()

{

	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;

	char strline[300];
	

	char str[300];		//���� �������� ���� ����

	char* tripkey, * driverecord, * chade, * cardef, * carnum, * company, * driverCode, * daydrive, * totaldrive, * carspeed, * carengine, * carbreak, * positionX, * positionY, * GIS, * acclerateX, * accelerateY, * signalCode, * areaCode, * inforDate,* temptemp;

	int nowDate = 0;

	int nowTemp = 0;

	int nowYear = 0;

	int nowMonth = 0;

	int nowDay = 0;

	int beforeDate = 0;



	int count = 0;



	char strtemp[50] = "";
	char strtemp2[50] = "";

		

	char fl[100] = "D:\SMU\CheonanBus(DankookUniv)\Data_Day\BusData200101.txt";



	FILE* fpread, * fpwrite;


	//���ϸ� �ٲٴ� ��ġ
	fpread = fopen("DTG8", "rb");	



	//if ((fpread = fopen("DTG-r-00000", "w")) == NULL)

	//{

	//	printf("file open error\n");

	//	exit(0);

	//}





	while (!feof(fpread))

	{

		fgets(str, sizeof(str), fpread);

		if (str == NULL)
		{

			printf("\n\n%d��°���� error �߻�\n\n", count);

			printf("�ý����� �����մϴ�..");

			exit(0);





		}

		strcpy(strline, str);

		tripkey = strtok(str, " |\n");		//Ʈ�� Ű

		driverecord = strtok(NULL, " |\n");		//��������ġ



		//if (strcmp(driverecord, "ECO DTG-1000") == 0)

		if (strstr(driverecord, "ECODTG") != NULL)		//ECO�� ������ �ش� �ڵ� ����
		{
			chade = strtok(NULL, " |\n");		//�����ȣ		

			cardef = strtok(NULL, " |\n");		//�ڵ��� ����

			carnum = strtok(NULL, " |\n");		//�ڵ��� ��Ϲ�ȣ �泲70��...

			company = strtok(NULL, " |\n");		//��ۻ���� ��Ϲ�ȣ

			driverCode = strtok(NULL, " |\n");		//������ �ڵ�

			daydrive = strtok(NULL, " |\n");		//���� ����Ÿ�

			totaldrive = strtok(NULL, " |\n");		//���� ����Ÿ�

			carspeed = strtok(NULL, " |\n");		//�����ӵ�

			carengine = strtok(NULL, " |\n");		//�д� ����ȸ�� ��

			carbreak = strtok(NULL, " |\n");		//�극��ũ ��ȣ

			positionX = strtok(NULL, " |\n");		//���� ��ġX

			positionY = strtok(NULL, " |\n");		//���� ��ġY

			GIS = strtok(NULL, " |\n");		//GIS ������

			acclerateX = strtok(NULL, " |\n");		// ���ӵ� VX	

			accelerateY = strtok(NULL, " |\n");		// ���ӵ� VY

			signalCode = strtok(NULL, " |\n");		//��Ż����ڵ�

			areaCode = strtok(NULL, " |\n");		//���������ڵ�

			inforDate = strtok(NULL, " |\n");		//�����߻��Ͻ�

		}


		else if (strstr(driverecord, "ECO") != NULL)		//ECO�� ������ �ش� �ڵ� ����
		{
			chade = strtok(NULL, " |\n");		//�����ȣ		

			cardef = strtok(NULL, " |\n");		//�ڵ��� ����

			carnum = strtok(NULL, " |\n");		//�ڵ��� ��Ϲ�ȣ �泲70��...

			company = strtok(NULL, " |\n");		//��ۻ���� ��Ϲ�ȣ

			driverCode = strtok(NULL, " |\n");		//������ �ڵ�

			daydrive = strtok(NULL, " |\n");		//���� ����Ÿ�

			totaldrive = strtok(NULL, " |\n");		//���� ����Ÿ�

			carspeed = strtok(NULL, " |\n");		//�����ӵ�

			carengine = strtok(NULL, " |\n");		//�д� ����ȸ�� ��

			carbreak = strtok(NULL, " |\n");		//�극��ũ ��ȣ

			positionX = strtok(NULL, " |\n");		//���� ��ġX

			positionY = strtok(NULL, " |\n");		//���� ��ġY

			GIS = strtok(NULL, " |\n");		//GIS ������

			acclerateX = strtok(NULL, " |\n");		// ���ӵ� VX	

			accelerateY = strtok(NULL, " |\n");		// ���ӵ� VY

			signalCode = strtok(NULL, " |\n");		//��Ż����ڵ�

			areaCode = strtok(NULL, " |\n");		//���������ڵ�

			temptemp = strtok(NULL, " |\n");		//�ӽù���

			inforDate = strtok(NULL, " |\n");		//�����߻��Ͻ�

		}



		else	//������ �ش� �ڵ� ����

		{



			chade = strtok(NULL, " |\n");		//�����ȣ		

			cardef = strtok(NULL, " |\n");		//�ڵ��� ����

			carnum = strtok(NULL, " |\n");		//�ڵ��� ��Ϲ�ȣ �泲70��...

			company = strtok(NULL, " |\n");		//��ۻ���� ��Ϲ�ȣ

			driverCode = strtok(NULL, " |\n");		//������ �ڵ�

			daydrive = strtok(NULL, " |\n");		//���� ����Ÿ�

			totaldrive = strtok(NULL, " |\n");		//���� ����Ÿ�

			carspeed = strtok(NULL, " |\n");		//�����ӵ�

			carengine = strtok(NULL, " |\n");		//�д� ����ȸ�� ��

			carbreak = strtok(NULL, " |\n");		//�극��ũ ��ȣ

			positionX = strtok(NULL, " |\n");		//���� ��ġX

			positionY = strtok(NULL, " |\n");		//���� ��ġY

			GIS = strtok(NULL, " |\n");		//GIS ������

			acclerateX = strtok(NULL, " |\n");		// ���ӵ� VX	

			accelerateY = strtok(NULL, " |\n");		// ���ӵ� VY

			signalCode = strtok(NULL, " |\n");		//��Ż����ڵ�

			areaCode = strtok(NULL, " |\n");		//���������ڵ�

			inforDate = strtok(NULL, " |\n");		//�����߻��Ͻ�

		}

		printf("%s\n", inforDate);
		strcpy(strtemp, inforDate);

		if (inforDate == NULL)
		{
			inforDate = "2999999";
		}
		

		/*
		if (strtemp == NULL)
		{
			strcpy(strtemp, areaCode);
		}*/
		//printf("%s\n", inforDate);

		//nowDate = atol(inforDate);

		//printf("%lld\n\n", nowDate);

		////nowYear = nowDate / 1000000000000;		//20�⵵



		////�Ϸ縶�� �����ϴ� ���

		//nowTemp = nowDate / 100000000;		//����� ����������

		//printf("%lld\n\n", nowTemp);

		///*

		//if (strtemp[5] == NULL)		//NULL�� ����

		//{

		//	fpwrite = fopen("Error.txt", "ab");

		//	fputs(strline, fpwrite);

		//	fclose(fpwrite);

		//}



		else

		{

			sprintf(fl, "D:\SMU\CheonanBus(DankookUniv)\Data_Day\BusData%c%c%c%c%c%c.txt", strtemp[0], strtemp[1], strtemp[2], strtemp[3], strtemp[4], strtemp[5]);

			fpwrite = fopen(fl, "ab");

			fputs(strline, fpwrite);

			fclose(fpwrite);

		}

		//printf("??\n\n");*/

		//

		//stream = fopen(fl, "a");

		//fputs(str, stream);



		//printf("�ε���...%d\n", count);

		//count = count + 1;

		//

		//beforeDate = nowTemp;

		//

		//fclose(stream);

		count = count + 1;





	}



	fclose(fpread);

}