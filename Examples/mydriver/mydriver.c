//Example driver for Linux kernel

#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Author Name");
MODULE_DESCRIPTION("General Device Driver");

static int __init mydriver_init(void)
{
	printk(KERN_INFO "Hello World!\n");
	return 0;
}

static void __exit mydriver_exit(void)
{
	printk(KERN_INFO "Goodbye World...\n");
}

module_init(mydriver_init);
module_exit(mydriver_exit);
