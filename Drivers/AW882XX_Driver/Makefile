obj-m := aw882xx_drv.o
aw882xx_drv-objs += aw882xx.o
aw882xx_drv-objs += aw882xx_monitor.o 
aw882xx_drv-objs += aw882xx_init.o
aw882xx_drv-objs += aw882xx_dsp.o 
aw882xx_drv-objs += aw882xx_device.o
# aw882xx_drv-objs += aw882xx_calib.o 
aw882xx_drv-objs += aw882xx_bin_parse.o
aw882xx_drv-objs += aw882xx_spin.o

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
	dtc -I dts -O dtb -Wno-unit_address_vs_reg -o aw88xx.dtbo aw88298_i2s.dts

install:
	cp aw88xx.dtbo /boot/overlays
	printf "\ndtoverlay=aw88xx" >> /boot/config.txt

	cp aw882xx_drv.ko /lib/modules/$(shell uname -r)
	printf "\naw882xx_drv" >> /etc/modules

	cp aw882xx_acf.bin /lib/firmware/

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
