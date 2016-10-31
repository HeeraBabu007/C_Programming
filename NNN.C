  #include<iostream.h>
  #include<conio.h>
  void main()
  {
  int n,i;
  float a[20],big;
  clrscr();
  count<<"enter the total subjects";
  cin>>n;
  count<<"enter the marks of subjects";
  for(i=1;i<=n;i++)
  cin>>a[i];
  big=a[i];
  for(i=2;i<=n;i++);
  if(a[i]>big)big=a[i];
  cout<<"the largest numberis"<<big;
  getch();
  }