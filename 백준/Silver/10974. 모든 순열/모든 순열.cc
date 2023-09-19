#include <bits/stdc++.h>
using namespace std;

int n;
bool visited[9] = {false,};

void solution(int cnt,vector<int> result) {
	if (cnt == n) {
		for (int i = 0; i < cnt; i++) {
			cout << result[i] << ' ';
		}
		cout << '\n';
		return;
	}
	for (int i = 1; i <= n; i++) {
		if (visited[i]) continue;
		visited[i] = true;
		result[cnt] = i;
		solution(cnt + 1,result);
		visited[i] = false;

	}
}
void Answer(){
	cin >> n;
	vector<int> result(n);
	solution(0,result);
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Answer();

	return 0;
}