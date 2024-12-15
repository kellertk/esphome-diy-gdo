// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using std::isnan;
using std::min;
using std::max;
using namespace text_sensor;
using namespace sensor;
using namespace button;
using namespace light;
using namespace cover;
logger::Logger *logger_logger_id;
web_server_base::WebServerBase *web_server_base_webserverbase_id;
captive_portal::CaptivePortal *captive_portal_captiveportal_id;
wifi::WiFiComponent *wifi_wificomponent_id;
mdns::MDNSComponent *mdns_mdnscomponent_id;
esphome::ESPHomeOTAComponent *esphome_esphomeotacomponent_id;
safe_mode::SafeModeComponent *safe_mode_safemodecomponent_id;
api::APIServer *api_apiserver_id;
api::UserServiceTrigger<std::string> *api_userservicetrigger_id;
Automation<std::string> *automation_id_7;
StartupTrigger *startuptrigger_id;
Automation<> *automation_id;
preferences::IntervalSyncer *preferences_intervalsyncer_id;
template_::TemplateTextSensor *device_id;
version::VersionTextSensor *version_versiontextsensor_id;
wifi_info::IPAddressWiFiInfo *wifi_info_ipaddresswifiinfo_id;
uptime::UptimeSecondsSensor *uptime_sensor;
wifi_signal::WiFiSignalSensor *wifi_signal_db;
copy::CopySensor *wifi_signal_pct;
sensor::LambdaFilter *sensor_lambdafilter_id;
restart::RestartButton *restart_button;
template_::TemplateButton *warning_tone;
button::ButtonPressTrigger *button_buttonpresstrigger_id;
Automation<> *automation_id_2;
template_::TemplateButton *pre_close_warning;
button::ButtonPressTrigger *button_buttonpresstrigger_id_2;
Automation<> *automation_id_3;
output::OutputButton *garage_door_opener_button;
status_led::StatusLEDLightOutput *status_led_statusledlightoutput_id;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id;
light::LightState *led;
binary::BinaryLightOutput *binary_binarylightoutput_id;
light::LightState *warning_led;
light::StrobeLightEffect *light_strobelighteffect_id;
improv_serial::ImprovSerialComponent *improv_serial_improvserialcomponent_id;
esp32_improv::ESP32ImprovComponent *esp32_improv_esp32improvcomponent_id;
using namespace output;
gpio::GPIOBinaryOutput *warning_led_output;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_2;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_3;
ledc::LEDCOutput *warning_beeper_output;
gpio::GPIOBinaryOutput *garage_door_cover_relay;
esp32::ESP32InternalGPIOPin *esp32_esp32internalgpiopin_id_4;
rtttl::Rtttl *rtttl_rtttl_id;
script::SingleScript<> *error_tone;
script::SingleScript<> *blink_led;
Automation<> *automation_id_5;
rtttl::PlayAction<> *rtttl_playaction_id_2;
Automation<> *automation_id_6;
light::LightControlAction<> *light_lightcontrolaction_id_3;
DelayAction<> *delayaction_id_2;
light::LightControlAction<> *light_lightcontrolaction_id_4;
rtttl::PlayAction<std::string> *rtttl_playaction_id_3;
using namespace api;
template_::TemplateCover *garage_door_cover;
Automation<> *automation_id_8;
LambdaCondition<> *lambdacondition_id;
IfAction<> *ifaction_id;
button::PressAction<> *button_pressaction_id_2;
cover::CoverPublishAction<> *cover_coverpublishaction_id;
script::ScriptExecuteAction<script::Script<>> *script_scriptexecuteaction_id_2;
LambdaAction<> *lambdaaction_id;
Automation<> *automation_id_9;
LambdaCondition<> *lambdacondition_id_2;
IfAction<> *ifaction_id_2;
button::PressAction<> *button_pressaction_id_3;
DelayAction<> *delayaction_id_3;
button::PressAction<> *button_pressaction_id_4;
cover::CoverPublishAction<> *cover_coverpublishaction_id_2;
script::ScriptExecuteAction<script::Script<>> *script_scriptexecuteaction_id_3;
LambdaAction<> *lambdaaction_id_2;
Automation<> *automation_id_11;
LambdaCondition<> *lambdacondition_id_4;
NotCondition<> *notcondition_id;
IfAction<> *ifaction_id_4;
button::PressAction<> *button_pressaction_id_7;
cover::CoverPublishAction<> *cover_coverpublishaction_id_5;
Automation<> *automation_id_10;
LambdaCondition<> *lambdacondition_id_3;
IfAction<> *ifaction_id_3;
button::PressAction<> *button_pressaction_id_5;
DelayAction<> *delayaction_id_4;
cover::CoverPublishAction<> *cover_coverpublishaction_id_3;
cover::CoverPublishAction<> *cover_coverpublishaction_id_4;
button::PressAction<> *button_pressaction_id_6;
esp32_ble_server::BLEServer *esp32_ble_server_bleserver_id;
esp32_ble::ESP32BLE *esp32_ble_esp32ble_id;
text_sensor::TextSensorPublishAction<> *text_sensor_textsensorpublishaction_id;
rtttl::PlayAction<> *rtttl_playaction_id;
light::LightControlAction<> *light_lightcontrolaction_id;
button::PressAction<> *button_pressaction_id;
DelayAction<> *delayaction_id;
light::LightControlAction<> *light_lightcontrolaction_id_2;
button::ButtonPressTrigger *button_buttonpresstrigger_id_3;
Automation<> *automation_id_4;
script::ScriptExecuteAction<script::Script<>> *script_scriptexecuteaction_id;
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ========== AUTO GENERATED CODE BEGIN ===========
  // esphome:
  //   name: diy-gdo
  //   friendly_name: DIY Garage Door Opener
  //   project:
  //     name: kellertk.esphome-diy-gdo
  //     version: 0.1.0
  //   platformio_options:
  //     board_build.flash_mode: dio
  //   on_boot:
  //   - priority: 800.0
  //     then:
  //     - text_sensor.template.publish:
  //         id: device_id
  //         state: !lambda |-
  //           return get_mac_address();
  //       type_id: text_sensor_textsensorpublishaction_id
  //     automation_id: automation_id
  //     trigger_id: startuptrigger_id
  //   min_version: 2024.11.3
  //   build_path: build\diy-gdo
  //   area: ''
  //   includes: []
  //   libraries: []
  //   name_add_mac_suffix: false
  App.pre_setup("diy-gdo", "DIY Garage Door Opener", "", "", __DATE__ ", " __TIME__, false);
  // text_sensor:
  // sensor:
  // button:
  // light:
  // cover:
  // logger:
  //   id: logger_logger_id
  //   baud_rate: 115200
  //   tx_buffer_size: 512
  //   deassert_rts_dtr: false
  //   hardware_uart: UART0
  //   level: DEBUG
  //   logs: {}
  logger_logger_id = new logger::Logger(115200, 512);
  logger_logger_id->set_uart_selection(logger::UART_SELECTION_UART0);
  logger_logger_id->pre_setup();
  logger_logger_id->set_component_source("logger");
  App.register_component(logger_logger_id);
  // web_server_base:
  //   id: web_server_base_webserverbase_id
  web_server_base_webserverbase_id = new web_server_base::WebServerBase();
  web_server_base_webserverbase_id->set_component_source("web_server_base");
  App.register_component(web_server_base_webserverbase_id);
  // captive_portal:
  //   id: captive_portal_captiveportal_id
  //   web_server_base_id: web_server_base_webserverbase_id
  captive_portal_captiveportal_id = new captive_portal::CaptivePortal(web_server_base_webserverbase_id);
  captive_portal_captiveportal_id->set_component_source("captive_portal");
  App.register_component(captive_portal_captiveportal_id);
  // wifi:
  //   ap:
  //     id: wifi_wifiap_id
  //     ap_timeout: 1min
  //   id: wifi_wificomponent_id
  //   domain: .local
  //   reboot_timeout: 15min
  //   power_save_mode: LIGHT
  //   fast_connect: false
  //   enable_btm: false
  //   enable_rrm: false
  //   passive_scan: false
  //   enable_on_boot: true
  //   use_address: diy-gdo.local
  wifi_wificomponent_id = new wifi::WiFiComponent();
  wifi_wificomponent_id->set_use_address("diy-gdo.local");
  {
  wifi::WiFiAP wifi_wifiap_id = wifi::WiFiAP();
  wifi_wificomponent_id->set_ap(wifi_wifiap_id);
  }
  wifi_wificomponent_id->set_ap_timeout(60000);
  wifi_wificomponent_id->set_reboot_timeout(900000);
  wifi_wificomponent_id->set_power_save_mode(wifi::WIFI_POWER_SAVE_LIGHT);
  wifi_wificomponent_id->set_fast_connect(false);
  wifi_wificomponent_id->set_passive_scan(false);
  wifi_wificomponent_id->set_enable_on_boot(true);
  wifi_wificomponent_id->set_component_source("wifi");
  App.register_component(wifi_wificomponent_id);
  // mdns:
  //   id: mdns_mdnscomponent_id
  //   disabled: false
  //   services: []
  mdns_mdnscomponent_id = new mdns::MDNSComponent();
  mdns_mdnscomponent_id->set_component_source("mdns");
  App.register_component(mdns_mdnscomponent_id);
  // ota:
  // ota.esphome:
  //   platform: esphome
  //   id: esphome_esphomeotacomponent_id
  //   version: 2
  //   port: 3232
  esphome_esphomeotacomponent_id = new esphome::ESPHomeOTAComponent();
  esphome_esphomeotacomponent_id->set_port(3232);
  esphome_esphomeotacomponent_id->set_component_source("esphome.ota");
  App.register_component(esphome_esphomeotacomponent_id);
  // safe_mode:
  //   id: safe_mode_safemodecomponent_id
  //   boot_is_good_after: 1min
  //   disabled: false
  //   num_attempts: 10
  //   reboot_timeout: 5min
  safe_mode_safemodecomponent_id = new safe_mode::SafeModeComponent();
  safe_mode_safemodecomponent_id->set_component_source("safe_mode");
  App.register_component(safe_mode_safemodecomponent_id);
  if (safe_mode_safemodecomponent_id->should_enter_safe_mode(10, 300000, 60000)) return;
  // api:
  //   actions:
  //   - action: play_rtttl
  //     variables:
  //       song_str: string
  //     then:
  //     - rtttl.play:
  //         rtttl: !lambda |-
  //           return song_str;
  //         id: rtttl_rtttl_id
  //       type_id: rtttl_playaction_id_3
  //     automation_id: automation_id_7
  //     trigger_id: api_userservicetrigger_id
  //   id: api_apiserver_id
  //   port: 6053
  //   password: ''
  //   reboot_timeout: 15min
  api_apiserver_id = new api::APIServer();
  api_apiserver_id->set_component_source("api");
  App.register_component(api_apiserver_id);
  api_apiserver_id->set_port(6053);
  api_apiserver_id->set_password("");
  api_apiserver_id->set_reboot_timeout(900000);
  api_userservicetrigger_id = new api::UserServiceTrigger<std::string>("play_rtttl", {"song_str"});
  api_apiserver_id->register_user_service(api_userservicetrigger_id);
  automation_id_7 = new Automation<std::string>(api_userservicetrigger_id);
  startuptrigger_id = new StartupTrigger(800.0f);
  startuptrigger_id->set_component_source("esphome.coroutine");
  App.register_component(startuptrigger_id);
  automation_id = new Automation<>(startuptrigger_id);
  // substitutions:
  //   ominous_warning: ominous:d=4,o=6,b=160:16e,16f,16g,16f,16e,16f,16g,16f,16e,16f,16g,16f,16e,16f,16g,16f,16e,16f,16g,16f,16e,16f,16g,16f,16e,16f,16g,16f,16e,16f,16g,16f,16e,16f,16g,16f,16e,16f,16g,16f
  //   charming_warning: charming:d=4,o=5,b=120:16e6,16f6,16g6,16a6,16b6,16a6,16g6,16f6,16e6,16d6,16c6,16b5,16c6,16d6,16e6,16f6
  //   mario: mario:d=4,o=5,b=100:16e6,16e6,32p,8e6,16c6,8e6,8g6,8p,8g,8p,8c6,16p,8g,16p,8e,16p,8a,8b,16a#,8a,16g.,16e6,16g6,8a6,16f6,8g6,8e6,16c6,16d6,8b,16p,8c6,16p,8g,16p,8e,16p,8a,8b,16a#,8a,16g.,16e6,16g6,8a6,16f6,8g6,8e6,16c6,16d6,8b,8p,16g6,16f#6,16f6,16d#6,16p,16e6,16p,16g#,16a,16c6,16p,16a,16c6,16d6,8p,16g6,16f#6,16f6,16d#6,16p,16e6,16p,16c7,16p,16c7,16c7,p,16g6,16f#6,16f6,16d#6,16p,16e6,16p,16g#,16a,16c6,16p,16a,16c6,16d6,8p,16d#6,8p,16d6,8p,16c6
  //   mission_impossible: MissionImp:d=16,o=6,b=95:32d,32d#,32d,32d#,32d,32d#,32d,32d#,32d,32d,32d#,32e,32f,32f#,32g,g,8p,g,8p,a#,p,c7,p,g,8p,g,8p,f,p,f#,p,g,8p,g,8p,a#,p,c7,p,g,8p,g,8p,f,p,f#,p,a#,g,2d,32p,a#,g,2c#,32p,a#,g,2c,a#5,8c,2p,32p,a#5,g5,2f#,32p,a#5,g5,2f,32p,a#5,g5,2e,d#,8d
  //   urgent: Urgent:d=8,o=6,b=500:c,e,d7,c,e,a#,c,e,a,c,e,g,c,e,a,c,e,a#,c,e,d7
  //   mosaic_1: Mosaic:d=8,o=6,b=400:c,e,g,e,c,g,e,g,c,g,c,e,c,g,e,g,e,c
  //   mosiac_2: Mosaic:d=8,o=6,b=400:c,e,g,e,c,g,e,g,c,g,c,e,c,g,e,g,e,c,p,c5,e5,g5,e5,c5,g5,e5,g5,c5,g5,c5,e5,c5,g5,e5,g5,e5,c5
  //   error_tone: err:d=16,o=4,b=100:d#,d#,d#
  //   warning_tone_rtttl: ominous:d=4,o=6,b=160:16e,16f,16g,16f,16e,16f,16g,16f,16e,16f,16g,16f,16e,16f,16g,16f,16e,16f,16g,16f,16e,16f,16g,16f,16e,16f,16g,16f,16e,16f,16g,16f,16e,16f,16g,16f,16e,16f,16g,16f
  //   rtttl_boop: boop:d=32,o=5,b=100:d#
  //   rtttl_gotit: got_it:d=32,o=5,b=100:d#,a#,be
  //   rtttl_scaleup: scale_up:d=32,o=5,b=100:c,c#,d#,e,f#,g#,a#,b
  //   rtttl_success: success:d=4,o=6,b=160:8e6,16f6,16g6,8a6,8g6,8e6,8g6,8a6
  //   name: diy-gdo
  //   friendly_name: DIY Garage Door Opener
  //   garage_door_cover_name: Garage Door
  //   garage_light_name: Garage Door Light
  //   garage_lock_name: Garage Door Lock
  //   garage_obstruction_name: Garage Door Obstruction
  //   garage_door_close_warn_duration: 5s
  //   garage_door_button_push_duration: 1s
  //   warning_beeper_pin: GPIO26
  //   warning_led_pin: GPIO23
  //   garage_door_cover_relay_pin: GPIO12
  //   garage_door_light_relay_pin: GPIO14
  //   garage_door_lock_relay_pin: GPIO27
  //   status_led: GPIO2
  //   status_led_inverted: 'false'
  // esp32:
  //   board: esp32dev
  //   framework:
  //     version: 4.4.8
  //     sdkconfig_options:
  //       CONFIG_LWIP_MAX_SOCKETS: '16'
  //     advanced:
  //       ignore_efuse_custom_mac: false
  //     components: []
  //     source: ~3.40408.0
  //     platform_version: platformio/espressif32@5.4.0
  //     type: esp-idf
  //   flash_size: 4MB
  //   variant: ESP32
  // preferences:
  //   flash_write_interval: 48h
  //   id: preferences_intervalsyncer_id
  preferences_intervalsyncer_id = new preferences::IntervalSyncer();
  preferences_intervalsyncer_id->set_write_interval(172800000);
  preferences_intervalsyncer_id->set_component_source("preferences");
  App.register_component(preferences_intervalsyncer_id);
  // text_sensor.template:
  //   platform: template
  //   name: Device ID
  //   id: device_id
  //   entity_category: diagnostic
  //   update_interval: 4294967295
  //   disabled_by_default: false
  device_id = new template_::TemplateTextSensor();
  App.register_text_sensor(device_id);
  device_id->set_name("Device ID");
  device_id->set_object_id("device_id");
  device_id->set_disabled_by_default(false);
  device_id->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  device_id->set_update_interval(4294967295UL);
  device_id->set_component_source("template.text_sensor");
  App.register_component(device_id);
  // text_sensor.version:
  //   platform: version
  //   name: ESPHome Version
  //   hide_timestamp: true
  //   disabled_by_default: false
  //   icon: mdi:new-box
  //   entity_category: diagnostic
  //   id: version_versiontextsensor_id
  version_versiontextsensor_id = new version::VersionTextSensor();
  App.register_text_sensor(version_versiontextsensor_id);
  version_versiontextsensor_id->set_name("ESPHome Version");
  version_versiontextsensor_id->set_object_id("esphome_version");
  version_versiontextsensor_id->set_disabled_by_default(false);
  version_versiontextsensor_id->set_icon("mdi:new-box");
  version_versiontextsensor_id->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  version_versiontextsensor_id->set_component_source("version.text_sensor");
  App.register_component(version_versiontextsensor_id);
  version_versiontextsensor_id->set_hide_timestamp(true);
  // text_sensor.wifi_info:
  //   platform: wifi_info
  //   ip_address:
  //     name: IP Address
  //     entity_category: diagnostic
  //     disabled_by_default: false
  //     id: wifi_info_ipaddresswifiinfo_id
  //     update_interval: 1s
  wifi_info_ipaddresswifiinfo_id = new wifi_info::IPAddressWiFiInfo();
  App.register_text_sensor(wifi_info_ipaddresswifiinfo_id);
  wifi_info_ipaddresswifiinfo_id->set_name("IP Address");
  wifi_info_ipaddresswifiinfo_id->set_object_id("ip_address");
  wifi_info_ipaddresswifiinfo_id->set_disabled_by_default(false);
  wifi_info_ipaddresswifiinfo_id->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  wifi_info_ipaddresswifiinfo_id->set_update_interval(1000);
  wifi_info_ipaddresswifiinfo_id->set_component_source("wifi_info.text_sensor");
  App.register_component(wifi_info_ipaddresswifiinfo_id);
  // sensor.uptime:
  //   platform: uptime
  //   name: Uptime
  //   id: uptime_sensor
  //   entity_category: diagnostic
  //   disabled_by_default: false
  //   force_update: false
  //   unit_of_measurement: s
  //   icon: mdi:timer-outline
  //   accuracy_decimals: 0
  //   device_class: duration
  //   state_class: total_increasing
  //   update_interval: 60s
  //   type: seconds
  uptime_sensor = new uptime::UptimeSecondsSensor();
  App.register_sensor(uptime_sensor);
  uptime_sensor->set_name("Uptime");
  uptime_sensor->set_object_id("uptime");
  uptime_sensor->set_disabled_by_default(false);
  uptime_sensor->set_icon("mdi:timer-outline");
  uptime_sensor->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  uptime_sensor->set_device_class("duration");
  uptime_sensor->set_state_class(sensor::STATE_CLASS_TOTAL_INCREASING);
  uptime_sensor->set_unit_of_measurement("s");
  uptime_sensor->set_accuracy_decimals(0);
  uptime_sensor->set_force_update(false);
  uptime_sensor->set_update_interval(60000);
  uptime_sensor->set_component_source("uptime.sensor");
  App.register_component(uptime_sensor);
  // sensor.wifi_signal:
  //   platform: wifi_signal
  //   name: WiFi Signal
  //   id: wifi_signal_db
  //   entity_category: diagnostic
  //   disabled_by_default: false
  //   force_update: false
  //   unit_of_measurement: dBm
  //   accuracy_decimals: 0
  //   device_class: signal_strength
  //   state_class: measurement
  //   update_interval: 60s
  wifi_signal_db = new wifi_signal::WiFiSignalSensor();
  App.register_sensor(wifi_signal_db);
  wifi_signal_db->set_name("WiFi Signal");
  wifi_signal_db->set_object_id("wifi_signal");
  wifi_signal_db->set_disabled_by_default(false);
  wifi_signal_db->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  wifi_signal_db->set_device_class("signal_strength");
  wifi_signal_db->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  wifi_signal_db->set_unit_of_measurement("dBm");
  wifi_signal_db->set_accuracy_decimals(0);
  wifi_signal_db->set_force_update(false);
  wifi_signal_db->set_update_interval(60000);
  wifi_signal_db->set_component_source("wifi_signal.sensor");
  App.register_component(wifi_signal_db);
  // sensor.copy:
  //   platform: copy
  //   source_id: wifi_signal_db
  //   id: wifi_signal_pct
  //   name: WiFi Signal %
  //   filters:
  //   - lambda: !lambda |-
  //       return min(max(2 * (x + 100.0), 0.0), 100.0);
  //     type_id: sensor_lambdafilter_id
  //   unit_of_measurement: '%'
  //   entity_category: diagnostic
  //   disabled_by_default: false
  //   force_update: false
  //   accuracy_decimals: 0
  //   device_class: signal_strength
  //   state_class: measurement
  wifi_signal_pct = new copy::CopySensor();
  App.register_sensor(wifi_signal_pct);
  wifi_signal_pct->set_name("WiFi Signal %");
  wifi_signal_pct->set_object_id("wifi_signal__");
  wifi_signal_pct->set_disabled_by_default(false);
  wifi_signal_pct->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  wifi_signal_pct->set_device_class("signal_strength");
  wifi_signal_pct->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  wifi_signal_pct->set_unit_of_measurement("%");
  wifi_signal_pct->set_accuracy_decimals(0);
  wifi_signal_pct->set_force_update(false);
  sensor_lambdafilter_id = new sensor::LambdaFilter([=](float x) -> optional<float> {
      #line 22 ".\\packages/wifi.yaml"
      return min(max(2 * (x + 100.0), 0.0), 100.0);
  });
  wifi_signal_pct->set_filters({sensor_lambdafilter_id});
  wifi_signal_pct->set_component_source("copy.sensor");
  App.register_component(wifi_signal_pct);
  wifi_signal_pct->set_source(wifi_signal_db);
  // button.restart:
  //   platform: restart
  //   name: Restart
  //   id: restart_button
  //   entity_category: config
  //   disabled_by_default: false
  //   icon: mdi:restart
  //   device_class: restart
  restart_button = new restart::RestartButton();
  restart_button->set_component_source("restart.button");
  App.register_component(restart_button);
  App.register_button(restart_button);
  restart_button->set_name("Restart");
  restart_button->set_object_id("restart");
  restart_button->set_disabled_by_default(false);
  restart_button->set_icon("mdi:restart");
  restart_button->set_entity_category(::ENTITY_CATEGORY_CONFIG);
  restart_button->set_device_class("restart");
  // button.template:
  //   platform: template
  //   id: warning_tone
  //   name: Play sound
  //   internal: true
  //   on_press:
  //   - then:
  //     - rtttl.play:
  //         rtttl: ominous:d=4,o=6,b=160:16e,16f,16g,16f,16e,16f,16g,16f,16e,16f,16g,16f,16e,16f,16g,16f,16e,16f,16g,16f,16e,16f,16g,16f,16e,16f,16g,16f,16e,16f,16g,16f,16e,16f,16g,16f,16e,16f,16g,16f
  //         id: rtttl_rtttl_id
  //       type_id: rtttl_playaction_id
  //     automation_id: automation_id_2
  //     trigger_id: button_buttonpresstrigger_id
  //   disabled_by_default: false
  warning_tone = new template_::TemplateButton();
  App.register_button(warning_tone);
  warning_tone->set_name("Play sound");
  warning_tone->set_object_id("play_sound");
  warning_tone->set_disabled_by_default(false);
  warning_tone->set_internal(true);
  button_buttonpresstrigger_id = new button::ButtonPressTrigger(warning_tone);
  automation_id_2 = new Automation<>(button_buttonpresstrigger_id);
  // button.template:
  //   platform: template
  //   id: pre_close_warning
  //   name: Pre-close warning
  //   on_press:
  //   - then:
  //     - light.turn_on:
  //         id: warning_led
  //         state: true
  //       type_id: light_lightcontrolaction_id
  //     - button.press:
  //         id: warning_tone
  //       type_id: button_pressaction_id
  //     - delay: 5s
  //       type_id: delayaction_id
  //     - light.turn_off:
  //         id: warning_led
  //         state: false
  //       type_id: light_lightcontrolaction_id_2
  //     automation_id: automation_id_3
  //     trigger_id: button_buttonpresstrigger_id_2
  //   disabled_by_default: false
  pre_close_warning = new template_::TemplateButton();
  App.register_button(pre_close_warning);
  pre_close_warning->set_name("Pre-close warning");
  pre_close_warning->set_object_id("pre-close_warning");
  pre_close_warning->set_disabled_by_default(false);
  button_buttonpresstrigger_id_2 = new button::ButtonPressTrigger(pre_close_warning);
  automation_id_3 = new Automation<>(button_buttonpresstrigger_id_2);
  // button.output:
  //   platform: output
  //   id: garage_door_opener_button
  //   output: garage_door_cover_relay
  //   duration: 1s
  //   internal: true
  //   on_press:
  //   - then:
  //     - script.execute:
  //         id: blink_led
  //       type_id: script_scriptexecuteaction_id
  //     automation_id: automation_id_4
  //     trigger_id: button_buttonpresstrigger_id_3
  //   disabled_by_default: false
  //   name: garage_door_opener_button
  garage_door_opener_button = new output::OutputButton();
  garage_door_opener_button->set_duration(1000);
  // light.status_led:
  //   platform: status_led
  //   id: led
  //   name: Status LED
  //   internal: true
  //   pin:
  //     number: 2
  //     inverted: false
  //     ignore_strapping_warning: true
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id
  //     ignore_pin_validation_error: false
  //     drive_strength: 20.0
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   output_id: status_led_statusledlightoutput_id
  status_led_statusledlightoutput_id = new status_led::StatusLEDLightOutput();
  esp32_esp32internalgpiopin_id = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id->set_pin(::GPIO_NUM_2);
  esp32_esp32internalgpiopin_id->set_inverted(false);
  esp32_esp32internalgpiopin_id->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id->set_flags(gpio::Flags::FLAG_OUTPUT);
  status_led_statusledlightoutput_id->set_pin(esp32_esp32internalgpiopin_id);
  status_led_statusledlightoutput_id->set_component_source("status_led.light");
  App.register_component(status_led_statusledlightoutput_id);
  led = new light::LightState(status_led_statusledlightoutput_id);
  App.register_light(led);
  led->set_component_source("light");
  App.register_component(led);
  led->set_name("Status LED");
  led->set_object_id("status_led");
  led->set_disabled_by_default(false);
  led->set_internal(true);
  led->set_restore_mode(light::LIGHT_ALWAYS_OFF);
  led->add_effects({});
  // light.binary:
  //   platform: binary
  //   id: warning_led
  //   output: warning_led_output
  //   effects:
  //   - strobe:
  //       colors:
  //       - state: true
  //         duration: 500ms
  //         brightness: 1.0
  //         color_brightness: 1.0
  //         red: 1.0
  //         green: 1.0
  //         blue: 1.0
  //         white: 1.0
  //         cold_white: 1.0
  //         warm_white: 1.0
  //         transition_length: 0s
  //       - state: false
  //         duration: 500ms
  //         brightness: 1.0
  //         color_brightness: 1.0
  //         red: 1.0
  //         green: 1.0
  //         blue: 1.0
  //         white: 1.0
  //         cold_white: 1.0
  //         warm_white: 1.0
  //         transition_length: 0s
  //       name: Strobe
  //     type_id: light_strobelighteffect_id
  //   internal: true
  //   disabled_by_default: false
  //   restore_mode: ALWAYS_OFF
  //   output_id: binary_binarylightoutput_id
  //   name: warning_led
  binary_binarylightoutput_id = new binary::BinaryLightOutput();
  warning_led = new light::LightState(binary_binarylightoutput_id);
  App.register_light(warning_led);
  warning_led->set_component_source("light");
  App.register_component(warning_led);
  warning_led->set_name("warning_led");
  warning_led->set_object_id("warning_led");
  warning_led->set_disabled_by_default(false);
  warning_led->set_internal(true);
  warning_led->set_restore_mode(light::LIGHT_ALWAYS_OFF);
  light_strobelighteffect_id = new light::StrobeLightEffect("Strobe");
  light_strobelighteffect_id->set_colors({light::StrobeLightEffectColor{
      .color = light::LightColorValues(light::ColorMode::UNKNOWN, true, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 0.0f, 1.0f, 1.0f),
      .duration = 500,
      .transition_length = 0,
    }, light::StrobeLightEffectColor{
      .color = light::LightColorValues(light::ColorMode::UNKNOWN, false, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 0.0f, 1.0f, 1.0f),
      .duration = 500,
      .transition_length = 0,
  }});
  warning_led->add_effects({light_strobelighteffect_id});
  // improv_serial:
  //   id: improv_serial_improvserialcomponent_id
  improv_serial_improvserialcomponent_id = new improv_serial::ImprovSerialComponent();
  improv_serial_improvserialcomponent_id->set_component_source("improv_serial");
  App.register_component(improv_serial_improvserialcomponent_id);
  // esp32_improv:
  //   authorizer: null
  //   id: esp32_improv_esp32improvcomponent_id
  //   ble_server_id: esp32_ble_server_bleserver_id
  //   identify_duration: 10s
  //   authorized_duration: 1min
  //   wifi_timeout: 1min
  esp32_improv_esp32improvcomponent_id = new esp32_improv::ESP32ImprovComponent();
  esp32_improv_esp32improvcomponent_id->set_component_source("esp32_improv");
  App.register_component(esp32_improv_esp32improvcomponent_id);
  // output:
  // output.gpio:
  //   platform: gpio
  //   id: warning_led_output
  //   pin:
  //     number: 23
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_2
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  warning_led_output = new gpio::GPIOBinaryOutput();
  warning_led_output->set_component_source("gpio.output");
  App.register_component(warning_led_output);
  esp32_esp32internalgpiopin_id_2 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_2->set_pin(::GPIO_NUM_23);
  esp32_esp32internalgpiopin_id_2->set_inverted(false);
  esp32_esp32internalgpiopin_id_2->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_2->set_flags(gpio::Flags::FLAG_OUTPUT);
  warning_led_output->set_pin(esp32_esp32internalgpiopin_id_2);
  // output.ledc:
  //   platform: ledc
  //   id: warning_beeper_output
  //   pin:
  //     number: 26
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_3
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  //   zero_means_zero: false
  //   frequency: 1000.0
  esp32_esp32internalgpiopin_id_3 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_3->set_pin(::GPIO_NUM_26);
  esp32_esp32internalgpiopin_id_3->set_inverted(false);
  esp32_esp32internalgpiopin_id_3->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_3->set_flags(gpio::Flags::FLAG_OUTPUT);
  warning_beeper_output = new ledc::LEDCOutput(esp32_esp32internalgpiopin_id_3);
  warning_beeper_output->set_component_source("ledc.output");
  App.register_component(warning_beeper_output);
  warning_beeper_output->set_zero_means_zero(false);
  warning_beeper_output->set_frequency(1000.0f);
  // output.gpio:
  //   platform: gpio
  //   id: garage_door_cover_relay
  //   pin:
  //     number: 12
  //     mode:
  //       output: true
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esp32_esp32internalgpiopin_id_4
  //     inverted: false
  //     ignore_pin_validation_error: false
  //     ignore_strapping_warning: false
  //     drive_strength: 20.0
  garage_door_cover_relay = new gpio::GPIOBinaryOutput();
  garage_door_cover_relay->set_component_source("gpio.output");
  App.register_component(garage_door_cover_relay);
  esp32_esp32internalgpiopin_id_4 = new esp32::ESP32InternalGPIOPin();
  esp32_esp32internalgpiopin_id_4->set_pin(::GPIO_NUM_12);
  esp32_esp32internalgpiopin_id_4->set_inverted(false);
  esp32_esp32internalgpiopin_id_4->set_drive_strength(::GPIO_DRIVE_CAP_2);
  esp32_esp32internalgpiopin_id_4->set_flags(gpio::Flags::FLAG_OUTPUT);
  garage_door_cover_relay->set_pin(esp32_esp32internalgpiopin_id_4);
  // rtttl:
  //   output: warning_beeper_output
  //   id: rtttl_rtttl_id
  //   gain: 0.6
  rtttl_rtttl_id = new rtttl::Rtttl();
  rtttl_rtttl_id->set_component_source("rtttl");
  App.register_component(rtttl_rtttl_id);
  rtttl_rtttl_id->set_output(warning_beeper_output);
  rtttl_rtttl_id->set_gain(0.6f);
  // script:
  //   - id: error_tone
  //     then:
  //     - rtttl.play:
  //         rtttl: err:d=16,o=4,b=100:d#,d#,d#
  //         id: rtttl_rtttl_id
  //       type_id: rtttl_playaction_id_2
  //     trigger_id: trigger_id
  //     automation_id: automation_id_5
  //     mode: single
  //     parameters: {}
  //   - id: blink_led
  //     then:
  //     - light.turn_on:
  //         id: led
  //         state: true
  //       type_id: light_lightcontrolaction_id_3
  //     - delay: 100ms
  //       type_id: delayaction_id_2
  //     - light.turn_off:
  //         id: led
  //         state: false
  //       type_id: light_lightcontrolaction_id_4
  //     trigger_id: trigger_id_2
  //     automation_id: automation_id_6
  //     mode: single
  //     parameters: {}
  error_tone = new script::SingleScript<>();
  error_tone->set_name("error_tone");
  blink_led = new script::SingleScript<>();
  blink_led->set_name("blink_led");
  automation_id_5 = new Automation<>(error_tone);
  rtttl_playaction_id_2 = new rtttl::PlayAction<>(rtttl_rtttl_id);
  rtttl_playaction_id_2->set_value("err:d=16,o=4,b=100:d#,d#,d#");
  automation_id_5->add_actions({rtttl_playaction_id_2});
  automation_id_6 = new Automation<>(blink_led);
  light_lightcontrolaction_id_3 = new light::LightControlAction<>(led);
  light_lightcontrolaction_id_3->set_state(true);
  delayaction_id_2 = new DelayAction<>();
  delayaction_id_2->set_component_source("script");
  App.register_component(delayaction_id_2);
  delayaction_id_2->set_delay(100);
  light_lightcontrolaction_id_4 = new light::LightControlAction<>(led);
  light_lightcontrolaction_id_4->set_state(false);
  automation_id_6->add_actions({light_lightcontrolaction_id_3, delayaction_id_2, light_lightcontrolaction_id_4});
  rtttl_playaction_id_3 = new rtttl::PlayAction<std::string>(rtttl_rtttl_id);
  rtttl_playaction_id_3->set_value([=](std::string song_str) -> std::string {
      #line 71 ".\\packages/warnings.yaml"
      return song_str;
  });
  automation_id_7->add_actions({rtttl_playaction_id_3});
  // cover.template:
  //   platform: template
  //   name: Garage Door
  //   id: garage_door_cover
  //   device_class: garage
  //   open_action:
  //     then:
  //     - if:
  //         condition:
  //           lambda: !lambda |-
  //             return id(garage_door_cover).position == COVER_CLOSED;
  //           type_id: lambdacondition_id
  //         then:
  //         - button.press:
  //             id: garage_door_opener_button
  //           type_id: button_pressaction_id_2
  //         - cover.template.publish:
  //             id: garage_door_cover
  //             current_operation: OPENING
  //           type_id: cover_coverpublishaction_id
  //         else:
  //         - script.execute:
  //             id: error_tone
  //           type_id: script_scriptexecuteaction_id_2
  //         - logger.log:
  //             format: Garage door is not closed, cannot open
  //             tag: main
  //             level: DEBUG
  //             args: []
  //           type_id: lambdaaction_id
  //       type_id: ifaction_id
  //     trigger_id: trigger_id_3
  //     automation_id: automation_id_8
  //   close_action:
  //     then:
  //     - if:
  //         condition:
  //           lambda: !lambda |-
  //             return id(garage_door_cover).position == COVER_OPEN;
  //           type_id: lambdacondition_id_2
  //         then:
  //         - button.press:
  //             id: pre_close_warning
  //           type_id: button_pressaction_id_3
  //         - delay: 5s
  //           type_id: delayaction_id_3
  //         - button.press:
  //             id: garage_door_opener_button
  //           type_id: button_pressaction_id_4
  //         - cover.template.publish:
  //             id: garage_door_cover
  //             current_operation: CLOSING
  //           type_id: cover_coverpublishaction_id_2
  //         else:
  //         - script.execute:
  //             id: error_tone
  //           type_id: script_scriptexecuteaction_id_3
  //         - logger.log:
  //             format: Garage door is not open, cannot close
  //             tag: main
  //             level: DEBUG
  //             args: []
  //           type_id: lambdaaction_id_2
  //       type_id: ifaction_id_2
  //     trigger_id: trigger_id_4
  //     automation_id: automation_id_9
  //   toggle_action:
  //     then:
  //     - if:
  //         condition:
  //           lambda: !lambda |-
  //             return id(garage_door_cover).position == COVER_OPEN;
  //           type_id: lambdacondition_id_3
  //         then:
  //         - button.press:
  //             id: pre_close_warning
  //           type_id: button_pressaction_id_5
  //         - delay: 5s
  //           type_id: delayaction_id_4
  //         - cover.template.publish:
  //             id: garage_door_cover
  //             current_operation: CLOSING
  //           type_id: cover_coverpublishaction_id_3
  //         else:
  //         - cover.template.publish:
  //             id: garage_door_cover
  //             current_operation: OPENING
  //           type_id: cover_coverpublishaction_id_4
  //       type_id: ifaction_id_3
  //     - button.press:
  //         id: garage_door_opener_button
  //       type_id: button_pressaction_id_6
  //     trigger_id: trigger_id_5
  //     automation_id: automation_id_10
  //   stop_action:
  //     then:
  //     - if:
  //         condition:
  //           not:
  //             lambda: !lambda |-
  //               return id(garage_door_cover).current_operation == CoverOperation::COVER_OPERATION_IDLE;
  //             type_id: lambdacondition_id_4
  //           type_id: notcondition_id
  //         then:
  //         - button.press:
  //             id: garage_door_opener_button
  //           type_id: button_pressaction_id_7
  //         - cover.template.publish:
  //             id: garage_door_cover
  //             current_operation: IDLE
  //           type_id: cover_coverpublishaction_id_5
  //       type_id: ifaction_id_4
  //     trigger_id: trigger_id_6
  //     automation_id: automation_id_11
  //   disabled_by_default: false
  //   optimistic: false
  //   assumed_state: false
  //   has_position: false
  //   restore_mode: RESTORE
  garage_door_cover = new template_::TemplateCover();
  garage_door_cover->set_component_source("template.cover");
  App.register_component(garage_door_cover);
  App.register_cover(garage_door_cover);
  garage_door_cover->set_name("Garage Door");
  garage_door_cover->set_object_id("garage_door");
  garage_door_cover->set_disabled_by_default(false);
  garage_door_cover->set_device_class("garage");
  automation_id_8 = new Automation<>(garage_door_cover->get_open_trigger());
  lambdacondition_id = new LambdaCondition<>([=]() -> bool {
      #line 11 ".\\packages/cover.yaml"
      return garage_door_cover->position == COVER_CLOSED;
  });
  ifaction_id = new IfAction<>(lambdacondition_id);
  button_pressaction_id_2 = new button::PressAction<>(garage_door_opener_button);
  cover_coverpublishaction_id = new cover::CoverPublishAction<>(garage_door_cover);
  cover_coverpublishaction_id->set_current_operation(cover::COVER_OPERATION_OPENING);
  ifaction_id->add_then({button_pressaction_id_2, cover_coverpublishaction_id});
  script_scriptexecuteaction_id_2 = new script::ScriptExecuteAction<script::Script<>>(error_tone);
  script_scriptexecuteaction_id_2->set_args();
  lambdaaction_id = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "Garage door is not closed, cannot open");
  });
  ifaction_id->add_else({script_scriptexecuteaction_id_2, lambdaaction_id});
  automation_id_8->add_actions({ifaction_id});
  automation_id_9 = new Automation<>(garage_door_cover->get_close_trigger());
  lambdacondition_id_2 = new LambdaCondition<>([=]() -> bool {
      #line 23 ".\\packages/cover.yaml"
      return garage_door_cover->position == COVER_OPEN;
  });
  ifaction_id_2 = new IfAction<>(lambdacondition_id_2);
  button_pressaction_id_3 = new button::PressAction<>(pre_close_warning);
  delayaction_id_3 = new DelayAction<>();
  delayaction_id_3->set_component_source("template.cover");
  App.register_component(delayaction_id_3);
  delayaction_id_3->set_delay(5000);
  button_pressaction_id_4 = new button::PressAction<>(garage_door_opener_button);
  cover_coverpublishaction_id_2 = new cover::CoverPublishAction<>(garage_door_cover);
  cover_coverpublishaction_id_2->set_current_operation(cover::COVER_OPERATION_CLOSING);
  ifaction_id_2->add_then({button_pressaction_id_3, delayaction_id_3, button_pressaction_id_4, cover_coverpublishaction_id_2});
  script_scriptexecuteaction_id_3 = new script::ScriptExecuteAction<script::Script<>>(error_tone);
  script_scriptexecuteaction_id_3->set_args();
  lambdaaction_id_2 = new LambdaAction<>([=]() -> void {
      ESP_LOGD("main", "Garage door is not open, cannot close");
  });
  ifaction_id_2->add_else({script_scriptexecuteaction_id_3, lambdaaction_id_2});
  automation_id_9->add_actions({ifaction_id_2});
  automation_id_11 = new Automation<>(garage_door_cover->get_stop_trigger());
  lambdacondition_id_4 = new LambdaCondition<>([=]() -> bool {
      #line 53 ".\\packages/cover.yaml"
      return garage_door_cover->current_operation == CoverOperation::COVER_OPERATION_IDLE;
  });
  notcondition_id = new NotCondition<>(lambdacondition_id_4);
  ifaction_id_4 = new IfAction<>(notcondition_id);
  button_pressaction_id_7 = new button::PressAction<>(garage_door_opener_button);
  cover_coverpublishaction_id_5 = new cover::CoverPublishAction<>(garage_door_cover);
  cover_coverpublishaction_id_5->set_current_operation(cover::COVER_OPERATION_IDLE);
  ifaction_id_4->add_then({button_pressaction_id_7, cover_coverpublishaction_id_5});
  automation_id_11->add_actions({ifaction_id_4});
  garage_door_cover->set_has_stop(true);
  automation_id_10 = new Automation<>(garage_door_cover->get_toggle_trigger());
  lambdacondition_id_3 = new LambdaCondition<>([=]() -> bool {
      #line 37 ".\\packages/cover.yaml"
      return garage_door_cover->position == COVER_OPEN;
  });
  ifaction_id_3 = new IfAction<>(lambdacondition_id_3);
  button_pressaction_id_5 = new button::PressAction<>(pre_close_warning);
  delayaction_id_4 = new DelayAction<>();
  delayaction_id_4->set_component_source("template.cover");
  App.register_component(delayaction_id_4);
  delayaction_id_4->set_delay(5000);
  cover_coverpublishaction_id_3 = new cover::CoverPublishAction<>(garage_door_cover);
  cover_coverpublishaction_id_3->set_current_operation(cover::COVER_OPERATION_CLOSING);
  ifaction_id_3->add_then({button_pressaction_id_5, delayaction_id_4, cover_coverpublishaction_id_3});
  cover_coverpublishaction_id_4 = new cover::CoverPublishAction<>(garage_door_cover);
  cover_coverpublishaction_id_4->set_current_operation(cover::COVER_OPERATION_OPENING);
  ifaction_id_3->add_else({cover_coverpublishaction_id_4});
  button_pressaction_id_6 = new button::PressAction<>(garage_door_opener_button);
  automation_id_10->add_actions({ifaction_id_3, button_pressaction_id_6});
  garage_door_cover->set_has_toggle(true);
  garage_door_cover->set_has_position(false);
  garage_door_cover->set_optimistic(false);
  garage_door_cover->set_assumed_state(false);
  garage_door_cover->set_restore_mode(template_::COVER_RESTORE);
  garage_door_cover->set_has_position(false);
  // md5:
  // socket:
  //   implementation: bsd_sockets
  // network:
  //   enable_ipv6: false
  //   min_ipv6_addr_count: 0
  // esp32_ble_server:
  //   id: esp32_ble_server_bleserver_id
  //   ble_id: esp32_ble_esp32ble_id
  //   manufacturer: ESPHome
  esp32_ble_server_bleserver_id = new esp32_ble_server::BLEServer();
  esp32_ble_server_bleserver_id->set_component_source("esp32_ble_server");
  App.register_component(esp32_ble_server_bleserver_id);
  // web_server_idf:
  //   {}
  // esp32_ble:
  //   id: esp32_ble_esp32ble_id
  //   io_capability: none
  //   enable_on_boot: true
  //   advertising_cycle_time: 10s
  esp32_ble_esp32ble_id = new esp32_ble::ESP32BLE();
  esp32_ble_esp32ble_id->set_enable_on_boot(true);
  esp32_ble_esp32ble_id->set_io_capability(esp32_ble::IO_CAP_NONE);
  esp32_ble_esp32ble_id->set_advertising_cycle_time(10000);
  esp32_ble_esp32ble_id->set_component_source("esp32_ble");
  App.register_component(esp32_ble_esp32ble_id);
  text_sensor_textsensorpublishaction_id = new text_sensor::TextSensorPublishAction<>(device_id);
  text_sensor_textsensorpublishaction_id->set_state([=]() -> std::string {
      #line 15 ".\\packages/esp32-core.yaml"
      return get_mac_address();
  });
  automation_id->add_actions({text_sensor_textsensorpublishaction_id});
  rtttl_playaction_id = new rtttl::PlayAction<>(rtttl_rtttl_id);
  rtttl_playaction_id->set_value("ominous:d=4,o=6,b=160:16e,16f,16g,16f,16e,16f,16g,16f,16e,16f,16g,16f,16e,16f,16g,16f,16e,16f,16g,16f,16e,16f,16g,16f,16e,16f,16g,16f,16e,16f,16g,16f,16e,16f,16g,16f,16e,16f,16g,16f");
  automation_id_2->add_actions({rtttl_playaction_id});
  light_lightcontrolaction_id = new light::LightControlAction<>(warning_led);
  light_lightcontrolaction_id->set_state(true);
  button_pressaction_id = new button::PressAction<>(warning_tone);
  delayaction_id = new DelayAction<>();
  delayaction_id->set_component_source("button");
  App.register_component(delayaction_id);
  delayaction_id->set_delay(5000);
  light_lightcontrolaction_id_2 = new light::LightControlAction<>(warning_led);
  light_lightcontrolaction_id_2->set_state(false);
  automation_id_3->add_actions({light_lightcontrolaction_id, button_pressaction_id, delayaction_id, light_lightcontrolaction_id_2});
  garage_door_opener_button->set_output(garage_door_cover_relay);
  garage_door_opener_button->set_component_source("output.button");
  App.register_component(garage_door_opener_button);
  App.register_button(garage_door_opener_button);
  garage_door_opener_button->set_name("garage_door_opener_button");
  garage_door_opener_button->set_object_id("garage_door_opener_button");
  garage_door_opener_button->set_disabled_by_default(false);
  garage_door_opener_button->set_internal(true);
  button_buttonpresstrigger_id_3 = new button::ButtonPressTrigger(garage_door_opener_button);
  automation_id_4 = new Automation<>(button_buttonpresstrigger_id_3);
  script_scriptexecuteaction_id = new script::ScriptExecuteAction<script::Script<>>(blink_led);
  script_scriptexecuteaction_id->set_args();
  automation_id_4->add_actions({script_scriptexecuteaction_id});
  binary_binarylightoutput_id->set_output(warning_led_output);
  esp32_ble_server_bleserver_id->register_service_component(esp32_improv_esp32improvcomponent_id);
  esp32_improv_esp32improvcomponent_id->set_identify_duration(10000);
  esp32_improv_esp32improvcomponent_id->set_authorized_duration(60000);
  esp32_improv_esp32improvcomponent_id->set_wifi_timeout(60000);
  esp32_ble_esp32ble_id->register_gatts_event_handler(esp32_ble_server_bleserver_id);
  esp32_ble_esp32ble_id->register_ble_status_event_handler(esp32_ble_server_bleserver_id);
  esp32_ble_server_bleserver_id->set_parent(esp32_ble_esp32ble_id);
  esp32_ble_server_bleserver_id->set_manufacturer("ESPHome");
  // =========== AUTO GENERATED CODE END ============
  App.setup();
}

void loop() {
  App.loop();
}
