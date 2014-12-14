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


/*	0   1   2   ->x_2
 *  0 [   ,   ,   ]
 *  1 [   ,   ,   ]
 *  2 [   ,   ,   ] 
 * 
 *  x_1
 */

#include <iostream>
using namespace std;


int m[3][3]={0};

signed char check_winner()
{
    for(int i=0;i<3;++i)
    {
	//Obhojdane po redove
	if(m[i][0]==m[i][1] && m[i][1] == m[i][2] && m[i][0]!=0)
	    return m[i][0];
	//Obhojdane po koloni
	if(m[0][i]==m[1][i] && m[1][i]==m[2][i] && m[0][i]!=0)
	    return m[0][i];
    }
    //Obhojdane po diagonal
    if(m[0][0]==m[1][1]&& m[0][0]==m[2][2] && m[0][0]!=0)
	return m[0][0];
    if(m[0][2]==m[1][1] && m[1][1]==m[2][0] && m[1][1]!=0)
	return m[1][1];
    
    //Is array full
    for(int i=0;i<3;++i)
	for(int j=0;j<3;++j)
	    if(m[i][j]==0)
		return 0;
	    
    //If not full returned 0, if full game is over so return -1
    return -1;
}

int main(int argc, char** argv)
{	
	signed char winner=0; //This will hold the id number of the person who won.
	while(true)
	{
	    int x_1, x_2;
	    //Player 1 moves
	    do
	    {
		cout<<"X da vuvede hoda si chrez koordinati v [0,2]x[0,2]. Purvo red, posle stulb."<<endl;
		cin>>x_1>>x_2;
		//Proverqvame dali tezi koordinati veche ne sa izigrani, t.e. kvadratcheto zaeto
		if(m[x_1][x_2]!=0)
		{
		    cout<<"Tazi poziciq veche e zaeta. Molq opitaite pak."<<endl; x_1=-1;
		    continue;
		}
	    }while(!(x_1>=0 && x_1<3 && x_2>=0 && x_2<3));
	    m[x_1][x_2]=1;
	    
	    if(check_winner())
	    {
		winner = check_winner();
		break;
	    }
	    
	    //Player 2 moves
	    do
	    {
		cout<<"O da vuvede hoda si chrez koordinati v [0,2]x[0,2]. Purvo red, posle stulb."<<endl;
		cin>>x_1>>x_2;
		//Proverqvame dali tezi koordinati veche ne sa izigrani, t.e. kvadratcheto zaeto
		if(m[x_1][x_2]!=0)
		{
		    cout<<"Tazi poziciq veche e zaeta. Molq opitaite pak."<<endl; x_1=-1;
		    continue;
		}
	    }while(!(0<=x_1 && x_1<3 && 0<=x_2 && x_2<3));
	    m[x_1][x_2]=2;
	    
	    if(check_winner())
	    {
		winner = check_winner();
		break;
	    }
	    
	}
	
	switch(winner)
	{
	    case -1:
		cout<<"Duskata e pulna, a pobeditel nqma. Kusmet drugiq put!"<<endl;
		break;
	    case 1:
		cout<<"X pobedi!!! Bravo X! Kusmet drugiq put o!"<<endl;
		break;
	    case 2:
		cout<<"O pobedi!!! Bravo O! Kusmet drugiq put x!"<<endl;
		break;
	}
	
	
	return 0;
}
