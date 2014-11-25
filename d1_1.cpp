/*
 *      Изходен файл на С++.cpp
 *      
 *      
 *      This program is free software; you can redistribute it and/or modify
 *      it under the terms of the GNU General Public License as published by
 *      the Free Software Foundation; either version 2 of the License, or
 *      (at your option) any later version.
 *      
 *      This program is distributed in the hope that it will be useful,
 *      but WITHOUT ANY WARRANTY; without even the implied warranty of
 *      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *      GNU General Public License for more details.
 *      
 *      You should have received a copy of the GNU General Public License
 *      along with this program; if not, write to the Free Software
 *      Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 *      MA 02110-1301, USA.
 */


#include <iostream>
using namespace std;

bool izraz(int, int);
bool figura(double, double);

int main(int argc, char** argv)
{
	cout<<izraz(2013, 1)<<endl;
	cout<<figura(4.0,-2.0)<<endl;
	return 0;
}

bool figura(double x1, double x2){
    bool golqm_dolen_krug = ((x1-4)*(x1-4)+(x2+2)*(x2+2) <= 16 ) && x2<=-2
    bool goren_krug = (x1-4)*(x1-4)+(x2+2)*(x2+2) <= 4 
    bool goren_maluk_krug = ((x1-4)*(x1-4)+(x2+2)*(x2+2) < 1 ) && x2>-2
    return golqm_dolen_krug || (goren_krug && !goren_maluk_krug)
}

bool izraz(int a, int b){
    return (a%2013==0) != (b%2013==0);
}