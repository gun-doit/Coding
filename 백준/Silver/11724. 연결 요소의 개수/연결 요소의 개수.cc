#include <iostream>
#define MAX 1001

using namespace std;

int Check[MAX] = { 0 };
int Link[MAX][MAX] = { 0 };

// 1. DFS
bool Dfs(int num)
{
	if (!Check[num])
	{
		Check[num] = 1;
		for (int i = 1; i < MAX; i++)
		{
			if (Link[num][i])
				Dfs(i);
		}
	}
	return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	int a, b;
	cin >> a >> b;

	for (int i = 0; i < b; i++)
	{
		int p1, p2;
		cin >> p1 >> p2;

		// 문제 조건이 방향성을 따지지 않는다고 함
		Link[p1][p2] = 1;
		Link[p2][p1] = 1;
	}

	int result = 0;

	for (int i = 1; i <= a; i++)
	{
		if (Check[i] == 0)
		{
			Dfs(i);
			result++;
		}
	}

	cout << result;

	return 0;
}

// 경로를 찾는 문제는 DFS, BFS가 아닐지 한번 고민해보자.