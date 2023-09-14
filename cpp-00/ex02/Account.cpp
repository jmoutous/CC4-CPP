/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoutous <jmoutous@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:52:26 by jmoutous          #+#    #+#             */
/*   Updated: 2023/09/14 17:21:25 by jmoutous         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account( void ) {
}

Account::Account( int initial_deposit ) {
}

Account::~Account( void ) {
}

int	Account::getNbAccounts( void ) {
	return _nbAccounts;
}
int	Account::getTotalAmount( void ) {
	return _totalAmount;
}

int	Account::getNbDeposits( void ) {
	return _totalNbDeposits; // what?
}

int	Account::getNbWithdrawals( void ) {
	return _totalNbWithdrawals; // wut??
}

void	Account::displayAccountsInfos( void ) {

}

void	Account::makeDeposit( int deposit ) {

}

bool	Account::makeWithdrawal( int withdrawal ) {

}

int		Account::checkAmount( void ) const {

}

void	Account::displayStatus( void ) const {

}

void	Account::_displayTimestamp( void ) {
	
}
