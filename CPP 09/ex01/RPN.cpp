/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 14:17:47 by anlima            #+#    #+#             */
/*   Updated: 2024/03/07 17:00:57 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(RPN const &copy)
{
    *this = copy;
}
RPN &RPN::operator=(RPN const &copy)
{
    if (this != &copy)
        *this = copy;
    return (*this);
}

void    RPN::add(int nb)
{
    _filo.push(nb);
}

void    RPN::calculate(char op)
{
    if (_filo.empty() || _filo.size() < 2)
        throw std::out_of_range("Error");
    int b = _filo.top();
    _filo.pop();
    int a = _filo.top();
    _filo.pop();
    int temp;
    switch (op)
    {
    case '+':
        temp = a + b;
        _filo.push(temp);
        break;
    case '-':
        temp = a - b;
        _filo.push(temp);
        break;
    case '*':
        temp = a * b;
        _filo.push(temp);
        break;
    case '/':
        temp = a / b;
        _filo.push(temp);
        break;
    default:
        throw std::out_of_range("Error");
    }
}

void    RPN::getTotal()
{
    if (!_filo.empty() && _filo.size() == 1)
        std::cout << _filo.top() << std::endl;
}
