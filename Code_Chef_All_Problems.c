//FLOW001

#include <stdio.h> 

int main() {
	// Read the number of test cases.
	int T;
	scanf("%d", &T);
	while (T--) {
		// Read the input a, b
		int a, b;
		scanf("%d %d", &a, &b);

		// Compute the ans.
		int ans = a + b;
		printf("%d\n", ans);
	}

	return 0;
}


//EQUALCOIN 

#include <stdio.h>

int main(){

    int t, x, y;
    scanf("%d",&t);

    while(t--){
        
        scanf("%d %d",&x,&y);

        if((x+2*y)%2==1){
            printf("NO\n");
        }

        else{
            if(x==0 && (y%2==1)){
                printf("NO\n");
            }

            else{
                printf("YES\n");
            }
        }
    }

    return 0;
    
}


CHEAPFUEL 

#include <stdio.h>

int main(){

    int t, x, y, a, b, k;
    scanf("%d",&t);

    while(t--){
        
        scanf("%d %d %d %d %d",&x,&y,&a,&b,&k);

        for(int i=0; i<k; i++){
            x = x+a;
            y = y+b;
        }

        if(x>y){printf("DIESEL\n");}
        else if(x<y) {printf("PETROL\n");}
        else{printf("SAME PRICE\n");}
    }

    return 0;
    
}


CHSFORMT

#include <stdio.h>

int main(void) {

    int t,a,b;
    scanf("%d",&t);

    while(t--){

        scanf("%d%d",&a,&b);

        if(a+b<3){
            printf("1\n");
        }
        else if(3<=a+b && a+b<=10){
            printf("2\n");
        }
        else if(11<=a+b && a+b<=60){
            printf("3\n");
        }
        else if(60<a+b){
            printf("4\n");
        }
    }
	return 0;
}


CHEFRUN 

#include <stdio.h>

int absolute(float a){
    if(a<0){
        return -1*a;
    }
    return a;
}

int main(){

    int t; 
    scanf("%d",&t);
    

    while(t--){

        float x1, x2, x3, v1, v2, t1, t2;

        scanf("%f %f %f %f %f",&x1,&x2,&x3,&v1,&v2);

        t1 = (absolute(x3-x1)/v1);
        t2 = (absolute(x3-x2)/v2);


        if(t1<t2){
            printf("Chef\n");
        }

        else if(t1>t2){
            printf("Kefa\n");
        }

        else{
            printf("Draw\n");
        }
        
    }
	return 0;
}



REMISS 

#include <stdio.h>

int max(int a, int b){
    if(a>=b){
        return a;
    }

    return b;
}

int main(){

    int t;

    scanf("%d",&t);

    while(t--){
        
        int a,b;
        scanf("%d%d",&a,&b);
        printf("%d %d\n",max(a,b),a+b);
    
    }
    return 0;
}

 


CHEFROUT

#include <stdio.h>

int main(){

    int t;

    scanf("%d",&t);

    while(t--){
        
        char s[100001];
        scanf("%s",&s);

        int ans = 1;

        int i=0;
        while(s[i+1]!='\0'){
            
            if(s[i]>s[i+1]){
                ans = 0;
                break;
            }
            i++;
        }

        if(ans==1){
            printf("yes\n");
        }

        else{
            printf("no\n");
        }

    
    }
    return 0;
}


//CEQUAL (Partially Correct)

#include <stdio.h>
#define max 99999

int main(){

    int t;
    scanf("%d",&t);

    while(t--){

        int A[max]={0};
        int n;
        int flag = 0;
        
        scanf("%d",&n);
        int a[n];

        for(int i=0; i<n; i++){
            scanf("%d",&a[i]);
        }


        for(int i = 0; i<n; i++){
            A[a[i]]++;
        }

        for(int i=0; i<max; i++){
            if(A[i]>1){
                flag = 1;
                break;
            }
        }

        if(flag==0){
            printf("No\n");
        }

        else{
            printf("Yes\n");
        }

    }

    
    return 0;
}


//INTEST 
#include <stdio.h>


int main(){

    int n,k,num;
    int count = 0;

    scanf("%d %d",&n,&k);

    for(int i=0; i<n; i++){
        scanf("%d",&num);
        if(num%k==0){
            count++;
        }
    }

    printf("%d\n",count);
}



//START01 

#include <stdio.h>

int main(){
    
    int a;
    scanf("%d",&a);
    printf("%d",a);
}


//FLOW006 

#include <stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    while(t--){

        int n;
        scanf("%d",&n);
        
        int sum = 0;
        while(n!=0){
            sum = sum + n%10;
            n = n/10;
        }

        printf("%d\n",sum);
    }

    return 0;
}


//FLOW002

#include <stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    while(t--){

        int a,b;
        scanf("%d%d",&a,&b);

        printf("%d\n",a%b);
    }

    return 0;
}



FLOW004
#include <stdio.h>
#include <math.h>

int count_digits(int n){
    
    int count = 0;
    while(n!=0){
        n=n/10;
        count++;
    }
    return count;
}

int main(){

    int t;
    scanf("%d",&t);

    while(t--){

        int n;
        scanf("%d",&n);
        

        int f = n/(int)pow(10,count_digits(n)-1);
        int l = n%10;

        printf("%d \n",f+l);
    }

    return 0;
}


LUCKFOUR 
#include <stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        
        int n;
        scanf("%d",&n);

        int count = 0;
        while(n!=0){
            if(n%10==4){
                count++;
            }
            n = n/10;
        }

        printf("%d\n",count);
    }

    return 0;
}


FLOW007 
#include <stdio.h>

int count_digits(int n){
    
    int count = 0;
    while(n!=0){
        n=n/10;
        count++;
    }
    return count;
}

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        
        int num;
        scanf("%d",&num);

        int n = count_digits(num);
        int arr[n];


        for(int i=0; num!=0; i++){
            arr[i]=num%10;
            num = num/10;
        }

        int j = 0;

        for(int i=0; i<n; i++){
            if(arr[i]==0){
                j++;
                continue;
            }

            else{
                break;
            }
        }

        for(int i=j; i<n; i++){
            printf("%d",arr[i]);
        }

        printf("\n");
    }

    return 0;
}



FRGAME 

#include <stdio.h>


int main(){


    int t;
    scanf("%d",&t);

    while(t--){
        
        int a,b,c,d;
        int n,s;

        scanf("%d %d %d %d",&a,&b,&c,&d);
        
        n = a;
        s = b;

        if(n>=s){
            s = s + c;
        }

        else{
            n = n + c;
        }

        if(n>=s){
            s = s + d;
        }

        else{
            n = n+d;
        }

        if(n>=s){
            printf("N\n");
        }

        else{
            printf("S\n");
        }
    }


    return 0;
}



CHEFFAV 
//You are given a string S of size N that contains both "code" and "chef" as a substring. Please determine if S is Chef's favourite.

#include <stdio.h>

int check_code(char* s){

    if(*(s)=='c' && *(s+1)=='o' && *(s+2)=='d' && *(s+3)=='e'){
        return 1;
    }

    return 0;
}

int check_chef(char* s){

    if(*(s)=='c' && *(s+1)=='h' && *(s+2)=='e' && *(s+3)=='f'){
        return 1;
    }

    return 0;
}

int main(){

    int t;
    scanf("%d",&t);

    while(t--){

        int n;
        scanf("%d",&n);

        char str[n];
        scanf("%s",str);

        int code = -1;
        int chef = -1;

        for(int i=0; i<n; i++){
            if(str[i]=='c' && check_code(&str[i])==1){
                code = i;
                break;
            }
        }


        for(int i=0; i<n; i++){
            if((str[i]=='c') && (check_chef(&str[i])==1)){
                chef = i;
                break;
            }
        }


        if(code!=-1 && chef!=-1){
            if(chef>code){
                printf("AC\n");
            }

            else{
                printf("WA\n");
            }
        }

        else{
            printf("WA\n");
        }
        
        
    }

    return 0;
}



DIET 

#include <stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    while(t--){

        int n,k;
        scanf("%d %d",&n,&k);
        
        int arr[n];

        for(int i = 0; i<n; i++){
            scanf("%d",&arr[i]);
        }

        int flag = 1;
        int day;

        int sum = 0;

        for(int i=0; i<n; i++){
            sum = sum+arr[i];
            if(sum-(k*(i+1))<0){
                flag = 0;
                day = i+1;
                break;
            }
        }

        flag ? printf("YES\n"): printf("NO %d\n",day);
    }

    return 0;
}


WATMELON 
#include <stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    while(t--){

        int n;
        scanf("%d",&n);
        
        int arr[n];

        for(int i = 0; i<n; i++){
            scanf("%d",&arr[i]);
        }

        int sum = 0;
        for(int i=0; i<n; i++){
            sum = sum + arr[i];
        }

        
        if(sum<0){
            printf("NO\n");
        }

        else{
            printf("YES\n");
        }
    }

    return 0;
}



HS08TEST

#include <stdio.h>

int main(){


    int amount;
    float total;

    scanf("%d %f",&amount,&total);

    if((amount%5==0) && ((total-0.50)>=amount)){
        total = total - amount - 0.50;
        printf("%0.2f\n",total);
    }

    else{
        printf("%0.2f",total);
    }


    return 0;
}



BUYPLSE

#include <stdio.h>

int main(){
    
    int a,b,x,y;
    
    scanf("%d%d%d%d",&a,&b,&x,&y);
    
    printf("%d",(a*x)+(b*y));
    return 0;
}


ISBOTH

#include <stdio.h>

int main() {
	
	int n;
	scanf("%d",&n);
	
	if(n%5==0 && n%11==0){
	    printf("BOTH\n");
	}
	
	else if(n%5!=0 && n%11!=0){
	    printf("NONE\n");
	}
	
	else{
	    printf("ONE\n");
	}
}


DIFACTRS 

#include <stdio.h>

int main() {
	
	
	int n;
	scanf("%d",&n);
	   
	int c = 0;
	for(int i=1; i<=n; i++){
	    if(n%i==0){
	        c++;
	    }
	}
	
	printf("%d\n",c);
	
	for(int i=1; i<=n; i++){
	    if(n%i==0){
	        printf("%d ",i);
	    }
	}
	
	return 0;
}



FSQRT
#include <stdio.h>
#include <math.h>

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        float n;
        scanf("%f",&n);
        int sr = (int)sqrt(n);
        
        printf("%d\n",sr);
    }

    return 0;
}


FLOW017
//Find Second Largest number among 3 numbers.
#include <stdio.h>
#include <math.h>

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        
        if((a>=b && a<=c) || (a>=c && a<=b)){
            printf("%d\n",a);
        }
        
        else if((b>=a && b<=c) || (b>=c && b<=a)){
            printf("%d\n",b);
        }
        
        else{
            printf("%d\n",c);
        }
    }

    return 0;
}


FLOW018
#include <stdio.h>
#include <math.h>

long long int fact(int n){
    long long int f = 1;
    
    for(int i=1; i<=n; i++){
        f = f*i;
    }
    
    return f;
}

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        int n;
        scanf("%d",&n);
        
        long long int f;
        
        f = fact(n);
        
        printf("%lld\n",f);
       
    }

    return 0;
}



FLOW008 
#include <stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    while(t--){

        int n;
        scanf("%d",&n);

        if(n<10){
            printf("Thanks for helping Chef!\n");
        }
        
        else{
            printf("-1\n");
        }
    }

    return 0;
}



CHOPRT 
#include <stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    while(t--){

        int a,b;
        scanf("%d%d",&a,&b);

        if(a>b){
            printf(">\n");
        }
        
        else if(a<b){
            printf("<\n");
        }
        
        else{
            printf("=\n");
        }
        
    }

    return 0;
}

MUFFINS3 
#include <stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    while(t--){

        int n;
        scanf("%d",&n);
        
        int result = (n/2)+1;

        printf("%d\n",result);
    }

    return 0;
}



FLOW013
#include <stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    while(t--){

        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        
        int sum = a+b+c;
        
        if(sum==180){
            printf("YES\n");
        }
        
        else{
            printf("NO\n");
        }
    }

    return 0;
}


DECINC
#include <stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    
    if(n%4==0){
        n=n+1;
    }
    
    else{
        n=n-1;
    }
    
    printf("%d",n);
   

    return 0;
}


AMR15A
#include <stdio.h>

int main(){
	
	int n;
	scanf("%d",&n);
	
	int arr[n];
	
	int even = 0;
	int odd = 0;
	
	for(int i=0; i<n; i++){
	    scanf("%d",&arr[i]);
	}

    for(int i=0; i<n; i++){
        if((arr[i])%2==0){
	        even=even+1;
	    }
	    
	    else{
	        odd=odd+1;
	    }
    }
	
	if(even>odd){
        printf("READY FOR BATTLE\n");
    }

    else{
        printf("NOT READY\n");
    }

	return 0;
}




EXAMTIME
#include <stdio.h>

int main(){
    
    int t;
    scanf("%d",&t);

    while(t--){

        int d1,d2,t1,t2,m1,m2;
        scanf("%d %d %d %d %d %d",&d1,&t1,&m1,&d2,&t2,&m2);
        
        int d = d1+t1+m1;
        int s = d2+t2+m2;

        if(d>s){
            printf("DRAGON\n");
        }

        else if(s>d){
            printf("SLOTH\n");
        }

        else{
            if((t1==t2) && (d1==d2) && (m1==m2)){
                printf("TIE\n");
            }

            else if(d1>d2){
                printf("DRAGON\n");
            }

            else if(d2>d1){
                printf("SLOTH\n");
            }

            else if(t1>t2){
                printf("DRAGON\n");
            }

            else{
                printf("SLOTH\n");
            }
        }

    }

    return 0;
}



MINFD
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);

    while(t--){
        int n, x;

        scanf("%d%d",&n,&x);

        int array[n];

        for(int i=0; i<n; i++){
            scanf("%d",&array[i]);
        }

        sort(array,array+n,greater<int>());

        int sum = 0;
        int bond;

        for(int i=0; i<n; i++){
            sum = sum + array[i];
            if(sum>=x){
                bond = i+1;
                break;
            }
        }

        if(sum<x){
            printf("-1\n");
        }

        else{
            printf("%d\n",bond);
        }
        
    }

    return 0;
}



CRYCOLR 
#include <stdio.h>

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        
        int n;
        scanf("%d",&n);
        
        int arr[3][3];

        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                scanf("%d",&arr[i][j]);
            }
        }


        int x = arr[0][1]+arr[0][2]+arr[1][2];
        int y = arr[1][0]+arr[2][0]+arr[2][1];

        if(x>=y){
            printf("%d\n",x);
        }
        else{
            printf("%d\n",y);
        }

    }

    return 0;
}



POWSUM 
#include <stdio.h>
#include <math.h>

int sum_of_array(int arr[], int n){
    
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }

    return sum;
}

int min_of_array(int arr[], int n){
    int min = 0;
    for(int i=0; i<n; i++){
        if(arr[min]>=arr[i]){
            min = i;
        }
    }

    return min;
}

int main(){

    int t;
    scanf("%d",&t);

    while(t--){
        
        int n;
        scanf("%d",&n);

        int arr[n];

        for(int i=0; i<n; i++){
            scanf("%d",&arr[i]);
        }

        int sum = sum_of_array(arr,n);

        if(ceil(log2(sum)) == floor(log2(sum))){
            printf("0\n");
        }

        else{
            int min_index = min_of_array(arr,n);

            int difference = pow(2,(ceil(log2(sum)))) - sum;

            int multiplier = (arr[min_index]+difference)/arr[min_index];

            // printf("d m min: %d %d %d\n",difference,multiplier,min_index);

            printf("1\n");
            printf("1 %d\n",multiplier);
            printf("%d\n",min_index+1);
        }


    }

    return 0;
}




HELIUM3 
#include <iostream> 
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int a,b,x,y;
        cin>>a>>b>>x>>y;

        if((x*y)>=(a*b)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    }
    
    return 0;
}




WCC 
#include <iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int x;
        string s;

        cin>>x>>s;

        int chef = 0;
        int carlsen = 0;

        for(int i=0; i<s.length(); i++){
            if(s[i]=='C'){
                carlsen = carlsen + 2;
            }
            else if(s[i]=='N'){
                chef = chef + 2;
            }

            else{
                carlsen++;
                chef++;
            }
        }

        if(carlsen>chef){
            cout<<60*x<<endl;
        }

        else if(chef > carlsen){
            cout<<40*x<<endl;
        }

        else{
            cout<<55*x<<endl;
        }

    }


    return 0;
}




NOFIX 
#include <iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        int arr[n];

        for(int i=0; i<n; i++){
            cin>>arr[i];
        }


        int flag = 0;
        int index = -1;
        for(int i=0; i<n; i++){
            if(arr[i]==i+1){
                flag = 1;
                index = i;
                break;
            }
        }

        if(flag==0){
            cout<<0<<endl;
        }

        else{
            int count = 0;
            int mini = -1;
            for(int i=index; i<n; i++){
                if((i+1)-arr[i]==(mini)){
                    count++;
                    mini--;
                }
            }

            cout<<count+1<<endl;
        }


    }
    return 0;
}





XORPAL 
#include <iostream>
using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){

        int n;
        cin>>n;

        string s;
        cin>>s;

        int zero = 0;
        int one = 0;

        for(int i=0; i<s.length(); i++){
            if(s[i]=='0'){
                zero++;
            }
            else{
                one++;
            }
        }

        if(s.length()<=2){
            cout<<"YES"<<endl;
        }

        else if(s.length()%2==0){
            if((one%2==1) and (one!=zero)){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }

        else{
            
            cout<<"YES"<<endl;
            
        }
    }

    return 0;
}



