//Library Functions
#include <stdio.h>
#include <math.h>

//code starting
int main(){
	
	//Heading of Program here
  printf("✨Rec-Sq Solution Function✨\n\n");
	printf("💠 Created By Mohammad Atikul Hoque Showrav\n");
	printf("💠 Batch : 47-F\n");
	printf("💠 Department of Software Engineering\n");
	printf("💠 Daffodil International University\n");
	printf("💠 Reg : 261-35-272\n\n");
	
//value adding rectangular
    int a,b;
    printf("🟩 Rectangular Shape Info**\n\n");
    printf("📐 Enter the two values : ");
    scanf("%d %d",&a,&b);
    printf("\n");
    
//Math Rectangular here
    int area = a*b;
    int perimeter = 2*(a+b);
    int sum = a+b;
    int diagonal = sqrt(a*a+b*b);
    
//rectangular output here
    printf("👉 Area = %d square..\n",area);
    printf("👉 Perimeter = %d\n",perimeter);
    printf("👉 Sum = %d\n",sum);
    printf("👉 Diagonal Length = %d\n",diagonal);
    printf("👉 Diagonal Quantity = 2\n\n");
    
//If-else & loop starting here
    int s;
    while(1){ //loop from here
        printf("🚩 Wanna Try our Square function ? \n\n");
        printf("▶ If yes-Type (1), If no-Type (2) : ");
        scanf("%d",&s);
        
//If-else term from here
        if(s==2){
            printf("\n🔹 Thank you for Patience\n"); 
            break;
        }
        else if(s==1){
            printf("\n✨Square Shape Info✨\n\n");
            int l;
            printf("📐 Enter the Length value of Square : ");
            scanf("%d",&l);
            printf("\n");
            
//Square Math term here
            int area2 = l*l;
            int perimeter2 = 4*l;
            
//Square output here
            printf("👉 Area = %d\n",area2);
            printf("👉 Perimeter = %d\n\n",perimeter2);
            printf("🔹 Thank you for using this program my Friend\n");//Thanks message
            break;
        }
        else{
            printf("\n❌ 420 error\n\n");
        }
    }
    return 0;
}
