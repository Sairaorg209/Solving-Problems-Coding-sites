void fun(int n){
	if(n>0){
		fun(n-2);
		printf("%d",n-1);
		fun(n-2)
	}
}

int main(){
	fun(10);
}
