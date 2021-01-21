#include<bits/stdc++.h>

int main(int arg, char* argv[])
{
  if(arg<2) {
    printf("Usage:\n    rtime<space>program_name\n\n");
    return -1;
  }
  printf(" PID\tNAME\t\tTIME\n");
  char szCMD[256] = {0};
  sprintf(szCMD,"ps -eo pid,comm,etime | grep %s",(const char*)argv[1]);
  system (szCMD);
  return 0;
}
