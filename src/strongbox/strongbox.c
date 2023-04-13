#include <strongbox.h>
#include <stdio.h>

extern void sgxlkl_app_sgx_step_attack_notify(void);

void strongbox_hello(){
    sgxlkl_app_sgx_step_attack_notify(); 
}
