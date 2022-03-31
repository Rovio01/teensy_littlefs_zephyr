#include <zephyr.h>
#include <usb/usb_device.h>
#include <logging/log.h>

LOG_MODULE_REGISTER(main);

void main(void)
{
	if (usb_enable(NULL)) {
		return;
	}
}