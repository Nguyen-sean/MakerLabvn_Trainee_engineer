/*
##########################################################################################################
##########################################################################################################
  MakerLabvn_Trainee_engineer_Kĩ_sư_tập_sự
  Chỉnh sửa: 22/08/2024
  Người chỉnh sửa: Nguyễn hoàng Trung Sơn
##########################################################################################################
##########################################################################################################

  Nháy đèn LED
  Bật đèn LED trong một giây, sau đó tắt đèn LED trong một giây, lặp lại liên tục.

  Hầu hết các bo mạch Arduino đều có một đèn LED tích hợp sẵn mà bạn có thể điều khiển. Trên các bo mạch UNO, MEGA và ZERO, nó được gắn vào chân D13
*/

#define LED_PIN 11 // Định nghĩa hằng số cho chân GPIO số 11

// hàm setup chạy một lần khi bạn nhấn nút reset hoặc cấp nguồn cho bo mạch
void setup()
{
  // khởi tạo chân kỹ thuật số LED_PIN làm đầu ra.
  pinMode(LED_PIN, OUTPUT); // OUTPUT để Làm đầu ra, INPUT làm đầu vào.
}

// hàm loop chạy lặp đi lặp lại mãi mãi
void loop()
{
// Bật tắt led thông thường
  digitalWrite(LED_PIN, HIGH); // bật đèn LED (HIGH là mức điện áp)
  delay(1000);                // đợi một giây
  digitalWrite(LED_PIN, LOW);  // tắt đèn LED bằng cách giảm mức điện áp xuống LOW
  delay(1000);                // đợi một giây


//tăng giảm độ sáng của led 
  // analogWrite(LED_PIN, 0);    // tắt đèn LED bằng cách giảm mức điện áp xuống LOW
  // delay(1000);                // đợi một giây
  // analogWrite(LED_PIN, 50);  // bật đèn LED sáng ở mức 50/255
  // delay(1000);                // đợi một giây



}
