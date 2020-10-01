#include<iostream>

using namespace std;

//	Time complexity is O(nlogn) in average case and O(n^2) in worst case

int Partition(int *A,int left,int right){
	
	int pivot = A[left];
	int i = left;
	int j = (right+1);
	while(i<j){
		do{
			i++;
		}while(A[i]<=pivot);
		do{
			j--;
		}while(A[j]>pivot);
		
		if(i<j){
			swap(A[i],A[j]);
		}
		
	}
	//Bring the pivot element to its sorted position,j is the index of the pivot element
	swap(A[left],A[j]);
	return j;
	
}

void QuickSort(int *A,int left,int right){
	
	if(left>=right){
		
		return;
	}
	
	int p=Partition(A,left,right);//Get the partition index
	QuickSort(A,left,p-1);
	QuickSort(A,p+1,right);
}

int main(){
	
	int A[]={9,8,7,6,5,4,3,2};
	QuickSort(A,0,7);
	for(int i=0;i<8;i++){
		
		cout<<A[i]<<" ";
	}
	
	return 0;
}
