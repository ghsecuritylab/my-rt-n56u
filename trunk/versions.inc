FIRMWARE_ROOTFS_VER=3.9
FIRMWARE_BUILDS_VER=099
FIRMWARE_BUILDS_REV=mao-git$(shell git rev-list HEAD --first-parent --count 2>/dev/null)-$(shell date +"%Y%m%d")

#shell git rev-list HEAD --first-parent --count 2>/dev/null
#shell git rev-parse --short HEAD 2>/dev/null
#-$(shell date +"%Y%m%d")
