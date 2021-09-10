#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  fizzbuzz.py
#  
#  Copyright 2020 Denis REMACLE <denis.remacle@outlook.fr>
#  
#  This program is free software; you can redistribute it and/or modify
#  it under the terms of the GNU General Public License as published by
#  the Free Software Foundation; either version 2 of the License, or
#  (at your option) any later version.
#  
#  This program is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#  GNU General Public License for more details.
#  
#  You should have received a copy of the GNU General Public License
#  along with this program; if not, write to the Free Software
#  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
#  MA 02110-1301, USA.
#  
#
for i in range(100):
	afficher = ""
	if i % 3 == 0 or i % 5 == 0:
		if i % 3 == 0:
			afficher = afficher + "fizz"
		if i % 5 == 0:
			afficher = afficher + "buzz"
		if i == 0:
			afficher = "0"
	else:
		afficher = afficher + str(i)
	print(afficher)
