#include <iostream>

using namespace std;

//Zadacha 1
int factoriel(int n){
    if(n==1)
        return 1;
    return n*factoriel(n-1);
}

//Zadacha 2
int fibonacci(int n){
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return fibonacci(n-1)+fibonacci(n-2);
}

//Zadacha 3
int suma_cifri(int n){
    if(n==0)
        return 0;
    return n%10+suma_cifri(n/10);
}

//Zadacha 4
int power(int n, int pow){
    if(pow==1)
        return n;
    return n*power(n, pow-1);
}

//Zadacha 5
bool k_vuv_n(int n, int k){
    if(n%10==k)
        return true;
    if(n<10 && n!=k)
        return false;
    return k_vuv_n(n/10, k);
}


//Zadacha 6
const int m=10;
const int n=5;
/* This is an example topology:
 * |0 1 0 0 0|
   |1 1 0 0 1|
   |0 1 1 1 1|
   |0 0 0 0 0|
   |1 0 0 0 0|
   |0 0 1 1 0|
   |0 0 0 1 1|
   |0 0 0 0 0|
   |1 1 1 0 0|
   |0 0 1 0 0|
*/
bool topos[m][n] = {{0,1,0,0,0},
                    {1,1,0,0,1},
                    {0,1,1,1,1},
                    {0,0,0,0,0},
                    {1,0,0,0,0},
                    {0,0,1,1,0},
                    {0,0,0,1,1},
                    {0,0,0,0,0},
                    {1,1,1,0,0},
                    {0,0,1,0,0}};
bool poseteni[m][n]={0};


int broi_elelm_v_oblastta(int k1, int k2){
    if(poseteni[k1][k2])
        return 0;
    poseteni[k1][k2]=1;


    if(k1==0)
	if(k2==0){
	    int d,r = 0;
	    if(topos[k1+1][k2] == topos[k1][k2]){
		d = broi_elelm_v_oblastta(k1+1, k2);
	    }
	    if(topos[k1][k2+1] == topos[k1][k2]){
		r = broi_elelm_v_oblastta(k1, k2+1);
	    }
	    return 1+d+r;
	}
	else{
	    if(k2==n-1){
		int d, l = 0;
		if(topos[k1+1][k2] == topos[k1][k2]){
		    d = broi_elelm_v_oblastta(k1+1, k2);
		}
		if(topos[k1][k2-1] == topos[k1][k2]){
		    l = broi_elelm_v_oblastta(k1, k2-1);
		}
		return 1+d+l;
	    }
	    else{
		int d, l, r = 0;
		if(topos[k1+1][k2] == topos[k1][k2]){
		    d = broi_elelm_v_oblastta(k1+1, k2);
		}
		if(topos[k1][k2+1] == topos[k1][k2]){
		    r = broi_elelm_v_oblastta(k1, k2+1);
		}
		if(topos[k1][k2-1] == topos[k1][k2]){
		    l = broi_elelm_v_oblastta(k1, k2-1);
		}
		return 1+d+l+r;
	    }
	}





    if(k1==m-1){
	if(k2==0){
	    int u, r = 0;
	    if(topos[k1-1][k2] == topos[k1][k2]){
		u = broi_elelm_v_oblastta(k1-1, k2);
	    }
	    if(topos[k1][k2+1] == topos[k1][k2]){
		r = broi_elelm_v_oblastta(k1, k2+1);
	    }
	    return 1+u+r;
	}
        else
	    if(k2==n-1){
		int u, l= 0;
		if(topos[k1-1][k2] == topos[k1][k2]){
		    u = broi_elelm_v_oblastta(k1-1, k2);
		}
		if(topos[k1][k2-1] == topos[k1][k2]){
		    l = broi_elelm_v_oblastta(k1, k2-1);
		}
		return 1+u+l;
	    }
	    else{
		int u, l, r = 0;
		if(topos[k1-1][k2] == topos[k1][k2]){
		    u = broi_elelm_v_oblastta(k1-1, k2);
		}
		if(topos[k1][k2+1] == topos[k1][k2]){
		    r = broi_elelm_v_oblastta(k1, k2+1);
		}
		if(topos[k1][k2-1] == topos[k1][k2]){
		    l = broi_elelm_v_oblastta(k1, k2-1);
		}
		return 1+u+l+r;
	    }
    }


    if(k2==0){
	int u, d, r = 0;
	if(topos[k1+1][k2] == topos[k1][k2]){
	    d = broi_elelm_v_oblastta(k1+1, k2);
	}
	if(topos[k1-1][k2] == topos[k1][k2]){
	    u = broi_elelm_v_oblastta(k1-1, k2);
	}
	if(topos[k1][k2+1] == topos[k1][k2]){
	    r = broi_elelm_v_oblastta(k1, k2+1);
	}
	return 1+d+u+r;
    }


    if(k2==n-1){
	int u, d, l = 0;
	if(topos[k1+1][k2] == topos[k1][k2]){
	    d = broi_elelm_v_oblastta(k1+1, k2);
	}
	if(topos[k1-1][k2] == topos[k1][k2]){
	    u = broi_elelm_v_oblastta(k1-1, k2);
	}
	if(topos[k1][k2-1] == topos[k1][k2]){
	    l = broi_elelm_v_oblastta(k1, k2-1);
	}
	return 1+d+u+l;
    }



    int u, d, l, r = 0;
    if(topos[k1+1][k2] == topos[k1][k2]){
	d = broi_elelm_v_oblastta(k1+1, k2);
    }
    if(topos[k1-1][k2] == topos[k1][k2]){
	u = broi_elelm_v_oblastta(k1-1, k2);
    }
    if(topos[k1][k2+1] == topos[k1][k2]){
	r = broi_elelm_v_oblastta(k1, k2+1);
    }
    if(topos[k1][k2-1] == topos[k1][k2]){
	l = broi_elelm_v_oblastta(k1, k2-1);
    }
    return 1+d+u+l+r;
}


int main()
{
    cout << "5! = 120?" << endl;
    cout << factoriel(5) << endl;
    cout << "8th fibonacci number is 21?" << endl;
    cout << fibonacci(8) << endl;
    cout << "Sumata ot cifrite na 189 e 18?" << endl;
    cout << suma_cifri(189) << endl;
    cout << "8^3 = 512?" << endl;
    cout << power(8,3) << endl;
    cout<< "Ima li 9 vuv desetichniq zapis na 295?" << endl;
    cout << k_vuv_n(295,9) << endl;
    cout << "Kolko elementa ima v oblastta na (0,1)?" << endl;
    cout << broi_elelm_v_oblastta(0,0) << endl;
    return 0;
}
