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

	char* tripkey, * driverecord, * chade, * cardef, * carnum, * company, * drivercode, * daydrive, * totaldrive, * carspeed, * carengine, * carbreak, * positionx, * positiony, * gis, * accleratex, * acceleratey, * signalcode, * areacode, * infordate,* temptemp;

	int nowdate = 0;

	int nowtemp = 0;

	int nowyear = 0;

	int nowmonth = 0;

	int nowday = 0;

	int beforedate = 0;



	int count = 0;



	char strtemp[50] = "";
	char strtemp2[50] = "";

	char fpstr[10] = "";	//�� ������ ���� ���� �ۼ��Ȱ� �ִ��� ������ Ȯ���ϱ� ���� ������.

	char fl[100] = "d:\smu\cheonanbus(dankookuniv)\data_day\busdata200101.csv";



	file* dataread, * fpwrite, *fpcreate,*fpread;

	//���ϸ� �ٲٴ� ��ġ
	dataread = fopen("dtg1", "rb");



	//if ((fpread = fopen("dtg-r-00000", "w")) == null)

	//{

	//	printf("file open error\n");

	//	exit(0);

	//}





	while (!feof(dataread))

	{

		fgets(str, sizeof(str), dataread);

		if (str == null)
		{

			printf("�ý����� �����մϴ�..");

			exit(0);
		}

		/*strcpy(strline, str);*/

		tripkey = strtok(str, "|\n");		//Ʈ�� Ű

		driverecord = strtok(null, "|\n");		//��������ġ

		//if (strcmp(driverecord, "eco dtg-1000") == 0)

		if (strstr(driverecord, "ecodtg") != null)		//eco�� ������ �ش� �ڵ� ����
		{
			chade = strtok(null, "|\n");		//�����ȣ		

			cardef = strtok(null, "|\n");		//�ڵ��� ����

			carnum = strtok(null, "|\n");		//�ڵ��� ��Ϲ�ȣ �泲70��...

			company = strtok(null, "|\n");		//��ۻ���� ��Ϲ�ȣ

			drivercode = strtok(null, "|\n");		//������ �ڵ�

			daydrive = strtok(null, "|\n");		//���� ����Ÿ�

			totaldrive = strtok(null, "|\n");		//���� ����Ÿ�

			carspeed = strtok(null, "|\n");		//�����ӵ�

			carengine = strtok(null, "|\n");		//�д� ����ȸ�� ��

			carbreak = strtok(null, "|\n");		//�극��ũ ��ȣ

			positionx = strtok(null, "|\n");		//���� ��ġx

			positiony = strtok(null, "|\n");		//���� ��ġy

			gis = strtok(null, "|\n");		//gis ������

			accleratex = strtok(null, "|\n");		// ���ӵ� vx	

			acceleratey = strtok(null, "|\n");		// ���ӵ� vy

			signalcode = strtok(null, "|\n");		//��Ż����ڵ�

			areacode = strtok(null, "|\n");		//���������ڵ�

			infordate = strtok(null, "|\n");		//�����߻��Ͻ�

			//csv���� �ۼ��� ���� ���� �߰�
			printf("%s\n", infordate);
			strcpy(strtemp, infordate);
			sprintf(fl, "day_busdata%c%c%c%c%c%c.csv", strtemp[0], strtemp[1], strtemp[2], strtemp[3], strtemp[4], strtemp[5]);

			//���Ͽ� ù��° �ε����� ������� �����ϱ� ���� �ڵ�



			fpwrite = fopen(fl, "ab");

			fputs(tripkey, fpwrite);
			fputs(",", fpwrite);
			fputs(driverecord, fpwrite);
			fputs(",", fpwrite);
			fputs(chade, fpwrite);
			fputs(",", fpwrite);
			fputs(cardef, fpwrite);
			fputs(",", fpwrite);
			fputs(carnum, fpwrite);
			fputs(",", fpwrite);
			fputs(company, fpwrite);
			fputs(",", fpwrite);
			fputs(drivercode, fpwrite);
			fputs(",", fpwrite);
			fputs(daydrive, fpwrite);
			fputs(",", fpwrite);
			fputs(totaldrive, fpwrite);
			fputs(",", fpwrite);
			fputs(carspeed, fpwrite);
			fputs(",", fpwrite);
			fputs(carengine, fpwrite);
			fputs(",", fpwrite);
			fputs(carbreak, fpwrite);
			fputs(",", fpwrite);
			fputs(positionx, fpwrite);
			fputs(",", fpwrite);
			fputs(positiony, fpwrite);
			fputs(",", fpwrite);
			fputs(gis, fpwrite);
			fputs(",", fpwrite);
			fputs(accleratex, fpwrite);
			fputs(",", fpwrite);
			fputs(acceleratey, fpwrite);
			fputs(",", fpwrite);
			fputs(signalcode, fpwrite);
			fputs(",", fpwrite);
			fputs(areacode, fpwrite);
			fputs(",", fpwrite);
			fputs(infordate, fpwrite);



			fputs("\n", fpwrite);
			fclose(fpwrite);

			//eco ��ġ�� �� �ڵ� �Դϴ�
			//chade = strtok(null, "|\n");		//�����ȣ		

			//cardef = strtok(null, "|\n");		//�ڵ��� ����

			//carnum = strtok(null, "|\n");		//�ڵ��� ��Ϲ�ȣ �泲70��...

			//company = strtok(null, "|\n");		//��ۻ���� ��Ϲ�ȣ

			//drivercode = strtok(null, "|\n");		//������ �ڵ�

			//daydrive = strtok(null, "|\n");		//���� ����Ÿ�

			//totaldrive = strtok(null, "|\n");		//���� ����Ÿ�

			//carspeed = strtok(null, "|\n");		//�����ӵ�

			//carengine = strtok(null, "|\n");		//�д� ����ȸ�� ��

			//carbreak = strtok(null, "|\n");		//�극��ũ ��ȣ

			//positionx = strtok(null, "|\n");		//���� ��ġx

			//positiony = strtok(null, "|\n");		//���� ��ġy

			//gis = strtok(null, "|\n");		//gis ������

			//accleratex = strtok(null, "|\n");		// ���ӵ� vx	

			//acceleratey = strtok(null, "|\n");		// ���ӵ� vy

			//signalcode = strtok(null, "|\n");		//��Ż����ڵ�

			//areacode = strtok(null, "|\n");		//���������ڵ�

			//infordate = strtok(null, "|\n");		//�����߻��Ͻ�



			////csv���� �ۼ��� ���� ���� �߰�
			//printf("%s\n", infordate);
			//strcpy(strtemp, infordate);
			//sprintf(fl, "day_busdata%c%c%c%c%c%c.csv", strtemp[0], strtemp[1], strtemp[2], strtemp[3], strtemp[4], strtemp[5]);

			//////���Ͽ� ù��° �ε����� ������� �����ϱ� ���� �ڵ�

			//fpwrite = fopen(fl, "ab");

			//fputs(tripkey, fpwrite);
			//fputs(",", fpwrite);
			//fputs(driverecord, fpwrite);
			//fputs(",", fpwrite);
			//fputs(chade, fpwrite);
			//fputs(",", fpwrite);
			//fputs(cardef, fpwrite);
			//fputs(",", fpwrite);
			//fputs(carnum, fpwrite);
			//fputs(",", fpwrite);
			//fputs(company, fpwrite);
			//fputs(",", fpwrite);
			//fputs(drivercode, fpwrite);
			//fputs(",", fpwrite);
			//fputs(daydrive, fpwrite);
			//fputs(",", fpwrite);
			//fputs(totaldrive, fpwrite);
			//fputs(",", fpwrite);
			//fputs(carspeed, fpwrite);
			//fputs(",", fpwrite);
			//fputs(carengine, fpwrite);
			//fputs(",", fpwrite);
			//fputs(carbreak, fpwrite);
			//fputs(",", fpwrite);
			//fputs(positionx, fpwrite);
			//fputs(",", fpwrite);
			//fputs(positiony, fpwrite);
			//fputs(",", fpwrite);
			//fputs(gis, fpwrite);
			//fputs(",", fpwrite);
			//fputs(accleratex, fpwrite);
			//fputs(",", fpwrite);
			//fputs(acceleratey, fpwrite);
			//fputs(",", fpwrite);
			//fputs(signalcode, fpwrite);
			//fputs(",", fpwrite);
			//fputs(areacode, fpwrite);
			//fputs(",", fpwrite);
			//fputs(infordate, fpwrite);



			//fputs("\n", fpwrite);
			//fclose(fpwrite);

		}


		else if (strstr(driverecord, "eco") != null)		//eco�� ������ �ش� �ڵ� ����
		{
			chade = strtok(null, "|\n");		//�����ȣ		

			cardef = strtok(null, "|\n");		//�ڵ��� ����

			carnum = strtok(null, "|\n");		//�ڵ��� ��Ϲ�ȣ �泲70��...

			company = strtok(null, "|\n");		//��ۻ���� ��Ϲ�ȣ

			drivercode = strtok(null, "|\n");		//������ �ڵ�

			daydrive = strtok(null, "|\n");		//���� ����Ÿ�

			totaldrive = strtok(null, "|\n");		//���� ����Ÿ�

			carspeed = strtok(null, "|\n");		//�����ӵ�

			carengine = strtok(null, "|\n");		//�д� ����ȸ�� ��

			carbreak = strtok(null, "|\n");		//�극��ũ ��ȣ

			positionx = strtok(null, "|\n");		//���� ��ġx

			positiony = strtok(null, "|\n");		//���� ��ġy

			gis = strtok(null, "|\n");		//gis ������

			accleratex = strtok(null, "|\n");		// ���ӵ� vx	

			acceleratey = strtok(null, "|\n");		// ���ӵ� vy

			signalcode = strtok(null, "|\n");		//��Ż����ڵ�

			areacode = strtok(null, "|\n");		//���������ڵ�

			infordate = strtok(null, "|\n");		//�����߻��Ͻ�

			//csv���� �ۼ��� ���� ���� �߰�
			printf("%s\n", infordate);
			strcpy(strtemp, infordate);
			sprintf(fl, "day_busdata%c%c%c%c%c%c.csv", strtemp[0], strtemp[1], strtemp[2], strtemp[3], strtemp[4], strtemp[5]);

			//���Ͽ� ù��° �ε����� ������� �����ϱ� ���� �ڵ�



			fpwrite = fopen(fl, "ab");

			fputs(tripkey, fpwrite);
			fputs(",", fpwrite);
			fputs(driverecord, fpwrite);
			fputs(",", fpwrite);
			fputs(chade, fpwrite);
			fputs(",", fpwrite);
			fputs(cardef, fpwrite);
			fputs(",", fpwrite);
			fputs(carnum, fpwrite);
			fputs(",", fpwrite);
			fputs(company, fpwrite);
			fputs(",", fpwrite);
			fputs(drivercode, fpwrite);
			fputs(",", fpwrite);
			fputs(daydrive, fpwrite);
			fputs(",", fpwrite);
			fputs(totaldrive, fpwrite);
			fputs(",", fpwrite);
			fputs(carspeed, fpwrite);
			fputs(",", fpwrite);
			fputs(carengine, fpwrite);
			fputs(",", fpwrite);
			fputs(carbreak, fpwrite);
			fputs(",", fpwrite);
			fputs(positionx, fpwrite);
			fputs(",", fpwrite);
			fputs(positiony, fpwrite);
			fputs(",", fpwrite);
			fputs(gis, fpwrite);
			fputs(",", fpwrite);
			fputs(accleratex, fpwrite);
			fputs(",", fpwrite);
			fputs(acceleratey, fpwrite);
			fputs(",", fpwrite);
			fputs(signalcode, fpwrite);
			fputs(",", fpwrite);
			fputs(areacode, fpwrite);
			fputs(",", fpwrite);
			fputs(infordate, fpwrite);



			fputs("\n", fpwrite);
			fclose(fpwrite);


			//eco  ��ġ�� �� �ڵ��Դϴ�
			//chade = strtok(null, "|\n");		//�����ȣ		

			//cardef = strtok(null, "|\n");		//�ڵ��� ����

			//carnum = strtok(null, "|\n");		//�ڵ��� ��Ϲ�ȣ �泲70��...

			//company = strtok(null, "|\n");		//��ۻ���� ��Ϲ�ȣ

			//drivercode = strtok(null, "|\n");		//������ �ڵ�

			//daydrive = strtok(null, "|\n");		//���� ����Ÿ�

			//totaldrive = strtok(null, "|\n");		//���� ����Ÿ�

			//carspeed = strtok(null, "|\n");		//�����ӵ�

			//carengine = strtok(null, "|\n");		//�д� ����ȸ�� ��

			//carbreak = strtok(null, "|\n");		//�극��ũ ��ȣ

			//positionx = strtok(null, "|\n");		//���� ��ġx

			//positiony = strtok(null, "|\n");		//���� ��ġy

			//gis = strtok(null, "|\n");		//gis ������

			//accleratex = strtok(null, "|\n");		// ���ӵ� vx	

			//acceleratey = strtok(null, "|\n");		// ���ӵ� vy

			//signalcode = strtok(null, "|\n");		//��Ż����ڵ�

			//areacode = strtok(null, "|\n");		//���������ڵ�

			//temptemp = strtok(null, "|\n");		//�ӽù���

			//infordate = strtok(null, "|\n");		//�����߻��Ͻ�

			////csv���� �ۼ��� ���� ���� �߰�
			//printf("%s\n", infordate);
			//strcpy(strtemp, infordate);
			//sprintf(fl, "day_busdata%c%c%c%c%c%c.csv", strtemp[0], strtemp[1], strtemp[2], strtemp[3], strtemp[4], strtemp[5]);

			////���Ͽ� ù��° �ε����� ������� �����ϱ� ���� �ڵ�
			//

			//fpwrite = fopen(fl, "ab");

			//fputs(tripkey, fpwrite);
			//fputs(",", fpwrite);
			//fputs(driverecord, fpwrite);
			//fputs(",", fpwrite);
			//fputs(chade, fpwrite);
			//fputs(",", fpwrite);
			//fputs(cardef, fpwrite);
			//fputs(",", fpwrite);
			//fputs(carnum, fpwrite);
			//fputs(",", fpwrite);
			//fputs(company, fpwrite);
			//fputs(",", fpwrite);
			//fputs(drivercode, fpwrite);
			//fputs(",", fpwrite);
			//fputs(daydrive, fpwrite);
			//fputs(",", fpwrite);
			//fputs(totaldrive, fpwrite);
			//fputs(",", fpwrite);
			//fputs(carspeed, fpwrite);
			//fputs(",", fpwrite);
			//fputs(carengine, fpwrite);
			//fputs(",", fpwrite);
			//fputs(carbreak, fpwrite);
			//fputs(",", fpwrite);
			//fputs(positionx, fpwrite);
			//fputs(",", fpwrite);
			//fputs(positiony, fpwrite);
			//fputs(",", fpwrite);
			//fputs(gis, fpwrite);
			//fputs(",", fpwrite);
			//fputs(accleratex, fpwrite);
			//fputs(",", fpwrite);
			//fputs(acceleratey, fpwrite);
			//fputs(",", fpwrite);
			//fputs(signalcode, fpwrite);
			//fputs(",", fpwrite);
			//fputs(areacode, fpwrite);
			//fputs(",", fpwrite);
			//fputs(infordate, fpwrite);



			//fputs("\n", fpwrite);
			//fclose(fpwrite);
		}



		else	//������ �ش� �ڵ� ����
		{
			chade = strtok(null, "|\n");		//�����ȣ		

			cardef = strtok(null, "|\n");		//�ڵ��� ����

			carnum = strtok(null, "|\n");		//�ڵ��� ��Ϲ�ȣ �泲70��...

			company = strtok(null, "|\n");		//��ۻ���� ��Ϲ�ȣ

			drivercode = strtok(null, "|\n");		//������ �ڵ�

			daydrive = strtok(null, "|\n");		//���� ����Ÿ�

			totaldrive = strtok(null, "|\n");		//���� ����Ÿ�

			carspeed = strtok(null, "|\n");		//�����ӵ�

			carengine = strtok(null, "|\n");		//�д� ����ȸ�� ��

			carbreak = strtok(null, "|\n");		//�극��ũ ��ȣ

			positionx = strtok(null, "|\n");		//���� ��ġx

			positiony = strtok(null, "|\n");		//���� ��ġy

			gis = strtok(null, "|\n");		//gis ������

			accleratex = strtok(null, "|\n");		// ���ӵ� vx	

			acceleratey = strtok(null, "|\n");		// ���ӵ� vy

			signalcode = strtok(null, "|\n");		//��Ż����ڵ�

			areacode = strtok(null, "|\n");		//���������ڵ�

			infordate = strtok(null, "|\n");		//�����߻��Ͻ�

			//csv���� �ۼ��� ���� ���� �߰�
			printf("%s\n", infordate);
			strcpy(strtemp, infordate);
			sprintf(fl, "day_busdata%c%c%c%c%c%c.csv", strtemp[0], strtemp[1], strtemp[2], strtemp[3], strtemp[4], strtemp[5]);

			//���Ͽ� ù��° �ε����� ������� �����ϱ� ���� �ڵ�
			
			

			fpwrite = fopen(fl, "ab");

			fputs(tripkey, fpwrite);
			fputs(",", fpwrite);
			fputs(driverecord, fpwrite);
			fputs(",", fpwrite);
			fputs(chade, fpwrite);
			fputs(",", fpwrite);
			fputs(cardef, fpwrite);
			fputs(",", fpwrite);
			fputs(carnum, fpwrite);
			fputs(",", fpwrite);
			fputs(company, fpwrite);
			fputs(",",	fpwrite);
			fputs(drivercode, fpwrite);
			fputs(",", fpwrite);
			fputs(daydrive, fpwrite);
			fputs(",", fpwrite);
			fputs(totaldrive, fpwrite);
			fputs(",", fpwrite); 
			fputs(carspeed, fpwrite);
			fputs(",", fpwrite);
			fputs(carengine, fpwrite);
			fputs(",", fpwrite);
			fputs(carbreak, fpwrite);
			fputs(",", fpwrite);
			fputs(positionx, fpwrite);
			fputs(",", fpwrite);
			fputs(positiony, fpwrite);
			fputs(",", fpwrite);
			fputs(gis, fpwrite);
			fputs(",", fpwrite);
			fputs(accleratex, fpwrite);
			fputs(",", fpwrite);
			fputs(acceleratey, fpwrite);
			fputs(",", fpwrite);
			fputs(signalcode, fpwrite);
			fputs(",", fpwrite);
			fputs(areacode, fpwrite);
			fputs(",", fpwrite);
			fputs(infordate, fpwrite);



			fputs("\n", fpwrite);
			fclose(fpwrite);
			
		}



		//���� ���
		// printf("%s\n", infordate);
		//strcpy(strtemp, infordate);

		//if (infordate == null)
		//{
		//	infordate = "2999999";
		//}
		//

		//else
		//{
		//	sprintf(fl, "d:\smu\cheonanbus(dankookuniv)\data_day\busdata%c%c%c%c%c%c.csv", strtemp[0], strtemp[1], strtemp[2], strtemp[3], strtemp[4], strtemp[5]);

		//	fpwrite = fopen(fl, "ab");

		//	fputs(strline, fpwrite);

		//	fclose(fpwrite);
		//}
		
	}
	
	fclose(dataread);

}								