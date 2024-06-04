/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 14:17:47 by anlima            #+#    #+#             */
/*   Updated: 2024/06/04 11:01:23 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(RPN const &copy) { _filo = copy._filo; }
RPN &RPN::operator=(RPN const &copy)
{
    if (this != &copy)
        _filo = copy._filo;
    return (*this);
}

void    RPN::add(int nb) { _filo.push(nb); }

void    RPN::calculate(char op)
{        
    if (_filo.empty() || _filo.size() < 2)
        throw std::invalid_argument("Error: invalid stack, check args");
    int b = _filo.top();
    _filo.pop();
    int a = _filo.top();
    _filo.pop();
    int temp;
    if (op == '/' && b == 0)
        throw std::runtime_error("Error: Division by zero");
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
            throw std::invalid_argument("Error: nb is not a valid number between 0 && 9");
    }
}

void    RPN::getTotal()
{
    if (!_filo.empty() && _filo.size() == 1)
        std::cout << _filo.top() << std::endl;
}
