#include <iostream>

using namespace std;

int main()
{
	int N = 0;
	cin >> N;


	for (int Line = 1; Line <= N; ++Line)
	{
		for (int Count = N-1; Count >= Line; --Count)
		{
			cout << " ";
		}
		for (int Count = 1; Count <= Line; ++Count)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}
//int Pixel[10] = { 1,2,3,4,5,6,7,8,9,10 };
//cout << Pixel[1] << endl;
//i++
//i--
//++i
//--i
//cout << *(Pixel+1) << endl;
/*int Screen[8][8] =
{ 1, 1, 1, 1, 1, 1, 1, 1 },
{ 1, 0, 0, 0, 0, 0, 0, 1 },
{ 1, 0, 0, 0, 0, 0, 0, 1 },
{ 1, 0, 0, 0, 0, 0, 0, 1 },
{ 1, 0, 0, 0, 0, 0, 0, 1 },
{ 1, 0, 0, 0, 0, 0, 0, 1 },
{ 1, 0, 0, 0, 0, 0, 0, 1 },
{ 1, 1, 1, 1, 1, 1, 1, 1 };

int PlayerX = 1;
int PLayerY = 2;

//다중 for문 (3중 for문은 웬만하면 안씀 2중으로 바꿈)
for (int Y = 0; Y < 8; Y++)
{
	for (int X = 0; X < 8; X++)
	{
		if (Screen[Y][X] == 0)
		{
			cout << " ";
		}
		if (Screen[Y][X] == 1)
		{
			cout << "*";
		}
	}
}

for (int i = 0; i < 10; i += 2)
	cout << i << endl;
	*/

	/*int Korean[22] = {0,};
	int Mathmatics[22] = { 0, };
	int English[22] = { 0, };


	//int Total = Korean + Mathmatics + English;
	//float Average = (float)Total / 3.0f;
	int Total[22] = { 0, };
	float Average = (int)Total;

	for (int i = 0; i < 22; i++)
	{

	}


	int Temp = (int)Average;
*/


/*
1. 자료형
int
float
bool
char

2. 변수 = 메모리 공간
int 변수이름;
ex) int Number =0;

3. 여러개 변수 = 배열 = Array
int 변수명[크기] = {0,};

4. 제어문
if(조건식)
{
}
else
{
}

*/