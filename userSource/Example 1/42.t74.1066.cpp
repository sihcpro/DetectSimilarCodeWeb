#include <bits/stdc++.h>

#define ld long double
#define sf scanf
#define pf printf
#define pb push_back
#define mp make_pair
#define PI ( acos(-1.0) )
#define IN freopen("input.txt","r",stdin)
#define OUT freopen("output.txt","w",stdout)
#define FOR(i,a,b) for(int i=a ; i<=b ; i++)
#define FORD(i,a,b) for(int i=a ; i>=b ; i--)
#define INF 1000000000
#define ll long long int
#define eps (1e-8)
#define sq(x) ( (x)*(x) )
#define all(x) x.begin(),x.end()
#define flog2(n) 64 - __builtin_clzll(n) - 1

using namespace std;

ld x[5],y[5],m[5],p[5],X,Y;
ld A,B,C,M,N,P;
vector<ld> rong;

vector<ld> solve(ld a, ld b, ld c){
    vector<ld> res;
    if (abs(a)<eps){
        if (abs(b)<eps) return rong;
        res.pb(-c/b);
        return res;
    }
    else{
        ld delta=b*b-4*a*c;
        if (abs(delta)<eps){
            res.pb(-b/2.0/a);
            return res;
        }
        if (delta>0){
            ld X1=(-b+sqrt(delta))/2/a;
            ld X2=(-b-sqrt(delta))/2/a;
            res.pb(X1);
            res.pb(X2);
            return res;
        }
        return rong;
    }
}
bool check (ld a, ld b, ld c){
    return (abs(a)>eps||abs(b)>eps || abs(c)>eps);
}
ld w[5];
ld calc(ld X, ld Y){
    return -(X*X+Y*Y)/m[1]/m[1];
}
ld calci(ld X, ld Y, int i){
    return ((X-x[i])*(X-x[i])+(Y-y[i])*(Y-y[i]))/(w[i]*w[i]);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    FOR (i,1,3) {
        cin>>x[i]>>y[i]>>m[i];
        w[i]=m[i];
    }
    FOR (i,2,3){
        x[i]-=x[1];
        y[i]-=y[1];
        m[i]=m[i]/m[1];
        m[i]=m[i]*m[i];
        m[i]=1-m[i];
        p[i]=sq(x[i])+sq(y[i]);
    }
    if (abs(m[2])<eps){
        if (abs(2*y[2])<eps){
            X=p[2]/2.0/x[2];
            vector<ld> root;
            if (check(m[3],-2*y[3],m[3]*X*X-2*X*x[3]+p[3])){
                root=solve(m[3],-2*y[3],m[3]*X*X-2*X*x[3]+p[3]);
            }
            else{
                root=solve(m[2],-2*y[2],m[2]*X*X-2*X*x[2]+p[2]);
            }
            if (root.size()==0){
                cout<<"CHI LA TRUYEN THUYET";
                return 0;
            }
            else{
                C=-1e18;
                for (auto i:root){
                    if (calc(X,i)>C) {
                        C=calc(X,i);
                        Y=i;
                    }
                }
                cout<<fixed<<setprecision(8)<<X+x[1]<<" "<<Y+y[1]<<endl;
            }
        }
        else{
            A=-x[2]/y[2];
            B=p[2]/2.0/y[2];
            M=m[3]+m[3]*sq(A);
            N=2*A*B*m[3]-2*x[3]-2*A*y[3];
            P=m[3]*sq(B)-2*B*y[3]+p[3];
            vector<ld> root;

            if (check(M,N,P)) root=solve(M,N,P);
            else{
                M=m[2]+m[2]*sq(A);
                N=2*A*B*m[2]-2*x[2]-2*A*y[2];
                P=m[2]*sq(B)-2*B*y[2]+p[2];
                root=solve(M,N,P);
            }
            if (root.size()==0){
                cout<<"CHI LA TRUYEN THUYET";
                return 0;
            }
            C=-1e18;
            for (auto i:root){
                if (calc(i,A*i+B)>C){
                    C=calc(i,A*i+B);
                    X=i;
                    Y=A*i+B;
                }
            }
            cout<<fixed<<setprecision(8)<<X+x[1]<<" "<<Y+y[1]<<endl;
        }
    }
    else{
        A=2*m[3]*x[2]-2*m[2]*x[3];
        B=2*m[3]*y[2]-2*m[2]*y[3];
        C=m[2]*p[3]-m[3]*p[2];
        if (abs(B)<eps){
            if (abs(A)<eps){
                cout<<"CHI LA TRUYEN THUYET";
                return 0;
            }
            else{
                X=-C/A;
                vector<ld> root;
                if (check(m[3],-2*y[3],m[3]*X*X-2*X*x[3]+p[3])){
                    root=solve(m[3],-2*y[3],m[3]*X*X-2*X*x[3]+p[3]);
                }
                else{
                    root=solve(m[2],-2*y[2],m[2]*X*X-2*X*x[2]+p[2]);
                }
                //cout<<m[3]<<" "<<-2*y[3]<<" "<<m[3]*X*X-2*X*x[3]+p[3]<<endl;
                if (root.size()==0){
                    cout<<"CHI LA TRUYEN THUYET";
                    return 0;
                }
                else{
                    C=-1e18;
                    for (auto i:root){
                        if (calc(X,i)>C) {
                            C=calc(X,i);
                            Y=i;
                        }
                    }
                    cout<<fixed<<setprecision(8)<<X+x[1]<<" "<<Y+y[1]<<endl;
                }
            }
        }
        else{
            M=-A/B;
            N=-C/B;
            A=M; B=N;

            M=m[3]+m[3]*sq(A);
            N=2*A*B*m[3]-2*x[3]-2*A*y[3];
            P=m[3]*sq(B)-2*B*y[3]+p[3];
            vector<ld> root;
            if (check(M,N,P)) root=solve(M,N,P);
            else{
                M=m[2]+m[2]*sq(A);
                N=2*A*B*m[2]-2*x[2]-2*A*y[2];
                P=m[2]*sq(B)-2*B*y[2]+p[2];
                root=solve(M,N,P);
            }
            if (root.size()==0){
                cout<<"CHI LA TRUYEN THUYET";
                return 0;
            }
            C=-1e18;
            for (auto i:root){
                if (calc(i,A*i+B)>C){
                    C=calc(i,A*i+B);
                    X=i;
                    Y=A*i+B;
                }
            }
            cout<<fixed<<setprecision(8)<<X+x[1]<<" "<<Y+y[1]<<endl;
        }
    }
    /*cout<<calc(X,Y)<<endl;

    FOR (i,2,3){
        cout<<calci(X,Y,i)<<endl;
    }
    cin>>X>>Y;

    cout<<calc(X,Y)<<endl;

    FOR (i,2,3){
        cout<<calci(X,Y,i)<<endl;
    }*/



         return 0;
}