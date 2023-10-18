#include "ui.h"


void ui::CreateCube(int NumberOfCube, int taileVertcale, int tailleHorizontale, std :: string TextToWrite)
{
	bool  bHisWrite = false;
	bool TextIsWrite = false;
	int espacement = 6;
	int Text = 0;
	

	for (size_t i = 0; i < tailleHorizontale; i++)
	{
		std::cout << "-";

		
	}
	for (size_t i = 0; i < NumberOfCube; i++)
	{

		for (size_t i = 0; i < espacement; i++)
		{
			std::cout << " ";
		}
		
		for (size_t i = 0; i < tailleHorizontale; i++)
		{
			std::cout << "-";


		}
	}


		std::cout << std::endl;


		for (size_t i = 0; i < taileVertcale; i++)
		{

			for (size_t i = 0; i < NumberOfCube+1 ; i++)
			{
				
				std::cout << "|";
				bHisWrite = false;
				if (!TextIsWrite)
				{
					for (size_t i = 0; i < tailleHorizontale - TextToWrite.length() - 2; i++)
					{

						std::cout << " ";
						if (!bHisWrite && Text != NumberOfCube + 1)
						{
							
							std::cout << TextToWrite;
							bHisWrite = true;
							Text++;

						}
						

					}

				}
				else
				{
					for (size_t i = 0; i < tailleHorizontale -2; i++)
					{
						std::cout << " ";
					}
				}
				
					std::cout << "|";

				for (size_t i = 0; i < espacement; i++)
				{
					std::cout << " ";
				}
				

			}
			
			std::cout << std::endl;
			TextIsWrite = true;
		
		}

		for (size_t i = 0; i < tailleHorizontale; i++)
		{
			std::cout << "-";

		}

		for (size_t i = 0; i < NumberOfCube; i++)
		{
			for (size_t i = 0; i < espacement; i++)
			{
				std::cout << " ";
			}
			

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

	std::string str = std::to_string( Antimater);
	std::string str1 = "     Antimater : ";
	str = str1.append(str);


	CreateCube(0,2,35,str);
	for (size_t i = 0; i < 5; i++)
	{
		std::cout << std::endl;
	}

	CreateCube(3, 2, 11, "niqus");
	for (size_t i = 0; i < 5; i++)
	{
		std::cout << std::endl;
	}
	CreateCube(5, 2, 11, "Ant");

	CreateCube(10, 2, 10, "tamere");

	
}
