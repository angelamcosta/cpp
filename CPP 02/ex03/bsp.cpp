/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anlima <anlima@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:54:31 by anlima            #+#    #+#             */
/*   Updated: 2023/11/05 16:25:50 by anlima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed aX = a.getX();
	Fixed aY = a.getY();

	Fixed abx = b.getX() - aX;
	Fixed aby = b.getY() - aY;
	Fixed acx = c.getX() - aX;
	Fixed acy = c.getY() - aY;
	
	Fixed apx = point.getX() - aX;
	Fixed apy = point.getY() - aY;
	
	Fixed abap = (abx * apx) + (aby * apy);
	Fixed acap = (acx * apx) + (acy * apy);

	Fixed lenAB = (abx * abx) + (aby * aby);
	Fixed lenAC = (acx * acx) + (acy * acy);

	return (abap >= 0 && acap >= 0 && (abap * abap <= lenAB * lenAB) && (acap * acap <= lenAC * lenAC));
}
