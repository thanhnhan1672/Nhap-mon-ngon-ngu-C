#include <stdio.h>


void calculate_the_maximum(int n, int k) {
// tính tối đa của biến n và k

    int maxAnd = 0;
    int maxOr = 0;
    int maxXor = 0;
// khai báo biến maxAnd , maxOr và maxXor và gán giá trị cho nó = 0(khi chạy chương trình không bị sai)
    for (int i = 1; i <= n; i++) {
// khai báo thêm biến i bắt đầu từ 1 đến n ( n nhập từ bàn phím) và tăng dần 1 giá trị
       		 for (int j = i + 1; j <= n; j++) {          
		 if (((i & j) > maxAnd) && ((i & j) < k)) {
                	maxAnd = i & j;
// Nếu i & j lớn hơn maxAnd và bé hơn k (k được nhập từ bàn phím) thì giá trị maxAnd = i & j (& là toán tử của And)
// ví dụ : 0 & 0 = 0 ; 0 & 1= 0 ; 1 & 0 = 0 ; 1 & 1 =1 
// thực hiện phép toán lý luận AND trên mỗi căp bit ,bằng cách nhân chúng với nhau. Nếu cả hai ở vị trí được so sánh đều bằng 1 thì 
//sẽ hiện thị ở dạng nhị phân là 1 và ngược lại
    }
            if (((i | j) > maxOr) && ((i | j) < k)) {
                maxOr = i | j;

// Nếu i & j lớn hơn maxOR và bé hơn k (k được nhập từ bàn phím) thì giá trị maxOr = i & j (| là toán tử của Or)
//Ví dụ : 0 | 0 = 0 ; 0 | 1 = 1; 1 | 1 = 1; 1 | 1 = 1
// thao tác bit OR lấy hai dãy bit có độ dài bằng nhau và thực hiện phép toán lý luận bao hàm OR trên mỗi cặp bit tương ứng. 
//Kết quả ở mỗi vị trí sẽ là 0 nếu cả hai bit là 0, ngược lại thì kết quả là 1   
       
            if (((i ^ j) > maxXor) && ((i ^ j) < k)) {
                maxXor = i ^ j;

// Nếu i & j lớn hơn maxXor và bé hơn k (k được nhập từ bàn phím) thì giá trị maxXor = i & j (^ là toán tử của Xor)
// Ví dụ ; 0 ^ 0 = 0 ; 0 ^ 1 = 1 ; 1 ^ 0 = 0 ; 1 ^ 1 = 0
//Phép toán thao tác bit XOR có thể được sử dụng để đảo ngược các bit được lựa chọn trong thanh ghi .Chỉ đúng khi một trong hai đối số là đúng, nhưng không phải cả hai.
    }
    }
    }
// vòng lặp for đc lặp tới khi thỏa mãn mới thôi
    printf("%d\n%d\n%d", maxAnd, maxOr, maxXor);
// Dòng lên xuất giá trị đã đc tính toán ra màn hình
    }
}
int main() {
    int n, k;
    //dùng lệnh int gán giá trị n và k (n là số nhập từ bàn phím, k là điều kiện mà đề bài cho)
    printf("nhap n: ");
    //hiển thị dòng "nhap n: " ra màn hình
    scanf("%d", &n);
    printf("nhap k: ");
    //hiển thị dòng "nhap k" ra màn hình
    scanf("%d", &k);
    calculate_the_maximum(n, k);
    
    return 0;
}
