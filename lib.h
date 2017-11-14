/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcartau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 10:33:18 by pcartau           #+#    #+#             */
/*   Updated: 2017/11/14 10:42:33 by pcartau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
#define LIB_H

#include <string.h>
#include <stdlib.h>

typedef struct brear_mon_pote
{
	unsigned int key;
	struct brear_mon_pote *left;
	struct brear_mon_pote *right;
}			arbre_b;

#endif
