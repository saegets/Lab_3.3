// Lab_03_3.cpp
// ������������ ������
// ����������� ������ No 3.3
// ������������, ������ �������� �������.
// ������ 3

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x; // ������� ��������
	double R; // ������� ��������
	double y; // ��������� ���������� ������
	double Pi = 4 * atan(1.0);
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	
	// ������������ � ����� ����
	if (x < (-7 - R))
		y = R;

	else
		if (x >= (-7 + R) && x <= (-4))
			y = R;
		else
			if ( x >= (-7 - R) && x <= (-7 + R))
			y = sqrt(pow(R, 2) - pow(x, 2) - 14 * x - 49);
		else
			if (x > (-4) && x < 0)
				y = (R * (8 + x)) / 4;

			else 
				if (x >= 0 && x < Pi)
					y = sin(x);
				else
					y = 1 * x - Pi;
		

	cout << endl;
	cout << "y = " << y << endl;

	cin.get();

	return 0;
}