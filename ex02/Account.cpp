#include <iostream>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	this->_accountIndex = _nbAccounts;
	std::cout << "index:" << this->_accountIndex;
	_nbAccounts++;
	this->_amount = initial_deposit;
	_totalAmount += initial_deposit;
	std::cout << ";amount:" << initial_deposit << ";created" << std::endl;
}

Account::~Account( void )
{
	std::cout << "index:" << this->_accountIndex << 
				";amount:" << this->checkAmount() <<
				";closed" << std::endl;
};

int	Account::getNbAccounts()
{
	return (_nbAccounts);
}

int	Account::getTotalAmount()
{
	return (_totalAmount);
}

int	Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << 
				";total:" << _totalAmount << 
				";deposits:" << _totalNbDeposits <<
				";withdrawals:" << _totalNbWithdrawals << 
				std::endl;
}

void	Account::makeDeposit(int deposit)
{
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	if(this->_amount >= withdrawal)
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
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
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << 
				";p_amount:" << _amount << 
				";deposit:" << _nbDeposits <<
				";withdrawals" << _nbWithdrawals << 
				std::endl;
}

void	Account::_displayTimestamp()
{
	time_t	now = time(0);
	struct	tm *timeinfo = localtime(&now);
	char	buffer[20];
	strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", timeinfo);
	std::cout << "[" << buffer << "] ";
}