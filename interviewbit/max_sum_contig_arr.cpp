int Solution::maxSubArray(const vector<int> &A) {
    int i, j;
    int max_sum = A[0];
    int sum = 0;
    int temp;
    for( i = 0;i < A.size(); ++i){
        sum += A[i];
        sum = ( sum > A[i])? sum : A[i];
        max_sum = (max_sum > sum)? max_sum : sum;
    }
    return max_sum;
}

