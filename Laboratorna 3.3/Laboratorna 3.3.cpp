// Lab_03_3.cpp
// �������� �������
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 2
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
    double R; // ������� ��������
	double y; // ��������� ���������� ������
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// ������������ � ����� ����
	if (x <= -R)
		y = -8;
	else
		if (x > -R && x <= 0)
			y = (8 / R) * x - 8;
		else
			if (x > 0 && x <= R)
				y = -sqrt(R * R - x * x) - R;
			else
				if (x > R && x <= 5)
	      y = (3 / (5 - R)) * (x - R);
				else
				y = 3;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}