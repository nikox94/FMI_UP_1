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
#include <deque>
using namespace std;

int main(int argc, char** argv)
{
	int n; //Ще се провери дали числото е палиндром
	cin>>n;
	bool flag = true;
	deque<unsigned char> dq1;
	while(n!=0){
	    dq1.push_back(n%10);
	    n/=10;
	}
	while(dq1.size()>1){
	    if(dq1.front()==dq1.back()){
		dq1.pop_front();
		dq1.pop_back();
	    }
	    else{
		flag=false;
		break;
	    }
	}
	cout<<flag<<endl;
	return 0;
}
