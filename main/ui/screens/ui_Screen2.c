// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: AirQualityMonitor

#include "../ui.h"

static void ta_event_cb(lv_event_t * e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t * ta = lv_event_get_target(e);
    lv_obj_t * kb = lv_event_get_user_data(e);
    if(code == LV_EVENT_FOCUSED) {
        lv_keyboard_set_textarea(kb, ta);
        lv_obj_clear_flag(kb, LV_OBJ_FLAG_HIDDEN);
    }

    if(code == LV_EVENT_DEFOCUSED) {
        lv_keyboard_set_textarea(kb, NULL);
        lv_obj_add_flag(kb, LV_OBJ_FLAG_HIDDEN);
    }
}

void ui_Screen2_screen_init(void)
{
    ui_Screen2 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_SettingsWindowLabel = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_SettingsWindowLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SettingsWindowLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_SettingsWindowLabel, 7);
    lv_obj_set_y(ui_SettingsWindowLabel, -198);
    lv_obj_set_align(ui_SettingsWindowLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_SettingsWindowLabel, "Settings");
    lv_obj_set_style_text_font(ui_SettingsWindowLabel, &lv_font_montserrat_24, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_AccessPoints = lv_dropdown_create(ui_Screen2);
    lv_obj_set_width(ui_AccessPoints, 339);
    lv_obj_set_height(ui_AccessPoints, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_AccessPoints, -196);
    lv_obj_set_y(ui_AccessPoints, -88);
    lv_obj_set_align(ui_AccessPoints, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_AccessPoints, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    
    ui_WiFiAccessPointLabel = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_WiFiAccessPointLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WiFiAccessPointLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WiFiAccessPointLabel, -298);
    lv_obj_set_y(ui_WiFiAccessPointLabel, -130);
    lv_obj_set_align(ui_WiFiAccessPointLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_WiFiAccessPointLabel, "WiFi Access Point");

    ui_PasswordLabel = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_PasswordLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_PasswordLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_PasswordLabel, 59);
    lv_obj_set_y(ui_PasswordLabel, -128);
    lv_obj_set_align(ui_PasswordLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_PasswordLabel, "Password");
    
    ui_Password = lv_textarea_create(ui_Screen2);
    lv_obj_set_width(ui_Password, 346);
    lv_obj_set_height(ui_Password, 36);
    lv_obj_set_x(ui_Password, 195);
    lv_obj_set_y(ui_Password, -89);
    lv_obj_set_align(ui_Password, LV_ALIGN_CENTER);
    lv_textarea_set_max_length(ui_Password, 64);
    lv_textarea_set_placeholder_text(ui_Password, "Password...");
    lv_textarea_set_password_mode(ui_Password, true);
    /*Create a keyboard to use with the text area*/
    lv_obj_t * kb = lv_keyboard_create(ui_Screen2);
    lv_keyboard_set_textarea(kb, ui_Password);
    lv_obj_add_event_cb(ui_Password, ta_event_cb, LV_EVENT_ALL, kb);
    // start with keyboard hidden
    lv_obj_add_flag(kb, LV_OBJ_FLAG_HIDDEN);

    ui_ConnectButton = lv_btn_create(ui_Screen2);
    lv_obj_set_width(ui_ConnectButton, 207);
    lv_obj_set_height(ui_ConnectButton, 50);
    lv_obj_set_x(ui_ConnectButton, 274);
    lv_obj_set_y(ui_ConnectButton, -196);
    lv_obj_set_align(ui_ConnectButton, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ConnectButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ConnectButton, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_ConnectLabel = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_ConnectLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ConnectLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ConnectLabel, 274);
    lv_obj_set_y(ui_ConnectLabel, -196);
    lv_obj_set_align(ui_ConnectLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ConnectLabel, "Connect");
    lv_obj_set_style_text_color(ui_ConnectLabel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ConnectLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ConnectLabel, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_BackButton = lv_btn_create(ui_Screen2);
    lv_obj_set_width(ui_BackButton, 132);
    lv_obj_set_height(ui_BackButton, 50);
    lv_obj_set_x(ui_BackButton, -300);
    lv_obj_set_y(ui_BackButton, -198);
    lv_obj_set_align(ui_BackButton, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_BackButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_BackButton, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_BackLabel = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_BackLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_BackLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_BackLabel, -302);
    lv_obj_set_y(ui_BackLabel, -198);
    lv_obj_set_align(ui_BackLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_BackLabel, "Back");
    lv_obj_set_style_text_color(ui_BackLabel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_BackLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_BackLabel, &lv_font_montserrat_20, LV_PART_MAIN | LV_STATE_DEFAULT);
    
    ui_StatusLabel = lv_label_create(ui_Screen2);
    lv_obj_set_width(ui_StatusLabel, LV_SIZE_CONTENT);   /// 776
    lv_obj_set_height(ui_StatusLabel, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_x(ui_StatusLabel, -307);
    lv_obj_set_y(ui_StatusLabel, -17);
    lv_obj_set_align(ui_StatusLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_StatusLabel, "Status label");
    lv_obj_add_flag(ui_StatusLabel, LV_OBJ_FLAG_HIDDEN);     /// Flags

    lv_obj_add_event_cb(ui_ConnectButton, ui_event_ConnectButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_BackButton, ui_event_BackButton, LV_EVENT_ALL, NULL);

}