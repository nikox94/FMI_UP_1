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

void insertionSort(int[], int);

int main(int argc, char** argv)
{
    cout<<"Enter a number of elements followed by an array and the program will sort it using insertion sort."<<endl;
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;++i)
	cin>>a[i];
    insertionSort(a,n);
    for(int i=0;i<n;++i)
	cout<<a[i]<<endl;    
    return 0;
}

void insertionSort(int a[], int n){
    int j, val;
    for(int i=1;i<n;++i){
	j = i;
	while(j>0 && a[j]<a[j-1]){
	    val = a[j];
	    a[j]=a[j-1];
	    a[j-1] = val;
	    --j;
	}
    }
}
