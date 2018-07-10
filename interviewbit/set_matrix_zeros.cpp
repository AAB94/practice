

void Solution::setZeroes(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int r,c,i,j;
    set<int> zr;    
    set<int> zc;
    set<int>::iterator it;
    for(r =0;r<A.size();++r){
        for(c=0;c<A[r].size();++c){
            if(A[r][c] == 0){
                zr.insert(r);
                zc.insert(c);
            }
        }
    }
    
    for(it=zr.begin();it!=zr.end();++it){
        for(i=0;i < A[*it].size();++i){
            A[*it][i] = 0;
        }    
    }
    
    for(it=zc.begin();it!=zc.end();++it){
        for(i=0;i < A.size();++i)
            A[i][*it] = 0;
    }
        
}

