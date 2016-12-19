/*
	�� �������� �ð��� �ſ� ���� �ɷ���.

	������ ���ǿ� �����ϴ� ��� ����� ���� �������� �ʾұ� ����.

	����, ó�� �����ϰ� �ʹٸ� �� �Ʒ��� �ִ� �ּ��� �ݵ�� ����� ������ ��.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int input;
	cin >> input;
	while (input--) {
		double x1, y1, x2, y2, r1, r2;
		double target, tmp, big_rad, low_rad;
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		tmp = sqrt(abs(pow(x1 - x2, 2.0) + pow(y1 - y2, 2.0)));
		target = (r1 + r2);
		if (x1 == x2 && y1 == y2)
			if (r1 == r2)
				cout << -1 << endl;
			else
				cout << 0 << endl;
		else if (tmp == target)
			cout << 1 << endl;
		else if (tmp > target)
			cout << 0 << endl;
		else {
			big_rad = (r1 > r2) ? r1 : r2;
			low_rad = (r1 > r2) ? r2 : r1;
			if (tmp + low_rad == big_rad)
				cout << 1 << endl;
			else if (tmp + low_rad < big_rad)
				cout << 0 << endl;
			else
				cout << 2 << endl;
		}
	}
	return 0;
}

/*
	1. �� ���� ������ �Ÿ��� ������ r1, r2�� �հ� ���� ��,
	2. �� ���� ������ ���� ��ġ�ϸ鼭 �������� ���̵� ���� ��, (��ġ)
	3. �� ���� ������ ���� ��ġ������ �������� ���̰� ���� �ٸ� ��, (�Ҵ�)
	4. �� ���� �������� ���� �� ���� ������ �Ÿ����� Ŭ ��,
	5. �� ���� �������� ���� �� ���� ������ �Ÿ����� �����鼭 �� ���� �ٸ� ������ ���� ��,
	6. �� ���� �������� ū �� �ȿ� �ٸ� �� ���� ���� ���� ���� ��,
*/