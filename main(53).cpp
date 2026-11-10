// Step 1:-
// Instead of trying to count the number of ways they do not attack each other we rather count the opposite
// Step 2:-
//  I formed a bijection between the exsisting problem and the problem of counting the number of 
// ways to fill a grid that basically is a replica of the knights move on the chess board.
// Step 3:-
// Now I observed that if there are xₙ ways to do step 2 then for xₙ₊₁ I only have to care about the new 
// row and column added 
// Step 4:-
// So now figuring out how to fill the L shaped grids into the newly added column and row is trivial
// Step 5:-
// The number of ways actually gives us a recurssion relation xₙ₊₁-xₙ=8*(n-1)*(n-2) [you might 4*(n-1)*(n-2)]
// [you might argue that it should have ben this  4*(n-1)*(n-2) but if we look closely the knights fight each
//other in two ways]
// After this the problem is trivial!!!!!







#include <iostream>
int main(){
    long long int n;
    std::cin>>n;
    long long int a;
    for(int i=1;i<=n;i++){
        a=((i*i)*(i*i-1))/2 -8*(i-1)*(i-2);
        std::cout<<a<<'\n';
    }
    return 0;
}