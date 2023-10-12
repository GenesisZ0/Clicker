#include "ui.h"


void ui::CreateCube(int NumberOfCube, int taileVertcale, int tailleHorizontale, float Antimater)
{


	for (size_t i = 0; i < tailleHorizontale; i++)
	{
		std::cout << "-";


	}
	for (size_t i = 0; i < NumberOfCube; i++)
	{
		std::cout << "         ";
		for (size_t i = 0; i < tailleHorizontale; i++)
		{
			std::cout << "-";


		}
	}


		std::cout << std::endl;


		
		for (size_t i = 0; i < 2; i++)
		{
			std::cout << "|     " << Antimater << std::endl;

		}
		
		
	
	
		for (size_t i = 0; i < tailleHorizontale; i++)
		{
			std::cout << "-";

		}

		for (size_t i = 0; i < NumberOfCube; i++)
		{
			std::cout << "         ";

			for (size_t i = 0; i < tailleHorizontale; i++)
			{
				std::cout << "-";

			}
		}
		std::cout << std::endl;

		return;
	}


void ui::CreateHud(float Antimater)
{
	CreateCube(0,2,11,Antimater);
	for (size_t i = 0; i < 5; i++)
	{
		std::cout << std::endl;
	}

	CreateCube(2,2, 11, Antimater);

}
