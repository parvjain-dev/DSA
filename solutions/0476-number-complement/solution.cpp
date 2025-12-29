class Solution {
public:
    int findComplement(int num) {
        string str= "";
        int temp , res=0;
        while(num>0){
            temp = num%2;
            str+= to_string(temp);
            num=num/2;
        }
        cout<<str<<endl;
        for(int i =0; i< str.length(); i++){
            if(str[i]=='1') str[i]='0';
            else str[i]='1';
        }
        cout<<str<<endl;
        for(int i =str.length()-1; i>=0; i--){
            if(str[i]=='1') res=res+ pow(2,i);
            
        }

        
        return res;
    }
};
