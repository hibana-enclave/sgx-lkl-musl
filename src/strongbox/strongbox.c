#include <strongbox.h>
#include <stdio.h>

extern void sgxlkl_app_sgx_step_attack_notify(void);

void strongbox_attack(){
    sgxlkl_app_sgx_step_attack_notify(); 
}
