// program in c to merge two arrays

#include<stdio.h>
int main(){
  int a[10], b[20], c[30], n, m;
  printf("Enter number of elements in array 'a' ");
  scanf("%d",&n);
  
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }

  printf("Enter number of elements in array 'b' ");
  scanf("%d",&m);
  
   for(int i=0;i<m;i++){
    scanf("%d",&b[i]);
  }

  for(int i=0;i<n;i++){
    c[i] = a[i];
  }

  for(int j=0;j<m;j++){
    int i = n;
    c[i+j] = b[j];
  }

  for(int j = 0;j<(m+n);j++){
    printf("%d ",c[j]);
  }


  return 0;
}