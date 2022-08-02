//#include <stdio.h>
//#include<stdlib.h>
//#include <string.h>
//#include <time.h>
//#pragma warning (disable:4996)
//
//int main()
//{
//	int a=0, b;
//	char str[200];		//한줄 가져오기 위한 공간
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
//		tripkey =strtok(str, " |\n");		//트립 키
//		driverecord =strtok(NULL, " |\n");		//운행기록장치
//		chade =strtok(NULL, " |\n");		//차대번호		
//		cardef =strtok(NULL, " |\n");		//자동차 유형
//		carnum = strtok(NULL, " |\n");		//자동차 등록번호 충남70바...
//		company = strtok(NULL, " |\n");		//운송사업자 등록번호
//		driverCode = strtok(NULL, " |\n");		//운전자 코드
//		daydrive = strtok(NULL, " |\n");		//일일 주행거리
//		totaldrive = strtok(NULL, " |\n");		//누적 주행거리
//		carspeed = strtok(NULL, " |\n");		//차량속도
//		carengine = strtok(NULL, " |\n");		//분당 엔진회전 수
//		carbreak = strtok(NULL, " |\n");		//브레이크 신호
//		positionX = strtok(NULL, " |\n");		//차량 위치X
//		positionY = strtok(NULL, " |\n");		//차량 위치Y
//		GIS = strtok(NULL, " |\n");		//GIS 방위각
//		acclerateX = strtok(NULL, " |\n");		// 가속도 VX	
//		accelerateY = strtok(NULL, " |\n");		// 가속도 VY
//		signalCode = strtok(NULL, " |\n");		//통신상태코드
//		areaCode = strtok(NULL, " |\n");		//운행지역코드
//		inforDate = strtok(NULL, " |\n");		//정보발생일시
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
//			printf("분석중.. %d\n", a);
//		}
//
//		else
//		{
//			printf("분석중.. %d\n", a);
//		}
//
//	}
//
//	printf("일일 평균 주행거리: %.2f km\n\n" , sumDayDrive / count);
//	printf("일일 평균 브레이크 밟은 횟수: %.2f 회",sumCarBreak/ count);
//	
//}