class Conversion{
    int convert(int num,int base){
        int ind=0;
        int ans=0;
        while(num>0){
            ans+=(num%base*pow(10,ind));
            num=num/base;
            ind++;
        }
        return ans;
    }
    
    int convert10(int num,int base){
        int ind=0;
        int ans=0;
        while(num>0){
            ans+=(num%10*pow(base,ind));
            num=num/10;
            ind++;
        }
        return ans;
    }
    
    int converBase1ToBase2(int num,int base1,int base2){
        int cvtbase10=convert10(num,base1);
        int cvtbase2=convert(cvtbase10,base2);
        return cvtbase2;
    }
};
