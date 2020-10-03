#include <iostream>
#include "ExtendedWorkTicket.h"
#include "MyDate.h"
#include "WorkTicket.h"
#include "ConsoleInput.h"

int main()
{
	/* FIX THIS BY IMPLEMENTING A WORKING ExtendedWOrkTicket Class*/
	ExtendedWorkTicket testTicket1;
	ExtendedWorkTicket testTicket2(1, "AMCE_123", 1, 7, 2014, "Password Reset", true);

	std::cout << std::endl << "As Initialized: " << std::endl;
	testTicket1.ShowWorkTicket();
	testTicket2.ShowWorkTicket();


	if (!testTicket1.SetWorkTicket(2, "MACDONALD-001", 10, 3, 2012, "User cannot locate \'any\' key.", true))
		std::cout << "\nErrors! No changes to the ticket made." << std::endl;

	std::cout << std::endl << "Ticket 1: " << testTicket1 << std::endl;

	if (!testTicket2.SetWorkTicket(-1, "BLAGO-042", 13, 32, 11, "", false))
		std::cout << "\nErrors! No changes to the ticket made." << std::endl;

	std::cout << std::endl << "Ticket 2: " << testTicket2 << std::endl;

	testTicket2.CloseTicket();

	std::cout << std::endl << "After Ticket 2 closed: " << testTicket2 << std::endl;

	std::cout << std::endl << std::endl;
	return 0;
}




