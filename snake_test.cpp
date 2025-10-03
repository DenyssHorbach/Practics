#include <iostream>;
#include <windows.h>

using namespace std;


const int width = 40;
const int height = 20;


static void game_field() {
	system("cls");
	for (int i = 0; i < width+2; i++)
	{
		cout << "#";
	}
	cout << "\n";
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j <= width; j++)
		{
			if (j == 0)
			{
				cout << "#";
			}

			else
			{
				cout << " ";
			}

			if (j == width)
			{
				cout << "#";
			}
		}
		cout << "\n";
		
	}
	for (int i = 0; i < width+2; i++)
	{
		cout << "#";
	}
}

int main() {

	while (true) {
		game_field();
	}
	return 0;
}
