#include <iostream>
#include <vector>
using namespace std;

//m*w的网格，每个格子中间放蛋糕，但是每个蛋糕的距离不能等于2。
void M_cake()
{
	int m;//长(列)
	int w;//宽(行)
	cin >>m >> w;
	int M_num = 0;

	vector<vector<int>> dp;
	dp.resize(w);//dp有w行

	for (auto& dq : dp)
	{
		dq.resize(m, 0);//每个小vector有m列，即w*m的二维数组(初始化为0)
	}

	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (dp[i][j] == 0)
			{
				M_num++;

				//与这一行距离是2的行不能有蛋糕
				if (i + 2 < w)
				{
					dp[i + 2][j] = 1;
				}

				//与这一列距离是2的列不能有蛋糕
				if (j + 2 < m)
				{
					dp[i][j + 2] = 1;
				}
			}
		}
	}
	//0表示有蛋糕，1表示没有蛋糕
	cout << M_num << endl;
}

int main1()
{
	M_cake();

	system("pause");
	return 0;
}