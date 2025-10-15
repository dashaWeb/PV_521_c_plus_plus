#include <iostream>
#include "main.h"

int main()
{
	Item* library = nullptr;
	size_t size = 0;
	read(library, size);
	int choice;
	while (true) {
		cout << R"(	
			Select type : 
					1 - fill;
					2 - print;
					3 - add;
					4 - delete;
					0 - exit
					Enter :: )";
		cin >> choice;
		if (choice == 0)
			break;
		switch (choice)
		{
		case 1:
		{
			int count;
			cout << "Enter number of Items :: ";
			cin >> count;
			fillLibrary(library, size, count);
			save(library, size);
			break;
		}
		case 2:
		{
			for (size_t i = 0; i < size; i++)
			{
				print(library[i]);
			}
			break;
		}
		case 3: {
			Item tmp;
			editItem(tmp);
			addItem(library, size, tmp);
			save(library, size);
			break;
		}
		case 4: {
			deleteItem(library, size, 0);
			break;
		}
		}





	}
}

