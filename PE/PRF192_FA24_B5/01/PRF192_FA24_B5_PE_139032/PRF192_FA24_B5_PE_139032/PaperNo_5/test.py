import pandas as pd

# Danh sách Use Case và mức độ khó dễ
use_cases = [
    ("Đăng ký tài khoản", "Dễ"),
    ("Đăng nhập/Quên mật khẩu", "Dễ"),
    ("Tìm kiếm chuyến bay", "Trung bình"),
    ("Chọn chuyến bay và ghế ngồi", "Trung bình"),
    ("Đặt vé máy bay", "Khó"),
    ("Thanh toán vé máy bay", "Khó"),
    ("Nhận vé điện tử", "Trung bình"),
    ("Quản lý đặt chỗ", "Khó"),
    ("Hủy vé/Đổi lịch bay", "Khó"),
    ("Nhận thông báo", "Dễ"),
    ("Quản lý khách hàng", "Trung bình"),
    ("Quản lý chuyến bay", "Khó"),
    ("Quản lý đặt vé", "Khó"),
    ("Quản lý thanh toán", "Khó"),
    ("Quản lý thông báo", "Trung bình"),
    ("Thống kê và báo cáo", "Khó"),
    ("Xử lý thanh toán", "Khó"),
    ("Hoàn tiền", "Khó"),
    ("Cập nhật dữ liệu chuyến bay", "Khó"),
    ("Xác nhận tình trạng ghế ngồi", "Trung bình"),
    ("Gửi xác nhận đặt vé", "Dễ"),
    ("Thông báo thay đổi chuyến bay", "Trung bình"),
    ("Nhắc nhở trước giờ bay", "Dễ"),
]

# Tạo DataFrame
df_use_cases = pd.DataFrame(use_cases, columns=["Use Case", "Mức độ khó"])

# Hiển thị bảng dữ liệu
print("\nDanh sách Use Case và mức độ khó:")
print(df_use_cases)

# Xuất ra file Excel
excel_filename = "danh_sach_use_case.xlsx"
df_use_cases.to_excel(excel_filename, index=False)
print(f"\nĐã xuất dữ liệu ra file: {excel_filename}")