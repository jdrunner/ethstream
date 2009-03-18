#include "ue9error.h"

const char *ue9_error_text[] = {
  [0] = "(no error)",
  [SCRATCH_WRT_FAIL] = "SCRATCH_WRT_FAIL",
  [SCRATCH_ERASE_FAIL] = "SCRATCH_ERASE_FAIL",
  [DATA_BUFFER_OVERFLOW] = "DATA_BUFFER_OVERFLOW",
  [ADC0_BUFFER_OVERFLOW] = "ADC0_BUFFER_OVERFLOW",
  [FUNCTION_INVALID] = "FUNCTION_INVALID",
  [SWDT_TIME_INVALID] = "SWDT_TIME_INVALID",
  [FLASH_WRITE_FAIL] = "FLASH_WRITE_FAIL",
  [FLASH_ERASE_FAIL] = "FLASH_ERASE_FAIL",
  [FLASH_JMP_FAIL] = "FLASH_JMP_FAIL",
  [FLASH_PSP_TIMEOUT] = "FLASH_PSP_TIMEOUT",
  [FLASH_ABORT_RECEIVED] = "FLASH_ABORT_RECEIVED",
  [FLASH_PAGE_MISMATCH] = "FLASH_PAGE_MISMATCH",
  [FLASH_BLOCK_MISMATCH] = "FLASH_BLOCK_MISMATCH",
  [FLASH_PAGE_NOT_IN_CODE_AREA] = "FLASH_PAGE_NOT_IN_CODE_AREA",
  [MEM_ILLEGAL_ADDRESS] = "MEM_ILLEGAL_ADDRESS",
  [FLASH_LOCKED] = "FLASH_LOCKED",
  [INVALID_BLOCK] = "INVALID_BLOCK",
  [FLASH_ILLEGAL_PAGE] = "FLASH_ILLEGAL_PAGE",
  [STREAM_IS_ACTIVE] = "STREAM_IS_ACTIVE",
  [STREAM_TABLE_INVALID] = "STREAM_TABLE_INVALID",
  [STREAM_CONFIG_INVALID] = "STREAM_CONFIG_INVALID",
  [STREAM_BAD_TRIGGER_SOURCE] = "STREAM_BAD_TRIGGER_SOURCE",
  [STREAM_NOT_RUNNING] = "STREAM_NOT_RUNNING",
  [STREAM_INVALID_TRIGGER] = "STREAM_INVALID_TRIGGER",
  [STREAM_CONTROL_BUFFER_OVERFLOW] = "STREAM_CONTROL_BUFFER_OVERFLOW",
  [STREAM_SCAN_OVERLAP] = "STREAM_SCAN_OVERLAP",
  [STREAM_SAMPLE_NUM_INVALID] = "STREAM_SAMPLE_NUM_INVALID",
  [STREAM_BIPOLAR_GAIN_INVALID] = "STREAM_BIPOLAR_GAIN_INVALID",
  [STREAM_SCAN_RATE_INVALID] = "STREAM_SCAN_RATE_INVALID",
  [TIMER_INVALID_MODE] = "TIMER_INVALID_MODE",
  [TIMER_QUADRATURE_AB_ERROR] = "TIMER_QUADRATURE_AB_ERROR",
  [TIMER_QUAD_PULSE_SEQUENCE] = "TIMER_QUAD_PULSE_SEQUENCE",
  [TIMER_BAD_CLOCK_SOURCE] = "TIMER_BAD_CLOCK_SOURCE",
  [TIMER_STREAM_ACTIVE] = "TIMER_STREAM_ACTIVE",
  [TIMER_PWMSTOP_MODULE_ERROR] = "TIMER_PWMSTOP_MODULE_ERROR",
  [EXT_OSC_NOT_STABLE] = "EXT_OSC_NOT_STABLE",
  [INVALID_POWER_SETTING] = "INVALID_POWER_SETTING",
  [PLL_NOT_LOCKED] = "PLL_NOT_LOCKED"
};

const char *
ue9_error (int errorcode)
{
  if (errorcode > ARRAY_SIZE (ue9_error_text))
    return "(invalid errorcode)";
  else
    return ue9_error_text[errorcode];
}
