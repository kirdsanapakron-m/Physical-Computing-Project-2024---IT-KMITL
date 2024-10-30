# Physical-Computing-Project-2024---IT-KMITL
# Ra(สุริยเทพรา)
## บทคัดย่อ
โปรเจคนี้นำเสนอการพัฒนาระบบการติดตามแสงอาทิตย์โดยใช้ Arduino ในการควบคุมการหมุนของแท่น Solar Cell ให้สามารถหมุนตามทิศทางของแสงอาทิตย์ได้อย่างอัตโนมัติ โดยระบบใช้ ACS712 Current Sensor สำหรับตรวจวัดกระแสไฟฟ้าที่เกิดขึ้นจากแผง Solar Cell และเชื่อมต่อกับแอปพลิเคชัน Blynk เพื่อแสดงผลการวัดกระแสไฟฟ้าแบบเรียลไทม์ การทำงานของระบบประกอบด้วยเซ็นเซอร์ตรวจจับทิศทางของแสงซึ่งจะส่งสัญญาณไปยัง Arduino เพื่อควบคุมการหมุนของมอเตอร์ให้แผง Solar Cell หันรับแสงได้อย่างมีประสิทธิภาพ ระบบนี้สามารถเพิ่มประสิทธิภาพการผลิตพลังงานไฟฟ้าจากแสงอาทิตย์และให้ข้อมูลสถานะของกระแสไฟฟ้าผ่านแอปพลิเคชัน ทำให้ผู้ใช้สามารถติดตามและปรับปรุงการทำงานของระบบได้อย่างสะดวก
## จุดประสงค์
เนื่องจากในบัจจุบันระบบ solar cell ส่วนใหญ่จะมีแท่นของ Solar Cell ที่หันไปในทิศทางเดียวในโปรเจคเราจึงได้เพิ่มความสามารถในการหันแท่นของ Solar Cell ให้ไปตามทิศทางของแสงทำให้เพิ่มช่วงเวลาที่สามารถผลิตไฟฟ้าได้มากขึ้นและสามารถแจ้งปริมาณกระแสไฟฟ้าที่สามารถผลิตได้แบบเรียลไทม์
## รายละเอียด
### sensor ที่เกี่ยวข้อง
-LDR Photoresistor Sensor Module<br>
-ACS712 Current Sensor

###### สมาชิก
1. นาย กฤษณปกรณ์ เมรัตน์ 66070006
2. นาย เจษฎา ข้องหลิม 66070033
3. นาย ณฐกร หอมพันนา 66070055
4. นาย ธนกฤต สุนประชา 66070071 
