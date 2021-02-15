#include<stdio.h>
#include<stdlib.h>
int tulona(const void *a,const void *b){
	return (*(int*)a - *(int*)b);
}

int main(){
	
	int test_case,num_songs,fav_song_index,i,song_index,temp,new_index;
	scanf("%d",&test_case);
	
	while(test_case!=0){
		scanf("%d",&num_songs);
		int song_arr[num_songs];
		for(song_index=0;song_index<num_songs;song_index++){
			scanf("%d",&song_arr[song_index]);
		}
		scanf("%d",&fav_song_index);
		
		temp=song_arr[fav_song_index-1];
		
		qsort(song_arr,num_songs,sizeof(int),tulona);
		
		new_index=-1;
		
		for(i=0;i<num_songs;i++){
			if(song_arr[i]==temp){
				new_index=i;
				//printf("%d ",song_arr[i]);
			}
			if(new_index!=-1)
				break;
				
		}
		
		printf("%d\n",new_index+1);
		test_case--;
	}	
	
	return 0;
}
