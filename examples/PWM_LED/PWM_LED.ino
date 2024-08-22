/*
##########################################################################################################
##########################################################################################################
  MakerLabvn_Trainee_engineer_Kĩ_sư_tập_sự
  Chỉnh sửa: 22/08/2024
  Người chỉnh sửa: Nguyễn hoàng Trung Sơn
##########################################################################################################
##########################################################################################################

  Tăng giảm độ sáng LED
  Với Arduino Uno chỉ có những chân có dấu "~" mới có chức năng tạo xung Pwm  

*/

#define LED_PIN 11  // Định nghĩa cho chân số 11
#define PWM_Val // Định nghĩa cho PWM

// hàm setup chạy một lần khi bạn nhấn nút reset hoặc cấp nguồn cho bo mạch
void setup() {
  // khởi tạo chân kỹ thuật số LED_PIN (chân 11) làm đầu ra.
  pinMode(LED_PIN, OUTPUT);
}

// hàm loop chạy lặp đi lặp lại mãi mãi
void loop() {
  analoglWrite(LED_PIN, HIGH);  // bật đèn LED (HIGH là mức điện áp)
  delay(1000);                  // đợi một giây
  analoglWrite(LED_PIN, LOW);   // tắt đèn LED bằng cách giảm mức điện áp xuống LOW
  delay(1000);                  // đợi một giây
}