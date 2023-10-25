#include "ui.h"
#include "Dimension.h"

 
float WindowsSize();
	
int main()
{
	
	
	
	bool bQuitGame = false;
	bool HasClicked = false;
	float Antimater = 0;
	ui ui1;

	Dimension dimension;
	
	
	ui1.CreateHud(Antimater);

	while (!bQuitGame)
	{

	
		
			
		if ((GetKeyState(VK_LBUTTON) & 0x8000) != 0 && !HasClicked )
		{

			Antimater = Antimater + 1;
			HasClicked = true;
			system("cls");
			ui1.CreateHud(Antimater);
			
			
		;
		}

		else if(HasClicked && (GetKeyState(VK_LBUTTON) & 0x8000) == 0)
		{
			HasClicked = false;
		}



		Sleep(500);
		
		std::cout << WindowsSize() << std::endl;
		
	}


}


float WindowsSize()
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	int columns, rows;
	float x;
	float y;
	float x1;
	POINT MousePoint;


	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
	columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
	rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;

	printf("columns: %d\n", columns);
	printf("rows: %d\n", rows);

	
	POINT p;
	if (GetCursorPos(&p))
	{
		x1 = static_cast<float>(p.x) / (columns - 1);

		std::cout << x1;
	}

	x = ((1 - 0) / (columns - 0)) * (columns - columns);
	x = 1.00 / columns * columns;

	return x;

}

