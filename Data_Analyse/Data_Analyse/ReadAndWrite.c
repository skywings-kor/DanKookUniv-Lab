#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include <time.h>
#pragma warning (disable:4996)





int main()

{

	int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;

	char strline[300];
	

	char str[300];		//한줄 가져오기 위한 공간

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

	char fpstr[10] = "";	//이 변수는 파일 기존 작성된게 있는지 없는지 확인하기 위한 변수임.

	char fl[100] = "d:\smu\cheonanbus(dankookuniv)\data_day\busdata200101.csv";



	file* dataread, * fpwrite, *fpcreate,*fpread;

	//파일명 바꾸는 위치
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

			printf("시스템을 종료합니다..");

			exit(0);
		}

		/*strcpy(strline, str);*/

		tripkey = strtok(str, "|\n");		//트립 키

		driverecord = strtok(null, "|\n");		//운행기록장치

		//if (strcmp(driverecord, "eco dtg-1000") == 0)

		if (strstr(driverecord, "ecodtg") != null)		//eco가 있으면 해당 코드 실행
		{
			chade = strtok(null, "|\n");		//차대번호		

			cardef = strtok(null, "|\n");		//자동차 유형

			carnum = strtok(null, "|\n");		//자동차 등록번호 충남70바...

			company = strtok(null, "|\n");		//운송사업자 등록번호

			drivercode = strtok(null, "|\n");		//운전자 코드

			daydrive = strtok(null, "|\n");		//일일 주행거리

			totaldrive = strtok(null, "|\n");		//누적 주행거리

			carspeed = strtok(null, "|\n");		//차량속도

			carengine = strtok(null, "|\n");		//분당 엔진회전 수

			carbreak = strtok(null, "|\n");		//브레이크 신호

			positionx = strtok(null, "|\n");		//차량 위치x

			positiony = strtok(null, "|\n");		//차량 위치y

			gis = strtok(null, "|\n");		//gis 방위각

			accleratex = strtok(null, "|\n");		// 가속도 vx	

			acceleratey = strtok(null, "|\n");		// 가속도 vy

			signalcode = strtok(null, "|\n");		//통신상태코드

			areacode = strtok(null, "|\n");		//운행지역코드

			infordate = strtok(null, "|\n");		//정보발생일시

			//csv파일 작성을 위한 개발 추가
			printf("%s\n", infordate);
			strcpy(strtemp, infordate);
			sprintf(fl, "day_busdata%c%c%c%c%c%c.csv", strtemp[0], strtemp[1], strtemp[2], strtemp[3], strtemp[4], strtemp[5]);

			//파일에 첫번째 인덱스가 없을경우 생성하기 위한 코드



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

			//eco 고치기 전 코드 입니다
			//chade = strtok(null, "|\n");		//차대번호		

			//cardef = strtok(null, "|\n");		//자동차 유형

			//carnum = strtok(null, "|\n");		//자동차 등록번호 충남70바...

			//company = strtok(null, "|\n");		//운송사업자 등록번호

			//drivercode = strtok(null, "|\n");		//운전자 코드

			//daydrive = strtok(null, "|\n");		//일일 주행거리

			//totaldrive = strtok(null, "|\n");		//누적 주행거리

			//carspeed = strtok(null, "|\n");		//차량속도

			//carengine = strtok(null, "|\n");		//분당 엔진회전 수

			//carbreak = strtok(null, "|\n");		//브레이크 신호

			//positionx = strtok(null, "|\n");		//차량 위치x

			//positiony = strtok(null, "|\n");		//차량 위치y

			//gis = strtok(null, "|\n");		//gis 방위각

			//accleratex = strtok(null, "|\n");		// 가속도 vx	

			//acceleratey = strtok(null, "|\n");		// 가속도 vy

			//signalcode = strtok(null, "|\n");		//통신상태코드

			//areacode = strtok(null, "|\n");		//운행지역코드

			//infordate = strtok(null, "|\n");		//정보발생일시



			////csv파일 작성을 위한 개발 추가
			//printf("%s\n", infordate);
			//strcpy(strtemp, infordate);
			//sprintf(fl, "day_busdata%c%c%c%c%c%c.csv", strtemp[0], strtemp[1], strtemp[2], strtemp[3], strtemp[4], strtemp[5]);

			//////파일에 첫번째 인덱스가 없을경우 생성하기 위한 코드

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


		else if (strstr(driverecord, "eco") != null)		//eco가 있으면 해당 코드 실행
		{
			chade = strtok(null, "|\n");		//차대번호		

			cardef = strtok(null, "|\n");		//자동차 유형

			carnum = strtok(null, "|\n");		//자동차 등록번호 충남70바...

			company = strtok(null, "|\n");		//운송사업자 등록번호

			drivercode = strtok(null, "|\n");		//운전자 코드

			daydrive = strtok(null, "|\n");		//일일 주행거리

			totaldrive = strtok(null, "|\n");		//누적 주행거리

			carspeed = strtok(null, "|\n");		//차량속도

			carengine = strtok(null, "|\n");		//분당 엔진회전 수

			carbreak = strtok(null, "|\n");		//브레이크 신호

			positionx = strtok(null, "|\n");		//차량 위치x

			positiony = strtok(null, "|\n");		//차량 위치y

			gis = strtok(null, "|\n");		//gis 방위각

			accleratex = strtok(null, "|\n");		// 가속도 vx	

			acceleratey = strtok(null, "|\n");		// 가속도 vy

			signalcode = strtok(null, "|\n");		//통신상태코드

			areacode = strtok(null, "|\n");		//운행지역코드

			infordate = strtok(null, "|\n");		//정보발생일시

			//csv파일 작성을 위한 개발 추가
			printf("%s\n", infordate);
			strcpy(strtemp, infordate);
			sprintf(fl, "day_busdata%c%c%c%c%c%c.csv", strtemp[0], strtemp[1], strtemp[2], strtemp[3], strtemp[4], strtemp[5]);

			//파일에 첫번째 인덱스가 없을경우 생성하기 위한 코드



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


			//eco  고치기 전 코드입니다
			//chade = strtok(null, "|\n");		//차대번호		

			//cardef = strtok(null, "|\n");		//자동차 유형

			//carnum = strtok(null, "|\n");		//자동차 등록번호 충남70바...

			//company = strtok(null, "|\n");		//운송사업자 등록번호

			//drivercode = strtok(null, "|\n");		//운전자 코드

			//daydrive = strtok(null, "|\n");		//일일 주행거리

			//totaldrive = strtok(null, "|\n");		//누적 주행거리

			//carspeed = strtok(null, "|\n");		//차량속도

			//carengine = strtok(null, "|\n");		//분당 엔진회전 수

			//carbreak = strtok(null, "|\n");		//브레이크 신호

			//positionx = strtok(null, "|\n");		//차량 위치x

			//positiony = strtok(null, "|\n");		//차량 위치y

			//gis = strtok(null, "|\n");		//gis 방위각

			//accleratex = strtok(null, "|\n");		// 가속도 vx	

			//acceleratey = strtok(null, "|\n");		// 가속도 vy

			//signalcode = strtok(null, "|\n");		//통신상태코드

			//areacode = strtok(null, "|\n");		//운행지역코드

			//temptemp = strtok(null, "|\n");		//임시방편

			//infordate = strtok(null, "|\n");		//정보발생일시

			////csv파일 작성을 위한 개발 추가
			//printf("%s\n", infordate);
			//strcpy(strtemp, infordate);
			//sprintf(fl, "day_busdata%c%c%c%c%c%c.csv", strtemp[0], strtemp[1], strtemp[2], strtemp[3], strtemp[4], strtemp[5]);

			////파일에 첫번째 인덱스가 없을경우 생성하기 위한 코드
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



		else	//없으면 해당 코드 실행
		{
			chade = strtok(null, "|\n");		//차대번호		

			cardef = strtok(null, "|\n");		//자동차 유형

			carnum = strtok(null, "|\n");		//자동차 등록번호 충남70바...

			company = strtok(null, "|\n");		//운송사업자 등록번호

			drivercode = strtok(null, "|\n");		//운전자 코드

			daydrive = strtok(null, "|\n");		//일일 주행거리

			totaldrive = strtok(null, "|\n");		//누적 주행거리

			carspeed = strtok(null, "|\n");		//차량속도

			carengine = strtok(null, "|\n");		//분당 엔진회전 수

			carbreak = strtok(null, "|\n");		//브레이크 신호

			positionx = strtok(null, "|\n");		//차량 위치x

			positiony = strtok(null, "|\n");		//차량 위치y

			gis = strtok(null, "|\n");		//gis 방위각

			accleratex = strtok(null, "|\n");		// 가속도 vx	

			acceleratey = strtok(null, "|\n");		// 가속도 vy

			signalcode = strtok(null, "|\n");		//통신상태코드

			areacode = strtok(null, "|\n");		//운행지역코드

			infordate = strtok(null, "|\n");		//정보발생일시

			//csv파일 작성을 위한 개발 추가
			printf("%s\n", infordate);
			strcpy(strtemp, infordate);
			sprintf(fl, "day_busdata%c%c%c%c%c%c.csv", strtemp[0], strtemp[1], strtemp[2], strtemp[3], strtemp[4], strtemp[5]);

			//파일에 첫번째 인덱스가 없을경우 생성하기 위한 코드
			
			

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



		//기존 방식
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