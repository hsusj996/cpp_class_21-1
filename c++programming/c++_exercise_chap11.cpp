/*1��
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

	cout << "�� �� ������ �Ÿ��� " << d << "�Դϴ�.\n";
}

void main()
{
	point a, b;

	cout << "���� ��ǥ�� �Է��Ͻÿ�. <x y>:";
	cin >> a.x >> a.y;
	cout << "���� ��ǥ�� �Է��Ͻÿ�. <x y>:";
	cin >> b.x >> b.y;

	res(a, b);
}*/
/*2��
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

	cout << "���� a�� �Է��Ͻÿ�.";
	cin >> a.x >> a.y;
	cout << "���� b�� �Է��Ͻÿ�.";
	cin >> b.x >> b.y;

	res = get_vector_sum(a, b);
	cout << "������ ���� <" << res.x << ", " << res.y << ">�Դϴ�.\n";
}*/
/*3��
#include <iostream>
using namespace std;

typedef struct
{
	int x;
	int y;
}POINT;

void translate(POINT a, int shift_x, int shift_y)
{
	cout << "���ο� ���� ��ǥ��<" << a.x + shift_x << ", " << a.y + shift_y << ">�Դϴ�.\n";
}

void main()
{
	POINT a;
	int shift_x, shift_y;
	cout << "��ǥ�� �Է��Ͻÿ�.";
	cin >> a.x >> a.y;
	cout << "�̵��� �Ÿ��� �Է��Ͻÿ�.";
	cin >> shift_x >> shift_y;

	translate(a, shift_x, shift_y);
}*/
/*4��
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
	cout << "���� : " << abs(p1.x - p2.x) * abs(p1.y - p2.y);
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
/*5��
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
	cout << "��ȣ ���� ���� ���� ����   ���   ����\n";
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

	cout << "�л��� ������ �Է��ϼ���.\n";
	for (int i = 0; i < NUM; i++)
	{
		cout << i + 1 << "��° ���� ���� ���� :";
		cin >> stu[i].kor >> stu[i].eng >> stu[i].mat;
		stu[i].total = total(stu[i]);
		stu[i].avg = avg(stu[i]);
		stu[i].hakjum = hakjum(stu[i]);
	}

	print(stu);
}*/
/*6��
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
	cout << "  �޿��� " << salary_avg << "����<���> �̻��� ���� ����\n";
	cout << "----------------------------------------\n";
	for (int i = 0; i < NUM; i++)
	{
		if (a[i].salary >= salary_avg)
		{
			cout << "          " << a[i].id;
			cout << "          " << a[i].salary << "����\n";
		}
	}
	cout << "----------------------------------------\n";
}

void main()
{
	employee a[NUM];

	cout << ">> ������ ����<�̸�, ID, �޿�>�� �Է��ϼ���. <<\n";
	
	for (int i = 0; i < NUM; i++)
	{
		cout << i << "��:";
		cin >> a[i].name >> a[i].id >> a[i].salary;
	}
	up_avg(a);

}*/
/*7��
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
	cout << "�ִ� 100���� ����� ������ �Է¹ް� ����մϴ�.\n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << i + 1 << ". �̸���? ";
		cin >> info[i].name;
		cout << "������<�� �Ǵ� ��>? ";
		cin >> info[i].gender;
		cout << "���̴�? ";
		cin >> info[i].age;

		cout << "��� �Է��Ϸ��� 1, �׸��Ϸ��� 0�� �Է��ϼ���. ";
		cin >> n;
		if (n == 0)
			break;
	}
}
void print(person* info)
{
	cout << " �̸�   ����    ����\n";
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
/*8��
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
		cout << ">> �����ȣ? ";
		cin >> a[i].employee_num;
		cout << ">>�̸�? ";
		cin >> a[i].name;
		cout << ">>�ڳ��? ";
		cin >> a[i].child_num;
		cout << ">>�⺻��? ";
		cin >> a[i].salary;
	}
}
void print(info a[])
{
	int fin_salary[SIZE];
	int max = 0, max_index;
	cout << "�����ȣ  �̸�        �⺻��          �ڳ��    �ڳ����   �޿�\n";
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
		cout << setw(10) << a[i].salary << "��";
		cout << setw(10) << a[i].child_num << "��";
		cout << setw(10) << (a[i].child_num)*100000 << "��";
		cout << setw(10) << fin_salary[i] << "��\n";
	}
	cout << "�ְ� �޿���: " << a[max_index].name << " " << max << "��\n";
}
void main()
{
	info a[SIZE];
	input(a);
	print(a);

}*/
/*9��
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
	cout << "���¸�   ����  ���\n";
	cout << "---------------------------\n";
	for (int i = 0; i < 5; i++)
		cout << setw(6) << a[i].name << setw(5) << a[i].hakjum << setw(5) << a[i].grade << endl;
	cout << "---------------------------\n";

	cout << setw(12) << "���� " << res_score << endl;
}

void main()
{
	subject a[5] = { {"�۾���",2,"A0"},{"����",3,"B+"},{"ü��",2,"A0"},{"ȸȭ",2,"B0"},{"c���",3,"A+"} };
	double res_score;

	res_score = score(a);

	print(a, res_score);
}*/
/*10��
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
		cout << "�̸��� �Է��Ͻÿ�.:";
		cin >> a[i].name;
		cout << "����ȭ��ȣ�� �Է��Ͻÿ�.:";
		cin >> a[i].home;
		cout << "�޴�����ȣ�� �Է��Ͻÿ�.:";
		cin >> a[i].cell;
	}
}
void search(info a[])
{
	string search_name;
	cout << "�˻��� �̸��� �Է��Ͻÿ�.";
	cin >> search_name;

	for (int i = 0; i < 3; i++)
	{
		if (search_name.compare(a[i].name) == 0)
		{
			cout << "����ȭ��ȣ : " << a[i].home << endl;
			cout << "�޴�����ȣ : " << a[i].cell << endl;
		}
	}
}

void main()
{
	info a[3];

	input(a);
	search(a);
}*/
/*11��
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
	cout << "�̸� :";
	cin >> acc[acc_num].name;
	cout << "��ȭ��ȣ :";
	cin >> acc[acc_num].cell;
	cout << "�ݾ� :";
	cin >> acc[acc_num].money;
}
void input(account acc[])
{
	string search_name;
	int input_money;
	cout << "��ϵ� ������ �̸��� �Է��ϼ���. :";
	cin >> search_name;
	cout << "�Է��� �ݾ��� �Է��ϼ���. :";
	cin >> input_money;
	for (int i = 0; i < NUM; i++)
		if (search_name.compare(acc[i].name) == 0)
			acc[i].money += input_money;
}
void output(account acc[])
{
	string search_name;
	int output_money;
	cout << "��ϵ� ������ �̸��� �Է��ϼ���. :";
	cin >> search_name;
	cout << "����� �ݾ��� �Է��ϼ���. :";
	cin >> output_money;
	for (int i = 0; i < NUM; i++)
	{
		if (search_name.compare(acc[i].name) == 0)
		{
			acc[i].money -= output_money;
			if (acc[i].money < 0)
			{
				cout << "�ݾ��� �����մϴ�.\n";
				acc[i].money += output_money;
			}
		}
	}
}
void checking(account acc[], int acc_num)
{
	string search_name;
	cout << "��ϵ� ������ �̸��� �Է��ϼ���. :";
	cin >> search_name;
	for (int i = 0; i < NUM; i++)
	{
		if (search_name.compare(acc[i].name) == 0)
		{
			cout << "-------------------\n";
			cout << "��ȣ : " << acc_num + 1 << endl;
			cout << "�̸� : " << acc[i].name << endl;
			cout << "��ȣ : " << acc[i].cell << endl;
			cout << "�ܾ� : " << acc[i].money << endl;
		}
	}
}

int main()
{
	account acc[NUM];
	int option;
	int acc_num = 0;

	cout << "1. ���»���  2. �Ա�  3. ���  4. �ܾ���ȸ  5. ����\n";
	while (1)
	{
		cout << "����� �����Ͻÿ�.";
		cin >> option;
		switch (option)
		{
		case 1:
			if (acc_num >= 5)
			{
				cout << "���̻� ���¸� ������ �� �����ϴ�.\n";
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
			cout << "�߸��� �Է��Դϴ�.\n";
			return 0;
		}
	}

}*/
/*���� ����
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
	namecard man[3] = { { "������","MCSE��������","418-9876","freentour@naver,com" } ,
		{ "������","��������","551-6986","hk@naver.com" },{ "�赿��","��ȹA���븮","318-3961","ds@naver.com" } };

	cout << "\n�Է¹��� �����͸� ����մϴ�. ";
	cout << "\n �̸� \t ���� \t\t ����ó \t �̸��� ";
	cout << "\n===========================================";
	for(int i=0;i<3;i++)
		cout << "\n " << man[i].name << "\t" << man[i].job << "\t" << man[i].tel << "\t" <<man[i].email;
	cout << "\n===========================================";
	print(man);
}*/
/*�������� �迭 �Լ����
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
	cout << "\n�̸��� �Է��ϼ���.=>";
	cin >> temp.name;
	cout << "������ �Է��ϼ���.=>";
	cin >> temp.job;
	cout << "����ó�� �Է��ϼ���.=>";
	cin >> temp.tel;
	cout << "�̸����� �Է��ϼ���.=>";
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

	cout << "\n�Է¹��� �����͸� ����մϴ�. ";
	cout << "\n �̸� \t ���� \t\t ����ó \t �̸��� ";
	cout << "\n===========================================";
	for (int i = 0;i < 3;i++)
		structPrn(x[i]);
	cout << "\n===========================================";
}*/
/*�������� ������
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
	namecard x[2] = { { "������","ġ���ǻ�","356-0868","eldy@naver.com" }, { "������","�����̳�","345-0876","onejee@naver.com" } };
	namecard* p;

	p = x;
	cout << "\n�Է¹��� �����͸� ����մϴ�. ";
	cout << "\n �̸� \t ���� \t\t ����ó \t �̸��� ";
	cout << "\n===========================================";
	for(int i=0;i<2;i++)
		cout << "\n " << (p + i)->name << "\t" << (p + i)->job << "\t" << (p + i)->tel << "\t" << (p + i)->email;
	cout << "\n===========================================";
}*/