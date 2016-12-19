#include <iostream>
using namespace std;

class info {
public:
	char name[20];
	int birth[3];
	void input();
};

int main() {
	int N, idx_high = 0, idx_low = 0;
	scanf("%d", &N);
	info * student = new info[N];
	for(int i=0; i<N; i++)
		student[i].input();
	for (int i = 0; i < N - 1; i++) {
		for (int j = i + 1; j < N; j++) {
			info temp;
			if (student[i].birth[2] == student[j].birth[2]) {
				if (student[i].birth[1] == student[j].birth[1]) {
					if (student[i].birth[0] > student[j].birth[0]) {
						temp = student[i];
						student[i] = student[j];
						student[j] = temp;
					}
				}
				else if (student[i].birth[1] > student[j].birth[1]) {
					temp = student[i];
					student[i] = student[j];
					student[j] = temp;
				}
			}
			else if (student[i].birth[2] > student[j].birth[2]) {
				temp = student[i];
				student[i] = student[j];
				student[j] = temp;
			}
		}
	}
	printf("%s\n", student[N - 1].name);
	printf("%s\n", student[0].name);
	delete[] student;
	return 0;
}

void info::input() {
	scanf("%s %d %d %d", this->name, &birth[0], &birth[1], &birth[2]);
}