#include "ui.h"
#include "Dimension.h"

int WindowsSize() 
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	int columns, rows;

	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
	columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
	rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;

	printf("columns: %d\n", columns);
	printf("rows: %d\n", rows);

	return columns;

}


void input()
{

}
	


int main()
{
	
	
	
	bool bQuitGame = false;
	bool HasClicked = false;
	float Antimater = 0;
	ui ui1;

	Dimension dimension;
	POINT MousePoint;
	
	ui1.CreateHud(Antimater);

	while (!bQuitGame)
	{


		if ((GetKeyState('S') & 0x8000) != 0)
		{
			
		}

		
			
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



		//if (GetCursorPos(&MousePoint)) {
		//	system("cls");
		//	ui1.CreateHud(Antimater);
		//	std::cout << MousePoint.x << "," << MousePoint.y << "\n";
		//}
	}


}



