#
# base machine settings for ia32-architecture BSPs
#

#
# common settings for Intel-based machines
#
MACHINE_FEATURES += "kernel26 screen keyboard pci usbhost ext2 ext3 x86 \
                     acpi serial usbgadget alsa"

MACHINE_EXTRA_RRECOMMENDS += "kernel-modules eee-acpi-scripts"
MACHINE_ESSENTIAL_EXTRA_RDEPENDS += "grub"

IMAGE_FSTYPES += "ext3 cpio.gz live"

KERNEL_IMAGETYPE ?= "bzImage"

SERIAL_CONSOLE ?= "115200 ttyS0"

#
# glibc-related variables
#
GLIBC_ADDONS ?= "nptl"
GLIBC_EXTRA_OECONF += "--with-tls"

#
# kernel-related variables
#
PREFERRED_PROVIDER_virtual/kernel ?= "linux-yocto"
PREFERRED_VERSION_linux-yocto ?= "3.0%"
PREFERRED_PROVIDER_linux-libc-headers ?= "linux-libc-headers-yocto"

#
# XSERVER subcomponents, used to build the XSERVER variable
#
XSERVER_IA32_BASE = "xserver-xorg \
           xf86-input-mouse \
           xf86-input-keyboard \
           xf86-input-evdev \
           xf86-input-synaptics \
           mesa-dri \
           "

XSERVER_IA32_EXT = "xserver-xorg-extension-dri \
           xserver-xorg-extension-dri2 \
           xserver-xorg-extension-glx \
           xserver-xorg-extension-extmod \
           xserver-xorg-extension-dbe \
           xserver-xorg-module-libint10 \
           "

XSERVER_IA32_I915 = "xf86-video-intel \
           mesa-dri-driver-i965 \
           "

XSERVER_IA32_EMGD = "emgd-driver-bin \
           libva-x11 \
           "

XSERVER_IA32_VESA = "xf86-video-vesa"
