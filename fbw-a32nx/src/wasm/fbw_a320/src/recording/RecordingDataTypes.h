#pragma once

struct BaseData {
  double simulation_time_s;
  double simulation_delta_time_s;
  double simulation_rate;
  double simulation_slew_on;
  double simulation_was_pause_on;
  double aircraft_position_latitude_deg;
  double aircraft_position_longitude_deg;
  double aircraft_Theta_deg;
  double aircraft_Phi_deg;
  double aircraft_Psi_magnetic_deg;
  double aircraft_Psi_magnetic_track_deg;
  double aircraft_Psi_true_deg;
  double aircraft_qk_deg_s;
  double aircraft_pk_deg_s;
  double aircraft_rk_deg_s;
  double aircraft_V_indicated_kn;
  double aircraft_V_true_kn;
  double aircraft_V_ground_kn;
  double aircraft_Ma_mach;
  double aircraft_alpha_deg;
  double aircraft_beta_deg;
  double aircraft_H_pressure_ft;
  double aircraft_H_indicated_ft;
  double aircraft_H_radio_ft;
  double aircraft_nz_g;
  double aircraft_ax_m_s2;
  double aircraft_ay_m_s2;
  double aircraft_az_m_s2;
  double aircraft_bx_m_s2;
  double aircraft_by_m_s2;
  double aircraft_bz_m_s2;
  double aircraft_eta_pos;
  double aircraft_eta_trim_deg;
  double aircraft_xi_pos;
  double aircraft_zeta_pos;
  double aircraft_zeta_trim_pos;
  double aircraft_total_air_temperature_deg_celsius;
  double aircraft_ice_structure_percent;
  double aircraft_dfdr_event_button_pressed;
  double atmosphere_ambient_pressure_mbar;
  double atmosphere_ambient_wind_velocity_kn;
  double atmosphere_ambient_wind_direction_deg;
  double simulation_input_sidestick_pitch_pos;
  double simulation_input_sidestick_roll_pos;
  double simulation_input_rudder_pos;
  double simulation_input_brake_pedal_left_pos;
  double simulation_input_brake_pedal_right_pos;
  double simulation_input_flaps_handle_pos;
  double simulation_input_flaps_handle_index;
  double simulation_input_spoilers_handle_pos;
  double simulation_input_spoilers_are_armed;
  double simulation_input_gear_handle_pos;
  double simulation_input_tiller_handle_pos;
  double simulation_input_parking_brake_switch_pos;
  unsigned long long simulation_assistant_is_assisted_takeoff_enabled;
  unsigned long long simulation_assistant_is_assisted_landing_enabled;
  unsigned long long simulation_assistant_is_ai_automatic_trim_active;
  unsigned long long simulation_assistant_is_ai_controls_active;
};

struct AircraftSpecificData {
  double simulation_input_throttle_lever_1_pos;
  double simulation_input_throttle_lever_2_pos;
  double simulation_input_throttle_lever_1_angle;
  double simulation_input_throttle_lever_2_angle;
  double aircraft_engine_1_N1_percent;
  double aircraft_engine_2_N1_percent;
  double aircraft_hydraulic_system_green_pressure_psi;
  double aircraft_hydraulic_system_blue_pressure_psi;
  double aircraft_hydraulic_system_yellow_pressure_psi;
  double aircraft_autobrake_system_armed_mode;
  double aircraft_autobrake_system_is_decel_light_on;
  double aircraft_gear_nosewheel_pos;
  double aircraft_gear_nosewheel_compression_percent;
  double aircraft_gear_main_left_compression_percent;
  double aircraft_gear_main_right_compression_percent;
  double aircraft_is_master_warning_active;
  double aircraft_is_master_caution_active;
  double aircraft_is_wing_anti_ice_active;
  double aircraft_is_alpha_floor_condition_active;
  double aircraft_is_high_aoa_protection_active;
  unsigned long long aircraft_settings_is_realistic_tiller_enabled;
  double aircraft_settings_any_failures_active;
};