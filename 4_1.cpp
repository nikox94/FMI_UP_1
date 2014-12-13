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
        cout<<"Tazi programa proverqva dali elementut x se sudurja v dadenata redica ot n chisla.\n Vuvedi n. Posle chislata. Posle x.\n";
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	int x; cin>>x;
	for(int i=0;i<n;i++){
	    if(a[i]==x){
		cout<<"Da"<<endl;
		break;
	    }
	    if(i==n-1) //implicit && a[i]!=x
		cout<<"Ne"<<endl;
	}
	return 0;
}
