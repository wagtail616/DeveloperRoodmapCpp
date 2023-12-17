#include<iostream>
#include<chrono>
#include<ctime>

#include<string>
#include<sstream>
#include<iomanip>
int main() {
	//����
	using namespace std::chrono;
	seconds sec(5);
	minutes min(2);
	hours ht(1);
	

	//�^�C���|�C���g
	system_clock::time_point tp = system_clock::now();

	//���ݎ���
	system_clock::time_point now = system_clock::now();
	//1���Ԍ�
	system_clock::time_point one_hour_after = system_clock::now()+hours(1);

	//�^�C���|�C���g���J�����_�[�ɕϊ�
	std::time_t now_c = system_clock::to_time_t(now);
	//std::cout << "Current Time: " << std::ctime(&now_c) << std::endl;
	//secure�łȂ��Â�����
	
	//github�Ō����������@
	//URL::https://gist.github.com/AkiyukiOkayasu/b4051e942e40d53c7463f4057146f7cc
	//std::stringstream ss;
	//ss << std::put_time(localtime(&now_c), "%Y%n%d_%H%M%S");
	//localtime���Â����ߊ댯

	std::chrono::seconds tp_sec = std::chrono::duration_cast<std::chrono::seconds>(tp.time_since_epoch());
	long long all_sec = tp_sec.count();
	//std::cout << all_sec;

	//���͉���
	int s = 1;int m = 60 * s;int h = 60 * m;int d = 24 * h;int y = 365.25 * d;

	int year = system_clock::to_time_t(now)/y+1970;
	int ThisYearDays= system_clock::to_time_t(now)%y/d;
	int month=0;
	int day=0;;
	for (int i = 1; ThisYearDays > 0; i++) {
		switch (i)
		{
			//31
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
			month = i;
			day = ThisYearDays+1;
			ThisYearDays -= 31;
			break;
			//30
		case 4:case 6:case 9:case 11:
			month = i;
			day = ThisYearDays+1;
			ThisYearDays -= 30;
			break;
			//28
		case 2:
			month = i;
			day = ThisYearDays+1;
			if (year % 4 == 0) {
				ThisYearDays -= 29;
			}
			else {
				ThisYearDays -= 28;
			}
			break;
		default:return -1;
		}
	}
	std::cout << year << "�N"<<month<<"��"<<day<<"��";
}