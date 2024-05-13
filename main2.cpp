#include <iostream>

using namespace std;

int main()
{
	int Map[10][10] =
	{
		{1,1,1,1,1,1,1,1,1,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1,1,1},
	};
	
	int PlayerX = 1;
	int PlayerY = 1;
	int Key = 0;

	cin >> Key;//wasd

	for (;;)
	{
		if (Key == 'w')
		{
			PlayerY--;
		}
		if (Key == 's')
		{
			PlayerY--;
		}
		if (Key == 'a')
		{
			PlayerX--;
		}
		if (Key == 'd')
		{
			PlayerX++;
		}

		system("cls");
		for (int Y = 0; Y < 10; ++Y)
		{
			for (int X = 0; X < 10; ++X)
			{
				if (PlayerX == X && PlayerY == Y)
				{
					cout << "P";
				}
				else if (Map[Y][X] == 1)
					cout << "@";
				else if (Map[Y][X] == 0)
					cout << " ";
			}
			cout << endl;
		}
	}
	//GameLoop : 입력, 처리, 출력
	//for (;;) // 이게 Frame, 60FPS
	//{
	//	Input();
	//	//Process(); : 언리얼에서는 Tick();
	//	Render();
	//}

	return 0;
}