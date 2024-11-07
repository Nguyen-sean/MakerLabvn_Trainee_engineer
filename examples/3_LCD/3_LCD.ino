/*
##########################################################################################################
##########################################################################################################
  MakerLabvn_Trainee_engineer_Kĩ_sư_tập_sự
  Chỉnh sửa: 22/08/2024
  Người chỉnh sửa: Nguyễn hoàng Trung Sơn
##########################################################################################################
##########################################################################################################

  Hiển thị lên màn hình LCD
  Đọc ở chân Analog hoặc Digital
  Để mở màn hình hiển thị Serial monitor bạn ấn tổ hợp phím (Ctrl + Shift + M)
*/

// Thêm bộ thư viện
// Add the library.
#include <MKL_LiquidCrystal_I2C.h>

// Khởi tạo LCD
// LCD config
MKL_LiquidCrystal_I2C lcd(0x27, 16, 2);

#define Button_pin 11 // Định nghĩa chân số 11 cho nút nhấn
#define LDR_pin A1    // Định nghĩa chân nhận giá trị độ sáng từ 0-1024, tương ứng với giá trị điện áp nhỏ nhất tới cao nhất

// Hàm setup chạy một lần khi bạn nhấn nút reset hoặc cấp nguồn cho bo mạch
void setup()
{
  // Khởi động LCD
  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0); // Đặt con trỏ cho màn hình tại cột 0, hàng 0
  lcd.print("your name");

  Serial.begin(115200); // Khởi tạo giao thức kết nối giữa vi điều khiển và máy tính (UART)
                        // Thường đặt baudrate ở 115200 hoặc 9800

  pinMode(Button_pin, INPUT); // Khởi tạo chân kỹ thuật số Button_pin (chân 11) làm đầu vào.
  pinMode(LDR_pin, INPUT);    // Khởi tạo chân kỹ thuật số LDR_PIN (chân A1) làm đầu vào.
}

// Hàm loop chạy lặp đi lặp lại mãi mãi
void loop()
{
  Serial.print("Trạng thái nút nhấn: ");
  Serial.print(digitalRead(Button_pin));
  Serial.print(" || ");
  Serial.print("Cảm biến ánh sáng (LDR): ");
  Serial.println(analogRead(LDR_pin));

  lcd.setCursor(1, 1);
  lcd.print("Bt:");
  lcd.print(digitalRead(Button_pin));
  lcd.print(" || ");
  lcd.print("LDR:");
  lcd.print(analogRead(LDR_pin));
  
  delay(100);
}
