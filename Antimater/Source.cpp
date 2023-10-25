#include "ui.h"
#include "Dimension.h"

void GetWindowPos(int* x, int* y);
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
		
		WindowsSize();

		//std::cout << WindowsSize() << std::endl;
		
	}


}


void GetWindowPos(int* x, int* y) {
	RECT rect = { NULL };
	if (GetWindowRect(GetConsoleWindow(), &rect)) {
		*x = rect.left;
		*y = rect.top;
	}
}

float WindowsSize()
{
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	int columns, rows;
	float x;
	float y;
	int windowX;
	int windowY;
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
		GetWindowPos(&windowX, &windowY);
		std::cout << "x: " << p.x - windowX - 8 << "y: " << p.y - windowY -31<< std::endl;

	}



	

	return columns;

}

