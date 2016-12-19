/*
	이 문제에서 시간이 매우 오래 걸렸음.

	이유는 조건에 만족하는 모든 경우의 수를 생각하지 않았기 떄문.

	만약, 처음 도전하고 싶다면 맨 아래에 있는 주석을 반드시 지우고 시작할 것.
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
	1. 두 개의 원점의 거리가 반지름 r1, r2의 합과 같을 때,
	2. 두 개의 원점이 서로 일치하면서 반지름의 길이도 같을 때, (일치)
	3. 두 개의 원점이 서로 일치하지만 반지름의 길이가 서로 다를 때, (불능)
	4. 두 개의 반지름의 합이 두 원점 사이의 거리보다 클 때,
	5. 두 개의 반지름의 합이 두 원점 사이의 거리보다 작으면서 두 원이 다른 공간에 있을 때,
	6. 한 개의 반지름이 큰 원 안에 다른 한 개의 작은 원이 있을 때,
*/