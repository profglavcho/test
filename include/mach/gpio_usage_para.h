#ifndef __CUST_GPIO_USAGE_PARA_H__
#define __CUST_GPIO_USAGE_PARA_H__

struct _gpio_usage {
    int version;
    int eint_chg_stat_pin;
    int eint_chg_stat_pin_m_gpio;
    int eint_chg_stat_pin_m_pwm;
    int eint_chg_stat_pin_m_eint;
    int als_eint_pin;
    int als_eint_pin_m_gpio;
    int als_eint_pin_m_mdeint;
    int als_eint_pin_m_pwm;
    int als_eint_pin_m_eint;
    int ctp_eint_pin;
    int ctp_eint_pin_m_gpio;
    int ctp_eint_pin_m_clk;
    int ctp_eint_pin_m_mdeint;
    int ctp_eint_pin_m_kcol;
    int ctp_eint_pin_m_eint;
    int ctp_eint_pin_clk;
    int ctp_eint_pin_freq;
    int gse_2_eint_pin;
    int gse_2_eint_pin_m_gpio;
    int gse_2_eint_pin_m_clk;
    int gse_2_eint_pin_m_mdeint;
    int gse_2_eint_pin_m_kcol;
    int gse_2_eint_pin_m_eint;
    int gse_2_eint_pin_clk;
    int gse_2_eint_pin_freq;
    int accdet_eint_pin;
    int accdet_eint_pin_m_gpio;
    int accdet_eint_pin_m_clk;
    int accdet_eint_pin_m_eint;
    int accdet_eint_pin_clk;
    int accdet_eint_pin_freq;
    int gyro_eint_pin;
    int gyro_eint_pin_m_gpio;
    int gyro_eint_pin_m_kcol;
    int gyro_eint_pin_m_eint;
    int swcharger_en_pin;
    int swcharger_en_pin_m_gpio;
    int camera_cmrst_pin;
    int camera_cmrst_pin_m_gpio;
    int camera_cmrst_pin_m_clk;
    int camera_cmrst_pin_m_mdeint;
    int camera_cmrst_pin_m_sda;
    int camera_cmrst_pin_m_ext_frame_sync;
    int camera_cmrst_pin_m_nweb;
    int camera_cmrst_pin_clk;
    int camera_cmrst_pin_freq;
    int camera_cmpdn_pin;
    int camera_cmpdn_pin_m_gpio;
    int camera_cmpdn_pin_m_clk;
    int camera_cmpdn_pin_m_mdeint;
    int camera_cmpdn_pin_m_eint;
    int camera_cmpdn_pin_clk;
    int camera_cmpdn_pin_freq;
    int camera_cmpdn_pin_nce;
    int gse_1_eint_pin;
    int gse_1_eint_pin_m_gpio;
    int gse_1_eint_pin_m_clk;
    int gse_1_eint_pin_m_krow;
    int gse_1_eint_pin_m_pwm;
    int gse_1_eint_pin_m_eint;
    int gse_1_eint_pin_clk;
    int gse_1_eint_pin_freq;
    int camera_flash_en_pin;
    int camera_flash_en_pin_m_gpio;
    int camera_flash_en_pin_m_clk;
    int camera_flash_en_pin_m_kcol;
    int camera_flash_en_pin_m_pwm;
    int camera_flash_en_pin_clk;
    int camera_flash_en_pin_freq;
    int camera_flash_mode_pin;
    int camera_flash_mode_pin_m_gpio;
    int camera_flash_mode_pin_m_mdeint;
    int ctp_rst_pin;
    int ctp_rst_pin_m_gpio;
    int ctp_rst_pin_m_mdeint;
    int ctp_rst_pin_m_dac_dat_out;
    int ctp_rst_pin_m_ant_sel;
    int ctp_rst_pin_m_conn_mcu_dbgack_n;
    int ctp_rst_pin_m_dbg_mon_b;
    int camera_cmrst1_pin;
    int camera_cmrst1_pin_m_gpio;
    int main_cam_id_pin;
    int main_cam_id_pin_m_gpio;
    int main_cam_id_pin_m_clk;
    int main_cam_id_pin_clk;
    int main_cam_id_pin_freq;
    int uart_ucts1_pin;
    int uart_ucts1_pin_m_gpio;
    int uart_ucts1_pin_m_clk;
    int uart_ucts1_pin_clk;
    int uart_ucts1_pin_freq;
    int camera_cmpdn1_pin;
    int camera_cmpdn1_pin_m_gpio;
    int uart_urts1_pin;
    int uart_urts1_pin_m_gpio;
    int sub_cam_id_pin;
    int sub_cam_id_pin_m_gpio;
    int sub_cam_id_pin_m_clk;
    int sub_cam_id_pin_clk;
    int sub_cam_id_pin_freq;
    int uart_ucts2_pin;
    int uart_ucts2_pin_m_gpio;
    int uart_ucts2_pin_m_clk;
    int uart_ucts2_pin_clk;
    int uart_ucts2_pin_freq;
    int uart_urts2_pin;
    int uart_urts2_pin_m_gpio;
    int uart_urts2_pin_m_clk;
    int uart_urts2_pin_clk;
    int uart_urts2_pin_freq;
    int pmic_eint_pin;
    int pmic_eint_pin_m_gpio;
    int pmic_eint_pin_m_eint;
    int sim1_sclk;
    int sim1_sclk_m_gpio;
    int sim1_sclk_m_clk;
    int sim1_sclk_m_md1_sim2_sclk;
    int sim1_srst;
    int sim1_srst_m_gpio;
    int sim1_srst_m_pwm;
    int sim1_srst_m_md1_sim1_srst;
    int sim1_srst_m_md1_sim2_srst;
    int sim1_sio;
    int sim1_sio_m_gpio;
    int sim1_sio_m_md1_sim1_sdat;
    int sim1_sio_m_md1_sim2_sdat;
    int sim2_sclk;
    int sim2_sclk_m_gpio;
    int sim2_sclk_m_clk;
    int sim2_sclk_m_md1_sim1_sclk;
    int sim2_srst;
    int sim2_srst_m_gpio;
    int sim2_srst_m_pwm;
    int sim2_srst_m_md1_sim2_srst;
    int sim2_srst_m_md1_sim1_srst;
    int sim2_sio;
    int sim2_sio_m_gpio;
    int sim2_sio_m_md1_sim2_sdat;
    int sim2_sio_m_md1_sim1_sdat;
    int sim2_sio_m_dbg_mon_b;
    int uart_urxd3_pin;
    int uart_urxd3_pin_m_gpio;
    int uart_urxd3_pin_m_clk;
    int uart_urxd3_pin_m_krow;
    int uart_urxd3_pin_m_urxd;
    int uart_urxd3_pin_m_dpi_hsync;
    int uart_urxd3_pin_m_utxd;
    int uart_urxd3_pin_m_md_urxd;
    int uart_utxd3_pin;
    int uart_utxd3_pin_m_gpio;
    int uart_utxd3_pin_m_krow;
    int uart_utxd3_pin_m_utxd;
    int uart_utxd3_pin_m_dpi_vsync;
    int uart_utxd3_pin_m_urxd;
    int uart_utxd3_pin_m_md_utxd;
    int uart_utxd3_pin_m_tdd_txd;
    int uart_urxd4_pin;
    int uart_urxd4_pin_m_gpio;
    int uart_urxd4_pin_m_krow;
    int uart_urxd4_pin_m_pwm;
    int uart_urxd4_pin_m_urxd;
    int uart_urxd4_pin_m_dpi_ck;
    int uart_urxd4_pin_m_utxd;
    int uart_urxd4_pin_m_ucts;
    int uart_utxd4_pin;
    int uart_utxd4_pin_m_gpio;
    int uart_utxd4_pin_m_krow;
    int uart_utxd4_pin_m_pwm;
    int uart_utxd4_pin_m_utxd;
    int uart_utxd4_pin_m_dpi_de;
    int uart_utxd4_pin_m_urxd;
    int uart_utxd4_pin_m_urts;
    int fdd_band_support_detect_1st_pin;
    int fdd_band_support_detect_1st_pin_m_gpio;
    int fdd_band_support_detect_1st_pin_m_clk;
    int fdd_band_support_detect_2nd_pin;
    int fdd_band_support_detect_2nd_pin_m_gpio;
    int fdd_band_support_detect_3rd_pin;
    int fdd_band_support_detect_3rd_pin_m_gpio;
    int fdd_band_support_detect_4th_pin;
    int fdd_band_support_detect_4th_pin_m_gpio;
    int gps_lna_pin;
    int gps_lna_pin_m_gpio;
    int gps_lna_pin_m_pwm;
    int gps_lna_pin_m_ant_sel;
    int gps_lna_pin_m_conn_mcu_dbgack_n;
    int gps_lna_pin_m_dbg_mon_a;
    int kpd_krow0_pin;
    int kpd_krow0_pin_m_gpio;
    int kpd_krow0_pin_m_krow;
    int kpd_kcol0_pin;
    int kpd_kcol0_pin_m_gpio;
    int kpd_kcol0_pin_m_kcol;
    int speaker_en_pin;
    int speaker_en_pin_m_gpio;
    int i2c0_sda_pin;
    int i2c0_sda_pin_m_gpio;
    int i2c0_sda_pin_m_sda;
    int i2c0_sca_pin;
    int i2c0_sca_pin_m_gpio;
    int i2c0_sca_pin_m_scl;
    int i2c1_sda_pin;
    int i2c1_sda_pin_m_gpio;
    int i2c1_sda_pin_m_sda;
    int i2c1_sca_pin;
    int i2c1_sca_pin_m_gpio;
    int i2c1_sca_pin_m_scl;
    int i2c2_sda_pin;
    int i2c2_sda_pin_m_gpio;
    int i2c2_sda_pin_m_pwm;
    int i2c2_sda_pin_m_sda;
    int i2c2_sca_pin;
    int i2c2_sca_pin_m_gpio;
    int i2c2_sca_pin_m_pwm;
    int i2c2_sca_pin_m_scl;
    int uart_urxd1_pin;
    int uart_urxd1_pin_m_gpio;
    int uart_urxd1_pin_m_urxd;
    int uart_urxd1_pin_m_utxd;
    int uart_urxd1_pin_m_md_urxd;
    int uart_urxd1_pin_m_dbg_mon_b;
    int uart_utxd1_pin;
    int uart_utxd1_pin_m_gpio;
    int uart_utxd1_pin_m_utxd;
    int uart_utxd1_pin_m_urxd;
    int uart_utxd1_pin_m_md_utxd;
    int uart_utxd1_pin_m_tdd_txd;
    int uart_utxd1_pin_m_dbg_mon_b;
    int uart_urxd2_pin;
    int uart_urxd2_pin_m_gpio;
    int uart_urxd2_pin_m_urxd;
    int uart_urxd2_pin_m_utxd;
    int uart_urxd2_pin_m_md_urxd;
    int uart_urxd2_pin_m_dbg_mon_b;
    int uart_utxd2_pin;
    int uart_utxd2_pin_m_gpio;
    int uart_utxd2_pin_m_utxd;
    int uart_utxd2_pin_m_urxd;
    int uart_utxd2_pin_m_md_utxd;
    int uart_utxd2_pin_m_tdd_txd;
    int uart_utxd2_pin_m_dbg_mon_b;
    int msdc1_cmd;
    int msdc1_cmd_m_gpio;
    int msdc1_cmd_m_msdc1_cmd;
    int msdc1_clk;
    int msdc1_clk_m_gpio;
    int msdc1_clk_m_clk;
    int msdc1_dat0;
    int msdc1_dat0_m_gpio;
    int msdc1_dat0_m_msdc1_dat;
    int msdc1_dat1;
    int msdc1_dat1_m_gpio;
    int msdc1_dat1_m_msdc1_dat;
    int msdc1_dat2;
    int msdc1_dat2_m_gpio;
    int msdc1_dat2_m_msdc1_dat;
    int msdc1_dat3;
    int msdc1_dat3_m_gpio;
    int msdc1_dat3_m_msdc1_dat;
};



#endif /* __CUST_GPIO_USAGE_PARA_H__ */


