#include <iostream> //cpp standard
#include <conio.h> //c standard

using namespace std;

int World[100][100] =
{
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
	{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};

bool bIsRunning = true;

int PlayerX = 1;
int PlayerY = 1;
char PlayerShape = 'P';

// 사상(Mapping)
char Sprites[10] = { ' ', '*', };

int KeyCode;

void Input()
{
	//Input
	KeyCode = _getch();
}

void Process()
{
	//Process
	if (KeyCode == 'w')
	{
		PlayerY--;
	}
	else if (KeyCode == 's')
	{
		PlayerY++;
	}
	else if (KeyCode == 'a')
	{
		PlayerX--;
	}
	else if (KeyCode == 'd')
	{
		PlayerX++;
	}
	else if (KeyCode == 'q')
	{
		bIsRunning = false;
	}
}

void Render()
{
	//Render();
	// 화면에 출력->누가 해줄까?->OS->BIOS->firmware
	system("cls");
	for (int Y = 0; Y < 10; ++Y)
	{
		for (int X = 0; X < 10; ++X)
		{
			if (PlayerX == X && PlayerY == Y)
			{
				cout << PlayerShape;
			}
			else //other
			{
				cout << Sprites[World[Y][X]];
			}

		}
		cout << endl;
	}
}


int main()
{
	//frame, deltaseconds
	while (bIsRunning)
	{
		Input();
		Process();
		Render();
	}

	return 0;
}
/*	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << "\n";
	}*/