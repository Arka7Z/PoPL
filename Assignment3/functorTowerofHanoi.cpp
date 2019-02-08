#include <bits/stdc++.h>
using namespace std;

class TowerOfHanoi{

    public:
            void operator()(int n, char from, char aux, char to)
            {
                    if(n==1)
                    {
                       cout<<"\t\tMove disc 1 from "<<from<<" to "<<to<<"\n";
                       return;
                    }
                    else
                    {
                       (*this)(n-1,from,to,aux);
                       cout<<"\t\tMove disc "<<n<<" from "<<from<<" to "<<to<<"\n";
                       (*this)(n-1,aux,from,to);
                    }
            }
        
};

int main()
{
    TowerOfHanoi tower;
    tower(8,'A','B','C');
    return 0;
}
