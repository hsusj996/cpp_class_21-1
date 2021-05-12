/*1번
#include <iostream>
#include <math.h>
using namespace std;

typedef struct
{
	int x;
	int y;
}point;

void res(point a, point b)
{
	double d;

	d = sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));

	cout << "두 점 사이의 거리는 " << d << "입니다.\n";
}

void main()
{
	point a, b;

	cout << "점의 좌표를 입력하시오. <x y>:";
	cin >> a.x >> a.y;
	cout << "점의 좌표를 입력하시오. <x y>:";
	cin >> b.x >> b.y;

	res(a, b);
}*/
/*2번
#include <iostream>
using namespace std;

typedef struct
{
	double x;
	double y;
}vector;

vector get_vector_sum(vector a, vector b)
{
	vector res;

	res.x = a.x + b.x;
	res.y = a.y + b.y;
	return res;
}

void main()
{
	vector a, b, res;

	cout << "벡터 a를 입력하시오.";
	cin >> a.x >> a.y;
	cout << "벡터 b를 입력하시오.";
	cin >> b.x >> b.y;

	res = get_vector_sum(a, b);
	cout << "벡터의 합은 <" << res.x << ", " << res.y << ">입니다.\n";
}*/
/*3번
#include <iostream>
using namespace std;

typedef struct
{
	int x;
	int y;
}POINT;

void translate(POINT a, int shift_x, int shift_y)
{
	cout << "새로운 점의 좌표는<" << a.x + shift_x << ", " << a.y + shift_y << ">입니다.\n";
}

void main()
{
	POINT a;
	int shift_x, shift_y;
	cout << "좌표를 입력하시오.";
	cin >> a.x >> a.y;
	cout << "이동한 거리를 입력하시오.";
	cin >> shift_x >> shift_y;

	translate(a, shift_x, shift_y);
}*/
/*4번
#include <iostream>
#include <math.h>
using namespace std;

typedef struct
{
	int x;
	int y;
}point;
void res(point p1, point p2)
{
	cout << "넓이 : " << abs(p1.x - p2.x) * abs(p1.y - p2.y);
}
void main()
{
	point p1, p2;
	cout << "p1 :";
	cin >> p1.x >> p1.y;
	cout << "p2 :";
	cin >> p2.x >> p2.y;

	res(p1, p2);
}*/
/*5번
#include <iostream>
#define NUM 5
using namespace std;

typedef struct
{
	int kor;
	int eng;
	int mat;
	int total;
	double avg;
	char hakjum;
}student;

int total(student stu)
{
	return stu.kor + stu.eng + stu.mat;
}
double avg(student stu)
{
	return total(stu) / 3.0;
}
char hakjum(student stu)
{
	switch ((int)stu.avg)
	{
	case 10:
	case 9:
		return 'A';
		break;
	case 8:
		return 'B';
		break;
	case 7:
		return 'C';
		break;
	case 6:
		return 'D';
		break;
	default:
		return 'F';
		break;
	}
}
void print(student stu[5])
{
	cout << "번호 국어 영어 수학 총점   평균   학점\n";
	for (int i = 0; i < NUM; i++)
	{
		cout.width(2);
		cout << i + 1 << "   ";
		cout.width(3);
		cout << stu[i].kor<<"  ";
		cout.width(3);
		cout << stu[i].eng << "  ";
		cout.width(3);
		cout << stu[i].mat << "  ";
		cout.width(4);
		cout << stu[i].total << "  ";
		cout.precision(2);
		cout << fixed << stu[i].avg << "  ";
		cout.width(2);
		cout << stu[i].hakjum;
		cout << "\n";
	}
}

void main()
{
	student stu[NUM];

	cout << "학생의 성적을 입력하세요.\n";
	for (int i = 0; i < NUM; i++)
	{
		cout << i + 1 << "번째 국어 영어 수학 :";
		cin >> stu[i].kor >> stu[i].eng >> stu[i].mat;
		stu[i].total = total(stu[i]);
		stu[i].avg = avg(stu[i]);
		stu[i].hakjum = hakjum(stu[i]);
	}

	print(stu);
}*/
/*6번
#include <iostream>
#define NUM 5
using namespace std;
typedef struct
{
	string name;
	string id;
	int salary;
}employee;

void up_avg(employee a[NUM])
{
	double salary_avg = 0;

	for (int i = 0; i < NUM; i++)
	{
		salary_avg += a[i].salary;
	}
	salary_avg /= (double)NUM;

	cout << "\n---------------------------------------\n";
	cout << "  급여가 " << salary_avg << "만원<평균> 이상인 직원 정보\n";
	cout << "----------------------------------------\n";
	for (int i = 0; i < NUM; i++)
	{
		if (a[i].salary >= salary_avg)
		{
			cout << "          " << a[i].id;
			cout << "          " << a[i].salary << "만원\n";
		}
	}
	cout << "----------------------------------------\n";
}

void main()
{
	employee a[NUM];

	cout << ">> 직원의 정보<이름, ID, 급여>를 입력하세요. <<\n";
	
	for (int i = 0; i < NUM; i++)
	{
		cout << i << "번:";
		cin >> a[i].name >> a[i].id >> a[i].salary;
	}
	up_avg(a);

}*/
/*7번
#include <iostream>
#include <string>
#define SIZE 100
using namespace std;

typedef struct
{
	string name;
	string gender;
	int age;
}person;
void input(person info[])
{
	int n;
	cout << "최대 100명의 사용자 정보를 입력받고 출력합니다.\n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << i + 1 << ". 이름은? ";
		cin >> info[i].name;
		cout << "성별은<남 또는 여>? ";
		cin >> info[i].gender;
		cout << "나이는? ";
		cin >> info[i].age;

		cout << "계속 입력하려면 1, 그만하려면 0을 입력하세요. ";
		cin >> n;
		if (n == 0)
			break;
	}
}
void print(person* info)
{
	cout << " 이름   성별    나이\n";
	cout << "======================\n";
	for (int i = 0; (info+i)->name.size() != 0; i++)
		cout << (info+i)->name << "   " << (info+i)->gender << "       " << (info+i)->age << "\n";
	cout << "======================\n";
}

void main()
{
	person info[SIZE];

	input(info);
	print(info);
}*/
/*8번
#include <iostream>
#include <iomanip>
#define SIZE 3
using namespace std;

typedef struct
{
	string name;
	int employee_num;
	int salary;
	int child_num;
}info;

void input(info a[])
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << ">> 사원번호? ";
		cin >> a[i].employee_num;
		cout << ">>이름? ";
		cin >> a[i].name;
		cout << ">>자녀수? ";
		cin >> a[i].child_num;
		cout << ">>기본급? ";
		cin >> a[i].salary;
	}
}
void print(info a[])
{
	int fin_salary[SIZE];
	int max = 0, max_index;
	cout << "사원번호  이름        기본급          자녀수    자녀수당   급여\n";
	cout << "--------------------------------------------------------\n";
	for (int i = 0; i < SIZE; i++)
	{
		fin_salary[i] = (a[i].salary) + (a[i].child_num) * 100000;
		if (max < fin_salary[i])
		{
			max = fin_salary[i];
			max_index = i;
		}
		cout << a[i].employee_num ;
		cout << setw(10) << a[i].name ;
		cout << setw(10) << a[i].salary << "원";
		cout << setw(10) << a[i].child_num << "명";
		cout << setw(10) << (a[i].child_num)*100000 << "원";
		cout << setw(10) << fin_salary[i] << "원\n";
	}
	cout << "최고 급여자: " << a[max_index].name << " " << max << "원\n";
}
void main()
{
	info a[SIZE];
	input(a);
	print(a);

}*/
/*9번
#include <iostream>
#include <iomanip>
using namespace std;

typedef struct
{
	string name;
	int hakjum;
	string grade;
}subject;

double score(subject a[])
{
	double chongjum = 0;
	double chonghakjum = 0;
	for (int i = 0; i < 5; i++)
	{
		double hakjum;
		switch ((a[i].grade)[0])
		{
		case 'A':
			if ((a[i].grade)[1] == '+')
				hakjum = 4.5;
			else
				hakjum = 4.0;
			break;
		case 'B':
			if ((a[i].grade)[1] == '+')
				hakjum = 3.5;
			else
				hakjum = 3.0;
			break;
		case 'C':
			if ((a[i].grade)[1] == '+')
				hakjum = 2.5;
			else
				hakjum = 2.0;
			break;
		case 'D':
			if ((a[i].grade)[1] == '+')
				hakjum = 1.5;
			else
				hakjum = 1.0;
			break;
		default:
			hakjum = 0;
			break;
		}
		chongjum += (hakjum * (a[i].hakjum));
		chonghakjum += a[i].hakjum;
	}
	return chongjum / chonghakjum;
}
void print(subject a[], double res_score)
{
	cout << "---------------------------\n";
	cout << "강좌명   학점  등급\n";
	cout << "---------------------------\n";
	for (int i = 0; i < 5; i++)
		cout << setw(6) << a[i].name << setw(5) << a[i].hakjum << setw(5) << a[i].grade << endl;
	cout << "---------------------------\n";

	cout << setw(12) << "평점 " << res_score << endl;
}

void main()
{
	subject a[5] = { {"글쓰기",2,"A0"},{"수학",3,"B+"},{"체육",2,"A0"},{"회화",2,"B0"},{"c언어",3,"A+"} };
	double res_score;

	res_score = score(a);

	print(a, res_score);
}*/
/*10번
#include <iostream>
#include <string.h>
using namespace std;

typedef struct
{
	string name;
	string home;
	string cell;
}info;
void input(info a[])
{
	for (int i = 0; i < 3; i++)
	{
		cout << "이름을 입력하시오.:";
		cin >> a[i].name;
		cout << "집전화번호를 입력하시오.:";
		cin >> a[i].home;
		cout << "휴대폰번호를 입력하시오.:";
		cin >> a[i].cell;
	}
}
void search(info a[])
{
	string search_name;
	cout << "검색할 이름을 입력하시오.";
	cin >> search_name;

	for (int i = 0; i < 3; i++)
	{
		if (search_name.compare(a[i].name) == 0)
		{
			cout << "집전화번호 : " << a[i].home << endl;
			cout << "휴대폰번호 : " << a[i].cell << endl;
		}
	}
}

void main()
{
	info a[3];

	input(a);
	search(a);
}*/
/*11번
#include <iostream>
#define NUM 5
using namespace std;

typedef struct
{
	string name;
	string cell;
	int money;
}account;
void create(account acc[], int acc_num)
{
	cout << "이름 :";
	cin >> acc[acc_num].name;
	cout << "전화번호 :";
	cin >> acc[acc_num].cell;
	cout << "금액 :";
	cin >> acc[acc_num].money;
}
void input(account acc[])
{
	string search_name;
	int input_money;
	cout << "등록된 계좌의 이름을 입력하세요. :";
	cin >> search_name;
	cout << "입력할 금액을 입력하세요. :";
	cin >> input_money;
	for (int i = 0; i < NUM; i++)
		if (search_name.compare(acc[i].name) == 0)
			acc[i].money += input_money;
}
void output(account acc[])
{
	string search_name;
	int output_money;
	cout << "등록된 계좌의 이름을 입력하세요. :";
	cin >> search_name;
	cout << "출금할 금액을 입력하세요. :";
	cin >> output_money;
	for (int i = 0; i < NUM; i++)
	{
		if (search_name.compare(acc[i].name) == 0)
		{
			acc[i].money -= output_money;
			if (acc[i].money < 0)
			{
				cout << "금액이 부족합니다.\n";
				acc[i].money += output_money;
			}
		}
	}
}
void checking(account acc[], int acc_num)
{
	string search_name;
	cout << "등록된 계좌의 이름을 입력하세요. :";
	cin >> search_name;
	for (int i = 0; i < NUM; i++)
	{
		if (search_name.compare(acc[i].name) == 0)
		{
			cout << "-------------------\n";
			cout << "번호 : " << acc_num + 1 << endl;
			cout << "이름 : " << acc[i].name << endl;
			cout << "번호 : " << acc[i].cell << endl;
			cout << "잔액 : " << acc[i].money << endl;
		}
	}
}

int main()
{
	account acc[NUM];
	int option;
	int acc_num = 0;

	cout << "1. 계좌생성  2. 입금  3. 출금  4. 잔액조회  5. 종료\n";
	while (1)
	{
		cout << "기능을 선택하시오.";
		cin >> option;
		switch (option)
		{
		case 1:
			if (acc_num >= 5)
			{
				cout << "더이상 계좌를 생성할 수 없습니다.\n";
				break;
			}
			create(acc, acc_num);
			acc_num++;
			break;
		case 2:
			input(acc);
			break;
		case 3:
			output(acc);
			break;
		case 4:
			checking(acc, acc_num);
			break;
		case 5:
			return 0;
		default:
			cout << "잘못된 입력입니다.\n";
			return 0;
		}
	}

}*/
/*수업 예제
#include <iostream>
using namespace std;

struct namecard {
	char name[20];
	char job[30];
	char tel[20];
	char email[40];
};
void print(struct namecard* man)
{
	cout << (man + 1)->name;
}

void main()
{
	namecard man[3] = { { "김주현","MCSE전문강사","418-9876","freentour@naver,com" } ,
		{ "박혜경","웹마스터","551-6986","hk@naver.com" },{ "김동식","기획A팀대리","318-3961","ds@naver.com" } };

	cout << "\n입력받은 데이터를 출력합니다. ";
	cout << "\n 이름 \t 직업 \t\t 연락처 \t 이메일 ";
	cout << "\n===========================================";
	for(int i=0;i<3;i++)
		cout << "\n " << man[i].name << "\t" << man[i].job << "\t" << man[i].tel << "\t" <<man[i].email;
	cout << "\n===========================================";
	print(man);
}*/
/*수업예제 배열 함수사용
#include <iostream>
using namespace std;

struct namecard {
	char name[20];
	char job[30];
	char tel[20];
	char email[40];
};

namecard structInput()
{
	namecard temp;
	cout << "\n이름을 입력하세요.=>";
	cin >> temp.name;
	cout << "직업을 입력하세요.=>";
	cin >> temp.job;
	cout << "연락처을 입력하세요.=>";
	cin >> temp.tel;
	cout << "이메일을 입력하세요.=>";
	cin >> temp.email;

	return temp;
}

void structPrn(namecard temp)
{
	cout << "\n " <<temp.name << "\t" << temp.job << "\t" <<temp.tel << "\t" << temp.email;
}
void main()
{
	namecard x[3];
	for (int i = 0;i < 3;i++)
		x[i] = structInput();

	cout << "\n입력받은 데이터를 출력합니다. ";
	cout << "\n 이름 \t 직업 \t\t 연락처 \t 이메일 ";
	cout << "\n===========================================";
	for (int i = 0;i < 3;i++)
		structPrn(x[i]);
	cout << "\n===========================================";
}*/
/*수업예제 포인터
#include <iostream>
using namespace std;

struct namecard {
	char name[20];
	char job[30];
	char tel[20];
	char email[40];
};

void main()
{
	namecard x[2] = { { "전수빈","치과의사","356-0868","eldy@naver.com" }, { "전원지","디자이너","345-0876","onejee@naver.com" } };
	namecard* p;

	p = x;
	cout << "\n입력받은 데이터를 출력합니다. ";
	cout << "\n 이름 \t 직업 \t\t 연락처 \t 이메일 ";
	cout << "\n===========================================";
	for(int i=0;i<2;i++)
		cout << "\n " << (p + i)->name << "\t" << (p + i)->job << "\t" << (p + i)->tel << "\t" << (p + i)->email;
	cout << "\n===========================================";
}*/