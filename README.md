# Array: Bài tập lớn KTLT chương II

#Bài tập: Array.h
• Tạo một ADT có tên là Array và lưu trữ trong file Array.h
• ADT này bao gồm 2 thành phần thông tin:
– Max: mảng các giá trị số thực
– Count: số lượng các giá trị lưu trữ trong mảng Max
• ADT này cho phép thực hiện một số thao tác trên mảng số
thực:
1. Khởi tạo một phiên bản mới của chính nó
2. Gán giá trị cho các thành phần thông tin của một ADT Array
3. Sắp xếp các phần tử của mảng theo giải thuật bubble sort
4. Sắp xếp các phần tử của mảng theo giải thuật insertion sort
5. Sắp xếp các phần tử của mảng theo giải thuật selection sort
6. Tìm giá trị lớn nhất được lưu trữ trong mảng và vị trí của các phần tử có giá trị lớn nhất trong mảng
7. Tìm giá trị nhỏ nhất được lưu trữ trong mảng và vị trí của các phần tử có giá trị nhỏ nhất trong mảng
8. Tìm giá trị trung bình của các phần tử trong mảng
9. Tìm độ lệch về giá trị giữa 2 phần tử có vị trí biết trước trong mảng
10. Tìm độ lệch trung bình về giá trị của các phần tử trong mảng
11. Tìm kiếm (theo giải thuật sequential search) phần tử của mảng có giá trị là x ; nếu tìm thấy thì đưa ra vị trí của phần tử đó trong mảng, nếu không thì trả lại giá trị là 0.
12. Tìm kiếm (theo giải thuật binary search) phần tử của mảng có giá trị là x ; nếu tìm thấy thì đưa ra vị trí của phần tử đó trong mảng, nếu không thì thông báo là không tìm thấy phần tử như vậy.
13. Biểu diễn độ phức tạp tính toán theo ký pháp big-O và hiện thị thời gian tính toán thực tế bằng micro-second. 

#Bài tập: CheckArray.c
• Viết một chương trình cung cấp các chức năng để
kiểm tra ADT này; chương trình được lưu trữ trong file
CheckArray.c
• menu(): gồm các tùy chọn
– 1-13: các chức năng tính toán trên mảng
• Tùy chọn 1: có menu con cho phép
– Nạp thông tin vào từ bàn phím hoặc từ 1 file dữ liệu vào/ra (I/O
data file)
– Quay lại menu chính
• Tùy chọn 2-13: có menu con cho phép
– In kết quả ra màn hình hoặc ra 1 file dữ liệu vào/ra (I/O data file)
– Quay lại menu chính
– 14: thoát khỏi chương trình. 
