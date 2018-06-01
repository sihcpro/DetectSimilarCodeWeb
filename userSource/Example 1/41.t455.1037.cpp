#include<bits/stdc++.h>
using namespace std ;
bool checkx(char a[][101])
{
    if(a[0][0] =='X' && a[1][0]=='X' && a[2][0]=='X') return true ;
    else if(a[0][0]=='X' && a[0][1]=='X' && a[0][2] =='X') return true ;
    else if(a[0][0]=='X' && a[1][1]=='X' && a[2][2] =='X') return true ;
    else if(a[0][1]=='X' && a[1][1]=='X' && a[2][1] =='X') return true ;
    else if(a[0][2]=='X' && a[1][1]=='X' && a[2][0] =='X') return true ;
    else if(a[0][2]=='X' && a[1][2]=='X' && a[2][2] =='X') return true ;
    else if(a[1][0]=='X' && a[1][1]=='X' && a[1][2]=='X') return true ;
    else if(a[2][0]=='X' && a[2][1]=='X' && a[2][2]=='X') return true;
    else return false ;
}
bool checko(char a[][101] )
{

    //else if(a[x][y] == '0' && a[x-1][y-1] == '0' && a[x-2][y-2] =='0') return true ;
    if(a[0][0] =='0' && a[1][0]=='0' && a[2][0]=='0') return true ;
    else if(a[0][0]=='0' && a[0][1]=='0' && a[0][2] =='0') return true ;
    else if(a[0][0]=='0' && a[1][1]=='0' && a[2][2] =='0') return true ;
    else if(a[0][1]== '0' && a[1][1] =='0' && a[2][1] =='0') return true ;
    else if(a[0][2] =='0' && a[1][1] == '0' && a[2][0] =='0') return true ;
    else if(a[0][2] =='0' && a[1][2] =='0' && a[2][2] =='0') return true ;
    else if(a[1][0]=='0' && a[1][1]=='0' && a[1][2]=='0') return true ;
    else if(a[2][0]=='0' && a[2][1]=='0' && a[2][2]=='0') return true;
    else return false ;
}
int main()
{

    long long sum = 0 ;
    long long test ;
    cin >> test ;
    while(test--)
    {
         int demx = 0 ;
         int demo = 0 ;
         int demc = 0 ;
        char a[101][101] ;
        for(int i = 0 ; i < 3 ; i++) {
            for(int j =  0 ; j < 3 ; j++ ) {
                cin >> a[i][j] ;
                if(a[i][j] =='X')
                {
                    demx++;
                }
                if(a[i][j] == '0')
                {
                    demo++ ;
                }
                if(a[i][j]=='.')
                {
                    demc++;
                }
            }
        }

       // cout << demx <<" " << demo << endl;
        if(demo > demx || demx - demo >= 2 ) {
                cout <<"illegal"<< endl;
                continue ;
        }
        else {
                int dx = 0 ;
                int dy = 0 ;
                if(checkx(a)== true )
                {
                    dx =1 ;
                    //cout <<"the first player won"<< endl;
                }
                if(checko(a) == true ) {
                    dy = 1 ;
                  //  cout <<"the second player won"<< endl;

                }
                if(dx == dy && dx == 1 )
                {
                    cout <<"illegal"<< endl;
                    continue ;
                }
                else if(dx == 1 && dy == 0)
                {
                    if(demx >= demo && demc > 0&& demx - demo != 1)
                    {
                        cout <<"illegal"<< endl;
                        continue ;
                    }
                    cout <<"the first player won"<< endl;
                    continue;
                }
                else if(dy == 1 && dx == 0)
                {
                    if(demx > demo)
                    {
                        cout << "illegal" << endl;
                        continue ;
                    }
                    cout <<"the second player won"<< endl;
                    continue ;
                }
                else {
                    if(demc == 0)  {
                        cout <<"draw"<< endl;
                        continue ;
                    }
                    else if(demx-demo == 0 ) {
                            cout <<"first"<< endl;
                            continue ;
                    }
                    else {
                        cout <<"second"<< endl;
                        continue ;
                    }
                }
            }
        }
     }