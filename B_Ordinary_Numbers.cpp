#include "bits/stdc++.h"
// assert(x>0) si falla da RTE
using namespace std;
#define endl '\n'
#define DBG(x) cerr << #x << "=" << (x) << endl;
#define RAYA cerr << "======================" << endl;
#define RAYAS cerr << "......................" << endl;
//#define DBG(x) ;
//#define RAYA ;
//#define RAYAS ;

//--------------------SOLBEGIN---------------------------------
int main()
{
    ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
    int tC,div,cont,res,original;
    string num;

    cin >> tC;
    while (tC--)
    {
        original=0;
        num.clear();
        div=0;
        cont=0;
        res=0;
        cin >> num;
        original = stoi(num);
        if(original<10){
            cout<<num<<endl;
        }else{
          for (int i = 0; i < (int) num.size(); i++)
        {
            div=div*10+1;
            cont+=9;
        }  
        res=cont-(9-(original/div));
        cout<<res<<endl;  
        }
        
    
    }
}
//--------------------EOSOLUTION---------------------------------