#include <iostream.h>
#include <conio.h>
void main () {
	clrscr();
	int a[10] = {11,12,19,20,22,33,40,46,50,53};
	int target, beg=0, end=9, mid=(beg+end)/2;
	cout<<"Enter target ";
	cin>>target;
	while (a[mid]!=target && beg<=end){
		if (a[mid]<target) {
			beg=mid+1;
		}
		else if (a[mid]>target) {
			end=mid-1;
		}
		mid=(beg+end)/2;
	}
	if (a[mid]==target){
		cout<<"Search successful, target found at position: "<<mid+1;
	}
	else
		cout<<"The number is not found ";
	getch();
}