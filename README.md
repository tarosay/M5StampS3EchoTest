# M5StampS3EchoTest
This program performs a loopback test on the RXD and TXD of the M5 Stamp S3. It conducts the loopback test using USB serial communication for RXD (G44) and TXD (G43).
A loopback test was also conducted using software serial communication, with RXD assigned to G1 and TXD to G3.

When you encounter the error 'Failed uploading: uploading error: exit status 2' while programming the Stamp S3, it may be due to the baud rate setting in Serial.begin not being set to 115200. 
In such cases, press and hold the S3 button while inserting the USB cable. 
Once the serial port is recognized, the device will be in a mode that allows for programming. 
At this point, you can release the button. 
After successfully uploading the program to the S3, unplug and replug the USB cable to restart the S3.

M5 Stamp S3 のRXDとTXDのループバックテストを行うプログラムです。USBシリアル経由でRXD(G44)とTXD(G43)のループバックテストを行います。
また、ソフトウエアシリアルのループバックテストも行っています。RXD(G1)とTXD(G3)を割り当てて通信しました。
Stamp S3にプログラムを書き込むときに、'Failed uploading: uploading error: exit status 2' と出る場合は、Serial.begin のボーレート設定が115200になっていないときです。
このような場合は、S3のボタンを押しながらUSBケーブルを刺してください。
こうしてシリアルポートが認識された後は、プログラム書き込み可能モードになっているので、ボタンから手を放しても大丈夫です。
無事にプログラムが書き込めた後は、USBケーブルを抜き差しして、S3を再起動してください。
