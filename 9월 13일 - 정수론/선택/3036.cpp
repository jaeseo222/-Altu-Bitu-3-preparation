#include<iostream>
using namespace std;

// ��Ŭ���� ȣ����
int gcd(int a, int b) {
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}
/*
* [��]
* �� ���� ������ ��� �м� ���� A/B�� ���
* -> ��� �м��� ���ϱ� ����, �� ���� �ִ������� ���Ͽ� ��������.
*/
int main() {
	int n, a, b;

	// �Է�
	cin >> n >> a;
	while (n--) {
		if (n < 1) break;
		cin >> b;

		// ���� + ���
		int g = gcd(a, b);
		cout << a / g << "/" << b / g << "\n";
	}
}