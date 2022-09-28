/*
* Ư�� ������ �����ϰ�(��� ����� �ɻ縦 �޴´�) �ּҰ��� ���ϴ� ���� -> �Ķ���� Ž��,.,??
* ��� ����� �ɻ縦 �޴´ٴ� ������ �����Ѵٴ� ���� ��� ǥ��,,,,???
*/

/*
* ó���� time ���� �� int�� �ϰ� ����� �� ���� �� mid �� people�� long long ���� �ߴ��� ������
* ã�ƺ��ϱ� ����ó�� �ڷ��� �� �ٸ��� �ϸ� �����÷ο� �����Ѥ�...? �� �� long long���� �ߴ��� ����...����
*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;



long long parametricSearch(long long left, long long right, int n, int m,vector<long long>& time) {

	long long answer = 0;

	while (left <= right) {

		long long mid = (left + right)/2;
		long long people = 0;

		for (int i = 0; i < n; i++) {
			people += mid / time[i];
		}

		if (people < m) {
			left = mid + 1;
		}
		else {
			answer = mid;
			right = mid - 1;
			
		}
		
	}

	return answer;
	
}

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<long long> time(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> time[i];
	}
	sort(time.begin(), time.end());
	
	long long max_time = time[n-1] * m;
	cout << parametricSearch(1, max_time, n, m, time);
	
	return 0;
}