#include <iostream>
using namespace std;
int main()
{
	int i, j;
	int n, m;
	int tempmax=-1000,tempmin=1000;
	int minposition;
	int maxposition;
	cout << "Input n=";
	cin >> n;
	cout << endl;
	cout << "Input m=";
	cin >> m;
	cout << endl;
	int** b=new int*[n]; //
	int** a = new int* [n];
	for (i = 0; i < n; i++)
	{
		a[i] = new int[m];
		for (j = 0; j < m; j++)
		{
			cout << "Input element a[" << i << "][" << j << "]";
			cin >> a[i][j];
			cout << endl;
		}
	}
	//print matrix
	cout << "Your matrix:" << endl;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	for (i = 0; i < n; i++) {
		b[i] = new int[m];
		for (j = 0; j < m; j++) {
			b[i][j]=a[i][j];
		}
	}
	//////////////
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <m; j++)
		{
			if (tempmax < a[i][j])
			{
				tempmax = a[i][j];
				maxposition = i;
			}
			if (tempmin > a[i][j])
			{
				tempmin = a[i][j];
				minposition = j;
			}
		}
	}
	//
	for (j = 0; j <n; j++) {
		for (i = 0; i < m; i++)
		{
			b[i][minposition] = a[maxposition][j];
			b[maxposition][j] = a[i][minposition];

		}
	}
	//
	cout << "Your matrix:" << endl;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cout << b[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}