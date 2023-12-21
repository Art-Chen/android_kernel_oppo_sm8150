#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/init.h>
#include <linux/cinnamoroll_kernel.h>

int invalid;
unsigned int cinnamoroll = 0;

int __init cinnamoroll_khelper_init(void)
{
	invalid = 1;

	return 0;
}

int get_en_id(void) {
    return 0;
}

void check_device(void) {
	invalid = 0;
}

MODULE_AUTHOR("Art_Chen <Chenxy0201@qq.com>");
MODULE_LICENSE("Proprietary");

