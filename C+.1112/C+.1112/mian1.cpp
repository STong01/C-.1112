#include <iostream>
#include <vector>
using namespace std;

//m*w������ÿ�������м�ŵ��⣬����ÿ������ľ��벻�ܵ���2��
void M_cake()
{
	int m;//��(��)
	int w;//��(��)
	cin >>m >> w;
	int M_num = 0;

	vector<vector<int>> dp;
	dp.resize(w);//dp��w��

	for (auto& dq : dp)
	{
		dq.resize(m, 0);//ÿ��Сvector��m�У���w*m�Ķ�ά����(��ʼ��Ϊ0)
	}

	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (dp[i][j] == 0)
			{
				M_num++;

				//����һ�о�����2���в����е���
				if (i + 2 < w)
				{
					dp[i + 2][j] = 1;
				}

				//����һ�о�����2���в����е���
				if (j + 2 < m)
				{
					dp[i][j + 2] = 1;
				}
			}
		}
	}
	//0��ʾ�е��⣬1��ʾû�е���
	cout << M_num << endl;
}

int main1()
{
	M_cake();

	system("pause");
	return 0;
}