	#include<stdio.h>
	int main(){
		long test_case,index1,index2,index3,unfin_index,total_jobs,finished_jobs,temp,temp_index;
		long warning;
		scanf("%ld",&test_case);
		
		
		
		while(test_case!=0){
			warning=0;
			scanf("%ld %ld",&total_jobs,&finished_jobs);
			long original_arr[total_jobs+1];
			long chef_arr[(total_jobs+1)/2];			
			long assisstant_arr[(total_jobs+1)/2];
			long unfin_arr[total_jobs+1];
			unfin_index=1;
				
			for(index1=0;index1<=total_jobs;index1++){
				original_arr[index1]=index1;
			}
			
			for(index1=0;index1<finished_jobs;index1++){
				scanf("%ld",&temp);
				original_arr[temp]=-1;
			}
		
		
		for(index1=1;index1<=total_jobs;index1++){
		
			if(original_arr[index1]!=-1)
				unfin_arr[unfin_index++]=original_arr[index1];
			
		}
		
		
		for(index2=1;index2<unfin_index;index2+=2){
			printf("%ld ",unfin_arr[index2]);
			warning+=1;
			unfin_arr[index2]=-2;
		}
		if(warning==0){
			printf(" \n");
		}
		else
			printf("\n");
		
		warning=0;
		
		for(index3=2;index3<unfin_index;index3+=2){
			if(unfin_arr[index3]>-2){
				printf("%ld ",unfin_arr[index3]);
				warning+=1;
			}
				
		}
		if(warning==0){
			printf(" \n");
		}
	
		
			
		test_case--;
		}
		return 0;
	}
