#include<stdio.h>
void Nhap_pt_mang(int n, int a[]);

void Hien_thi_pt_mang(int n, int a[]);

void Hien_thi_tong_chan(int n, int a[]);

void Dem_chan_le_0(int n, int a[]);
    
int main(){
  int n;
  printf("Nhap n = ");
  scanf("%d", &n);
  int a[n];
  Nhap_pt_mang(n, a);
  Hien_thi_pt_mang(n, a);
  Hien_thi_tong_chan(n, a);
  Dem_chan_le_0(n, a);
  return 0;
}
void Nhap_pt_mang(int n, int a[]){}
void Hien_thi_pt_mang(int n, int a[]){}
void Hien_thi_tong_chan(int n, int a[]){}
void Dem_chan_le_0(int n, int a[]){}
