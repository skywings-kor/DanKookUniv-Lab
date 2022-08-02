#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include <time.h>
#pragma warning (disable:4996)



int main()
{
	int a=0, b = 0, c = 0, d = 0, e = 0, f = 0;
	char strline[300];

	char str[300];		//한줄 가져오기 위한 공간
	char* tripkey, * driverecord, * chade, * cardef, * carnum, * company, * driverCode, * daydrive, * totaldrive, * carspeed, * carengine, * carbreak, * positionX, * positionY, * GIS, * acclerateX, * accelerateY, * signalCode, * areaCode, * inforDate;
	char* temptemp;
	char driverecordtemp[20];
	
	int nowDate=0;
	int nowTemp = 0;

	int nowYear = 0;
	int nowMonth = 0;
	int nowDay = 0;

	int beforeDate=0;

	int count = 0;

	char strtemp[50]="";

	char fl[100] = "D:\SMU\CheonanBus(DankookUniv)\Data_Day\BusData200101.txt";

	FILE* fpread,*fpwrite;

	fpread = fopen("DTG-r-00001", "rb");

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
			printf("\n\n%d번째에서 error 발생\n\n",count);
			printf("시스템을 종료합니다..");
			exit(0);


		}
		strcpy(strline, str);
		tripkey = strtok(str, " |\n");		//트립 키
		driverecord = strtok(NULL, " |\n");		//운행기록장치
		
		//if (strcmp(driverecord, "ECO DTG-1000") == 0)
		if(strstr())
		{
			
			chade = strtok(NULL, " |\n");		//차대번호		
			cardef = strtok(NULL, " |\n");		//자동차 유형
			carnum = strtok(NULL, " |\n");		//자동차 등록번호 충남70바...
			company = strtok(NULL, " |\n");		//운송사업자 등록번호
			driverCode = strtok(NULL, " |\n");		//운전자 코드
			daydrive = strtok(NULL, " |\n");		//일일 주행거리
			totaldrive = strtok(NULL, " |\n");		//누적 주행거리
			carspeed = strtok(NULL, " |\n");		//차량속도
			carengine = strtok(NULL, " |\n");		//분당 엔진회전 수
			carbreak = strtok(NULL, " |\n");		//브레이크 신호
			positionX = strtok(NULL, " |\n");		//차량 위치X
			positionY = strtok(NULL, " |\n");		//차량 위치Y
			GIS = strtok(NULL, " |\n");		//GIS 방위각
			acclerateX = strtok(NULL, " |\n");		// 가속도 VX	
			accelerateY = strtok(NULL, " |\n");		// 가속도 VY
			signalCode = strtok(NULL, " |\n");		//통신상태코드
			areaCode = strtok(NULL, " |\n");		//운행지역코드
			temptemp = strtok(NULL, " |\n");		//임시방편
			inforDate = strtok(NULL, " |\n");		//정보발생일시
		}
		
		else
		{
			
			chade = strtok(NULL, " |\n");		//차대번호		
			cardef = strtok(NULL, " |\n");		//자동차 유형
			carnum = strtok(NULL, " |\n");		//자동차 등록번호 충남70바...
			company = strtok(NULL, " |\n");		//운송사업자 등록번호
			driverCode = strtok(NULL, " |\n");		//운전자 코드
			daydrive = strtok(NULL, " |\n");		//일일 주행거리
			totaldrive = strtok(NULL, " |\n");		//누적 주행거리
			carspeed = strtok(NULL, " |\n");		//차량속도
			carengine = strtok(NULL, " |\n");		//분당 엔진회전 수
			carbreak = strtok(NULL, " |\n");		//브레이크 신호
			positionX = strtok(NULL, " |\n");		//차량 위치X
			positionY = strtok(NULL, " |\n");		//차량 위치Y
			GIS = strtok(NULL, " |\n");		//GIS 방위각
			acclerateX = strtok(NULL, " |\n");		// 가속도 VX	
			accelerateY = strtok(NULL, " |\n");		// 가속도 VY
			signalCode = strtok(NULL, " |\n");		//통신상태코드
			areaCode = strtok(NULL, " |\n");		//운행지역코드
			inforDate = strtok(NULL, " |\n");		//정보발생일시
		}


		printf("%s\n", inforDate);
		strcpy(strtemp, inforDate);

		



		//printf("%s\n", inforDate);
		//nowDate = atol(inforDate);
		//printf("%lld\n\n", nowDate);
		////nowYear = nowDate / 1000000000000;		//20년도

		////하루마다 생성하는 방식
		//nowTemp = nowDate / 100000000;		//년월일 정수형으로
		//printf("%lld\n\n", nowTemp);
		///*
		
		if (strtemp[5] == NULL)
		{
			fpwrite = fopen("Error.txt", "ab");
			fputs(strline, fpwrite);
			fclose(fpwrite);
		}

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

		//printf("로딩중...%d\n", count);
		//count = count + 1;
		//
		//beforeDate = nowTemp;
		//
		//fclose(stream);
		count = count + 1;
		
		
	}

	fclose(fpread);
}
