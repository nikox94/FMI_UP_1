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

int main(int argc, char** argv)
{
	cout<<"Please enter a three-digit number with no zeros as digits."<<endl;
	int n;
	cin>>n;
	int orig=n;
	int a[3]; //Cifri na chisloto
	bool kratno_vsqka_cifra=true;
	int sum=0;
	int prod=1;
	for(int i=2;i>=0;--i){
	    a[i]=n%10;
	    sum+=a[i];
	    prod*=a[i];
	    n/=10;
	}
	for(int i=2;i>=0;--i){
	    if(orig%a[i]!=0){
		kratno_vsqka_cifra=false;
		break;
// // 	    }
	}
	if (kratno_vsqka_cifra){
	    cout<<"Yes. Digit sum is: "<<sum<<endl;
	}else{
	    cout<<"No. Digit product is: "<<prod<<endl;
	}
	return 0;
}
