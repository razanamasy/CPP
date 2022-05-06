#include "Account.hpp"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_amount = initial_deposit;
    Account::_totalAmount += this->_amount;
    this->_accountIndex = Account::_nbAccounts;
    Account::_displayTimestamp();
    cout << "index:" << this->_accountIndex;
    cout << ";amount:" << initial_deposit;
    cout << ";created" << endl;
    Account::_nbAccounts += 1;
}

Account::~Account( void )
{
    Account::_displayTimestamp();
    cout << "index:" << this->_accountIndex;
    cout << ";amount:" << this->_amount;
    cout << ";closed" << endl;
}

void	Account::makeDeposit( int deposit )
{
    Account::_displayTimestamp();
    cout << "index:" << this->_accountIndex;
    cout << ";p_amount:" << this->_amount;
    cout << ";deposit:" << deposit;
    this->_amount += deposit;
    Account::_totalAmount += deposit;
    this->_nbDeposits++;
    Account::_totalNbDeposits += 1;
    cout << ";amount:" << this->_amount;
    cout << ";nb_deposits:" << this->_nbDeposits;
    cout << endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    Account::_displayTimestamp();
    cout << "index:" << this->_accountIndex;
    cout << ";p_amount:" << this->_amount;
    if (withdrawal > this->_amount)
    {
        cout << ";withdrawal:refused" << endl;
        return (0);
    }
    cout << ";withdrawal:" << withdrawal;
    this->_amount -= withdrawal;
    Account::_totalAmount -= withdrawal;
    this->_nbWithdrawals++;
    Account::_totalNbWithdrawals += 1;
    cout << ";amount:" << this->_amount;
    cout << ";nb_withdrawals:" << this->_nbWithdrawals;
    cout << endl;
    return (1);
}

int		Account::checkAmount( void ) const
{
    return (this->_amount);
}

void	Account::_displayTimestamp( void )
{
    time_t now = time(0);
    tm *ltm = localtime(&now);
    cout << "[";
    cout << 1900 + ltm->tm_year;
    if (1 + ltm->tm_mon < 10)
        cout << "0";
    cout << 1 + ltm->tm_mon;
        if (ltm->tm_mday < 10)
        cout << "0";
    cout << ltm->tm_mday;
    cout << "_";

    if (5+ltm->tm_hour < 10)
        cout << "0";
    cout << ltm->tm_hour;
    if (30+ltm->tm_min < 10)
        cout << "0";
    cout << ltm->tm_min;
    if (ltm->tm_sec < 10)
        cout << "0";
    cout << ltm->tm_sec;


    cout << "] ";
}

void	Account::displayStatus( void ) const
{
    Account::_displayTimestamp();
    cout << "index:" << this->_accountIndex;
    cout << ";amount:" << this->_amount;
    cout << ";deposits:" << this->_nbDeposits;
    cout << ";withdrawals:" << this->_nbWithdrawals;
    cout << endl;
}

int	Account::getNbAccounts( void )
{
    return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
    return (Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
    return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
    return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
    Account::_displayTimestamp();
    cout << "accounts:" << getNbAccounts();
    cout << ";total:" << getTotalAmount();
    cout << ";deposits:" << getNbDeposits();
    cout << ";withdrawals:" << getNbWithdrawals();
    cout << endl;
}
