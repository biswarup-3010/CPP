#include<stdio.h>
struct item{
	double cost,wt,ratio;
};
int main(){
	int n;
	double vol,max_wt = 0;
	struct item pd[100];
	printf("Enter no of elemets : ");
	scanf("%d",&n);
	printf("Enter the cost and weight of the items : \n");
	for(int i =0;i<n;i++){
		scanf("%lf%lf",&pd[i].cost,&pd[i].wt);
		pd[i].ratio = pd[i].cost / pd[i].wt;
	}
	//sort
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(pd[j].ratio < pd[j+1].ratio){
				struct item temp = pd[j];
				pd[j] = pd[j+1];
				pd[j+1] = temp;
			}
		}
	}
	printf("Enter the knapshack volume : ");
	scanf("%lf",&vol);
	for(int i=0;i<n;i++){
		if(vol >= pd[i].wt){
			vol -= pd[i].wt;
			max_wt += pd[i].cost;
			
		}
		else{
			max_wt += vol * pd[i].ratio;
			break;
		}
		printf("%lf\t%lf\n",vol,max_wt);
	}
	printf("The max cost carry by the knapshack = %lf",max_wt);
	return 0;
}
