//Walter Michelin 6 March 2014
#include <iostream>

using namespace std;

void rotateCW(int (&matrix)[5][5])
{
	int temp[5][5];


	int x = 4;
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			temp[j][x] = matrix[i][j];
		}
		x--;
	}
	
	for(int i = 0; i < 5; i++)
	{
		cout << "[";
		for(int j = 0; j < 5; j++)
		{
			matrix[i][j] = temp [i][j];
			if(j != 0)
				cout << "[";
			cout << matrix[i][j] << "]";
			if(j != 4)
				cout << ",";
		}
		cout << endl;
	}

}

void rotateCCW(int (&matrix)[5][5])
{
	int temp[5][5];
	int x = 0;
	int y = 4;
	for(int i = 0; i < 5; i++)
	{
		x = 0;
		for(int j = 0; j < 5; j++)
		{
			temp[i][j] = matrix[x][y];
			x++;
		}
		y--;
	}

	for(int i = 0; i < 5; i++)
	{
		cout << "[";
		for(int j = 0; j < 5; j++)
		{
			matrix[i][j] = temp [i][j];
			if(j != 0)
				cout << "[";
			cout << matrix[i][j] << "]";
			if(j != 4)
				cout << ",";
		}
		cout << endl;
	}




}
int main()
{

	int matrix[5][5] = {{1, 2, 3, 4, 5},
						{6, 7, 8, 9, 10},
						{11, 12, 13, 14, 15},
						{16, 17, 18, 19, 20},
						{21, 22, 23, 24, 25}};

	cout << "original matrix!" << endl;

	for(int i = 0; i < 5; i++)
	{
		cout << "[";
		for(int j = 0; j < 5; j++)
		{
			if(j != 0)
				cout << "[";
			cout << matrix[i][j] << "]";
			if(j != 4)
				cout << ",";
		}
		cout << endl;
	}

	// cout << "DEBUGGING? " << endl;
	// cout << matrix[1][2];
	cout << "one rotation! " << endl;
	rotateCW(matrix);
	cout << "two rotations!" << endl;
	rotateCW(matrix);
	cout << "three rotations!" << endl;
	rotateCW(matrix);
	cout << "now counter clock wise!" << endl;
	rotateCCW(matrix);
	cout << "counter clock wise again!" << endl;
	rotateCCW(matrix);
	cout << "one more time!" << endl;
	rotateCCW(matrix);

	cout << "back to normal\nbye!" << endl;

	return 0;
}


