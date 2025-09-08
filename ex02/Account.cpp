#include <iostream>
#include "Account.hpp"

Account::Account(int initial_deposit)
{
	makeDeposit(initial_deposit);
	//todo how to handle shared numbers
}

Account::~Account( void ){};

int	Account::getNbAccounts()
{
	//
}

int	Account::getTotalAmount()
{
	//
}

int	Account::getNbDeposits()
{
	//
}

int	Account::getNbWithdrawals()
{
	//
}

void	Account::displayAccountsInfos()
{
	//
}

void	Account::makeDeposit(int deposit)
{
	this->_amount += deposit;
	this->_nbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if(this->_amount >= withdrawal)
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		return (true);
	}
	return (false);
}

int	Account::checkAmount() const
{
	return (this->_amount);
}

void	Account::displayStatus() const
{
	std::cout << "Status!" << std::endl;
}

void	Account::_displayTimestamp()
{
	//current time?
}