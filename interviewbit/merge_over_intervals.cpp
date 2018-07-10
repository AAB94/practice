/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
 
bool custom_sort(const Interval &a,const Interval &b){
    if(a.start < b.start)
        return true;
    else if(a.start == b.start && a.end > b.end)
        return true;
    return false;
    
} 
 
vector<Interval> Solution::merge(vector<Interval> &A) {
    vector<Interval> result;
    if(A.size() <= 1){
        return A;
    }
    sort(A.begin(),A.end(),custom_sort);
    int i,s,ns,e,ne,j;
    Interval newint(0,0);
    
    if(A.size() == 1)
        return A;
    else{
        for(i=0;i<A.size()-1;++i){
            s = A[i].start, ns = A[i+1].start;
            e = A[i].end, ne = A[i+1].end;
            if(s == ns && e == ns){
                result.push_back(A[i]);
            }
            else if(s < ns && e < ns){
                result.push_back(A[i]);
            }
            else if( e >= ns){
                bool f1=false;
                j = i+2;
                newint.start = s;
                if(e > ne)
                    newint.end = e;
                else
                    newint.end = ne;
                int max = newint.end;
                while(j < A.size() && (e >= A[j].start)){
                    f1 = true;
                    if(e < A[j].end && max < A[j].end){
                        max = A[j].end;
                    }
                    ++j;
                } 
                
                while(j < A.size() && (max >= A[j].start)){
                    if(max < A[j].end){
                        max = A[j].end;
                    }
                    ++j;
                }
                
                if(e > max);
                else if(e < max){
                    newint.end = max;
                }
                if(f1)
                    i = j;
                else
                    ++i;
                result.push_back(newint);
            }
        }
    }
    
    if(result[result.size()-1].end < A[A.size()-1].start){
        result.push_back(A[A.size()-1]);
    }
    
    return result;    
}
