#include<linux/module.h>
#include<linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Amit");

static int test_hello_init(void)
{
printk(KERN_INFO"%s: Gets into init\n",__func__);
return 0;
}

static void test_hello_exit(void)
{
printk(KERN_INFO"%s: Bye out of init\n",__func__);
}

module_init(test_hello_init);
module_exit(test_hello_exit);
