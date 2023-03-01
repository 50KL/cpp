#include <stdio.h>
#include <string.h>
//using namespace std;
const string s="codeforces";
int main(){
	int t,a[25],numc=0;
	scanf("%d\n",&t);
	for(int n=0;n<t;n++) {
		char c;
		scanf("%s",&c);
		for(int m=0;m<10;m++)
			if(s[m]==c) numc++;
		if(numc) a[n]=1;
		else a[n]=0;
		numc=0;
	}
	for(int n=0;n<t;n++) {
		if(a[n]) printf("YES\n");
		else printf("NO\n");
	}
}
