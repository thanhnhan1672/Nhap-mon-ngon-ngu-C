#include<stdio.h>
void Nhap_pt_mang(int n, int a[])
{
    for (int i = 0; i < n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

}
void Hien_thi_pt_mang(int n, int a[])
{
    printf("Cac phan tu trong mang: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

}
void Hien_thi_tong_chan(int n, int a[])
{
    int S = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0) {
            S += a[i];
        }
    }
    printf("\nTong cac so chan la: %d", S);

}
void Dem_chan_le_0(int n, int a[])
{
    int demchan = 0, demle = 0, dem0 = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
            demchan++;
        if(a[i] % 2 == 1)
            demle++;
        if(a[i] == 0)
            dem0++;
    }
    printf("\nCo tat ca %d so chan, %d so le va %d so 0", demchan, demle, dem0);

}
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
