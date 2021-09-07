int Solution::solve(vector<int> &A) {
int even = 0 , odd = 0;
    int n = A.size();
    for ( int i = 0 ; i < n ; ++i){

        if ( i % 2 == 0){
            even = even + A[i];
        }else
            odd = odd + A[i];
    }
    int count = 0 ;
    int evensofar = 0 , oddsofar = 0;

    for ( int i = 0 ; i < n ; ++i){

        if ( i % 2 == 0){
            even = even - A[i];

            if ( evensofar + odd == even + oddsofar)
                count ++;

            evensofar = evensofar+A[i];
        }else {

            odd = odd - A[i];
            if (evensofar + odd == even + oddsofar)
                count ++;

            oddsofar = oddsofar + A[i];

        }
    }

return count;
}
