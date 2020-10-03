#pragma once

#ifndef EXTENDED_WORK_TICKET_H
#define EXTENDED_WORK_TICKET_H

#include "WorkTicket.h"

using namespace std;

class ExtendedWorkTicket: public WorkTicket
{
private:
	
	bool isOpen;

public:

	//Default constructor 
	ExtendedWorkTicket() : WorkTicket(), isOpen(true){ }
	
	//Parameterized constructor?
	ExtendedWorkTicket(int ticket_number, const string& client_id, int day, int month, int year, const string& description, bool isOpen);

	bool IsOpen() const { return isOpen; }
	void CloseOpen() { isOpen = false; }
	
};

#endif