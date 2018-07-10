vector<int> Solution::plusOne(vector<int> &A) {
    vector<int> res;
    int i;
    int carry = 0;
    int temp = 0;
    bool flag = false;
    temp = A.back() + 1;
    if(temp > 9){
        carry = 1;
        temp = 0;
    }
    res.push_back(temp);
    for(i=A.size()-2;i>=0;--i){
        if( carry != 0){
            temp = carry + A[i];
            if(temp > 9){
                carry = 1;
                temp = 0;
            }
            else
                carry = 0;
        }
        else{
            temp = A[i];
        }
        res.push_back(temp);
    }
    if(carry !=0)
        res.push_back(1);
    for(i=res.size()-1;i>=0 && res[i] == 0;--i){
        flag = true;
    }
    i++;
    vector<int> res1(res.begin(),res.begin()+i);
    reverse(res1.begin(), res1.end());
        
    return res1;
}

