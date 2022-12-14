/*
 * peripherals_module.h
 *
 * Created: 15/11/2013 14:47:36
 *  Author: stephan
 */ 


#ifndef PERIPHERALS_MODULE_H_
#define PERIPHERALS_MODULE_H_

#include <asf.h>
#include "defines.h"

enum mode_type_t{MODE_IN, MODE_GEN, MODE_STATE};

void switch_on_off_lights(uint16_t bool_lights);
void setup_freqgen_freq(uint32_t frequency);
void init_module_peripherals_bp(void);
void init_module_peripherals_ap(void);
void deinit_module_peripherals(void);
uint64_t get_counter0_value(void);
uint64_t get_counter1_value(void);
RET_TYPE get_ttl_in_status(void);
void reset_dflipflop_ttlin(void);
void set_out_to_ttl_in(void);
void disable_counters(void);
void disable_countera(void);
void disable_counterb(void);
void enable_counters(void);
void enable_countera(void);
void enable_counterb(void);
void set_out_to_uc(void);
void configure_rtc(void);
uint16_t get_countera_en_status(void);
uint16_t get_counterb_en_status(void);
uint16_t is_qma_out_set_to_ttl(void);
uint32_t get_freqgen_freq(void);
uint16_t get_freqgen_enable(void);
void disable_freq_gen(void);
void enable_freq_gen(void);
void generate_pulse(void);
void set_qma_out_mode(uint16_t mode);
uint16_t get_qma_out_mode(void);
void set_qma_state(uint16_t state);
uint16_t get_qma_state(void);

#endif /* PERIPHERALS_MODULE_H_ */