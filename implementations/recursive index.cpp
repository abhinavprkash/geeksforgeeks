int lastIndex(int input[],int size, int x){
	if(size==0){
		return -1;
	}
	if(input[0]==x){
		return 0;
	}
	int ans = lastIndex(input+1,size-1,x);
	if (ans!=-1)
	{
		return ans+1;
	}else{
		return ans;
	}
}