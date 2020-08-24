#include <bits/stdc++.h>
using namespace std;
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
#include <vector>
std::vector<long int> Eratosthenes( const long int N )
{
    std::vector<bool> is_prime( N + 1 );
    for(long int i = 0; i <= N; i++ )
    {
        is_prime[ i ] = true;
    }
    std::vector<long int> P;
    for( int i = 2; i <= N; i++ )
    {
        if( is_prime[ i ] )
        {
            for(long int j = 2 * i; j <= N; j += i )
            {
                is_prime[ j ] = false;
            }
            P.emplace_back( i );
        }
    }
    return P;
}
int main()
{
    long int N;
    cin >> N;
    for( const auto &x: Eratosthenes( N ) )
    {
        cout << x << ",";
    }
    return 0;
}