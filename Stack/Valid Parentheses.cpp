class Solution {
public:
    bool isValid(string s) {
     int op1=0,op2=0,op3=0;
     int n=s.size();
     stack<char>st;
     for(int i=0;i<n;i++){
        if(s[i]=='('||s[i]=='['||s[i]=='{'){
         st.push(s[i]);
        }
        else if(s[i]==')'){
            if(st.empty())return false;
         if(st.top()!='('){
            return false;
         }
         st.pop();
          
        }
        else if(s[i]=='}'){
            if(st.empty())return false;
          if(st.top()!='{'){
            return false;
         }
         st.pop();
        }
        else if(s[i]==']'){
            if(st.empty())return false;
           if(st.top()!='['){
            return false;
         }
         st.pop();
        }
     }  
     if(st.size()!=0)return false;
     return true; 
    }
};
