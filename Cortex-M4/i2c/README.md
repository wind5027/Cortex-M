# stm32if405-I2c
stm32 own I2c function &amp; software(simulation) I2c

---
硬件i2c测试环境是STN32f405ZET6和MPU6050.

使用建议：

1、程序中并没有对于总线错误时的处理函数以及其他错误时的处理。请注意～

2、对于大数据低频律的i2c设备读取，用硬件i2c+DMA应该是很好的方式。（注意：代码中的DMA部分没有经过测试，要使用请详细阅读寄存器手册，调试使用！！）

3、高频的数据存取建议使用软件i2c。

4、如果硬件i2c的错误处理优化的很好很全，当然优选硬件方式。-_-

5、官方也建议在使用硬件i2c时，将i2c的中断设置优先级为最高。
