/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 14:17:49 by anlima            #+#    #+#             */
/*   Updated: 2024/03/07 14:19:59 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>

class RPN {
    private:
        std::stack<int> _filo;
    public:
        RPN();
        ~RPN();
        RPN(RPN const &copy);
        RPN &operator=(RPN const &copy);

        void    add(int nb);
        void    calculate(char op);
        void    getTotal();
};

#endif