build:
	dtc -I dts -O dtb -Wno-unit_address_vs_reg -o  m5stack-cm4.dtbo m5stack-cm4-overlay.dts

install:
	cp  m5stack-cm4.dtbo /boot/overlays/

test:
	dtoverlay  m5stack-cm4.dtbo
