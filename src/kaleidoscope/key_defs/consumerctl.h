/* Kaleidoscope - Firmware for computer input devices
 * Copyright (C) 2013-2018  Keyboard.io, Inc.
 *
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program. If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define Consumer_NumericKeyPad CONSUMER_KEY(HID_CONSUMER_NUMERIC_KEY_PAD, HID_TYPE_NARY)
#define Consumer_ProgrammableButtons CONSUMER_KEY(HID_CONSUMER_PROGRAMMABLE_BUTTONS, HID_TYPE_NARY)
#define Consumer_MicrophoneCa CONSUMER_KEY(HID_CONSUMER_MICROPHONE_CA, HID_TYPE_CA)
#define Consumer_HeadphoneCa CONSUMER_KEY(HID_CONSUMER_HEADPHONE_CA, HID_TYPE_CA)
#define Consumer_GraphicEqualizerCa CONSUMER_KEY(HID_CONSUMER_GRAPHIC_EQUALIZER_CA, HID_TYPE_CA)

#define Consumer_Plus10 CONSUMER_KEY(HID_CONSUMER_PLUS_10, HID_TYPE_OSC)
#define Consumer_Plus100 CONSUMER_KEY(HID_CONSUMER_PLUS_100, HID_TYPE_OSC)
#define Consumer_AMSlashPM CONSUMER_KEY(HID_CONSUMER_AM_SLASH_PM, HID_TYPE_OSC)

#define Consumer_Power CONSUMER_KEY(HID_CONSUMER_POWER, HID_TYPE_OOC)
#define Consumer_Reset CONSUMER_KEY(HID_CONSUMER_RESET, HID_TYPE_OSC)
#define Consumer_Sleep CONSUMER_KEY(HID_CONSUMER_SLEEP, HID_TYPE_OSC)
#define Consumer_Sleep_After CONSUMER_KEY(HID_CONSUMER_SLEEP_AFTER, HID_TYPE_OSC)
#define Consumer_Sleep_Mode CONSUMER_KEY(HID_CONSUMER_SLEEP_MODE, HID_TYPE_RTC)
#define Consumer_Illumination CONSUMER_KEY(HID_CONSUMER_ILLUMINATION, HID_TYPE_OOC)
#define Consumer_Function_Buttons CONSUMER_KEY(HID_CONSUMER_FUNCTION_BUTTONS, HID_TYPE_NARY)

#define Consumer_Menu CONSUMER_KEY(HID_CONSUMER_MENU, HID_TYPE_OOC)
#define Consumer_MenuPick CONSUMER_KEY(HID_CONSUMER_MENU_PICK, HID_TYPE_OSC)
#define Consumer_MenuUp CONSUMER_KEY(HID_CONSUMER_MENU_UP, HID_TYPE_OSC)
#define Consumer_MenuDown CONSUMER_KEY(HID_CONSUMER_MENU_DOWN, HID_TYPE_OSC)
#define Consumer_MenuLeft CONSUMER_KEY(HID_CONSUMER_MENU_LEFT, HID_TYPE_OSC)
#define Consumer_MenuRight CONSUMER_KEY(HID_CONSUMER_MENU_RIGHT, HID_TYPE_OSC)
#define Consumer_MenuEscape CONSUMER_KEY(HID_CONSUMER_MENU_ESCAPE, HID_TYPE_OSC)
#define Consumer_MenuValueIncrease CONSUMER_KEY(HID_CONSUMER_MENU_VALUE_INCREASE, HID_TYPE_OSC)
#define Consumer_MenuValueDecrease CONSUMER_KEY(HID_CONSUMER_MENU_VALUE_DECREASE, HID_TYPE_OSC)

#define Consumer_DataOnScreen CONSUMER_KEY(HID_CONSUMER_DATA_ON_SCREEN, HID_TYPE_OOC)
#define Consumer_ClosedCaption CONSUMER_KEY(HID_CONSUMER_CLOSED_CAPTION, HID_TYPE_OOC)
#define Consumer_ClosedCaptionSelect CONSUMER_KEY(HID_CONSUMER_CLOSED_CAPTION_SELECT, HID_TYPE_OSC)
#define Consumer_VCRSlashTV CONSUMER_KEY(HID_CONSUMER_VCR_SLASH_TV, HID_TYPE_OOC)
#define Consumer_BroadcastMode CONSUMER_KEY(HID_CONSUMER_BROADCAST_MODE, HID_TYPE_OSC)
#define Consumer_Snapshot CONSUMER_KEY(HID_CONSUMER_SNAPSHOT, HID_TYPE_OSC)
#define Consumer_Still CONSUMER_KEY(HID_CONSUMER_STILL, HID_TYPE_OSC)

#define Consumer_PictureInPictureToggle CONSUMER_KEY(HID_CONSUMER_PICTURE_IN_PICTURE_TOGGLE, HID_TYPE_OSC)
#define Consumer_PictureInPictureSwap CONSUMER_KEY(HID_CONSUMER_PICTURE_IN_PICTURE_SWAP, HID_TYPE_OSC)
#define Consumer_RedMenuButton CONSUMER_KEY(HID_CONSUMER_RED_MENU_BUTTON, HID_TYPE_MC)
#define Consumer_GreenMenuButton CONSUMER_KEY(HID_CONSUMER_GREEN_MENU_BUTTON, HID_TYPE_MC)
#define Consumer_BlueMenuButton CONSUMER_KEY(HID_CONSUMER_BLUE_MENU_BUTTON, HID_TYPE_MC)
#define Consumer_YellowMenuButton CONSUMER_KEY(HID_CONSUMER_YELLOW_MENU_BUTTON, HID_TYPE_MC)
#define Consumer_Aspect CONSUMER_KEY(HID_CONSUMER_ASPECT, HID_TYPE_OSC)
#define Consumer_3dModeSelect CONSUMER_KEY(HID_CONSUMER_3D_MODE_SELECT, HID_TYPE_OSC)
#define Consumer_DisplayBrightnessIncrement CONSUMER_KEY(HID_CONSUMER_DISPLAY_BRIGHTNESS_INCREMENT, HID_TYPE_RTC)
#define Consumer_DisplayBrightnessDecrement CONSUMER_KEY(HID_CONSUMER_DISPLAY_BRIGHTNESS_DECREMENT, HID_TYPE_RTC)
#define Consumer_DisplayBrightness CONSUMER_KEY(HID_CONSUMER_DISPLAY_BRIGHTNESS, HID_TYPE_LC)
#define Consumer_DisplayBacklightToggle CONSUMER_KEY(HID_CONSUMER_DISPLAY_BACKLIGHT_TOGGLE, HID_TYPE_OOC)
#define Consumer_DisplaySetBrightnessToMinimum CONSUMER_KEY(HID_CONSUMER_DISPLAY_SET_BRIGHTNESS_TO_MINIMUM, HID_TYPE_OSC)
#define Consumer_DisplaySetBrightnessToMaximum CONSUMER_KEY(HID_CONSUMER_DISPLAY_SET_BRIGHTNESS_TO_MAXIMUM, HID_TYPE_OSC)
#define Consumer_DisplaySetAutoBrightness CONSUMER_KEY(HID_CONSUMER_DISPLAY_SET_AUTO_BRIGHTNESS, HID_TYPE_OOC)
#define Consumer_CameraAccessEnabled CONSUMER_KEY(HID_CONSUMER_CAMERA_ACCESS_ENABLED, HID_TYPE_OOC)
#define Consumer_CameraAccessDisabled CONSUMER_KEY(HID_CONSUMER_CAMERA_ACCESS_DISABLED, HID_TYPE_OOC)
#define Consumer_CameraAccessToggle CONSUMER_KEY(HID_CONSUMER_CAMERA_ACCESS_TOGGLE, HID_TYPE_OOC)
#define Consumer_KeyboardBrightnessIncrement CONSUMER_KEY(HID_CONSUMER_KEYBOARD_BRIGHTNESS_INCREMENT, HID_TYPE_OSC)
#define Consumer_KeyboardBrightnessDecrement CONSUMER_KEY(HID_CONSUMER_KEYBOARD_BRIGHTNESS_DECREMENT, HID_TYPE_OSC)
#define Consumer_KeyboardBacklightSetLevel CONSUMER_KEY(HID_CONSUMER_KEYBOARD_BACKLIGHT_SET_LEVEL, HID_TYPE_LC)
#define Consumer_KeyboardBacklightOoc CONSUMER_KEY(HID_CONSUMER_KEYBOARD_BACKLIGHT_OOC, HID_TYPE_OOC)
#define Consumer_KeyboardBacklightSetMinimum CONSUMER_KEY(HID_CONSUMER_KEYBOARD_BACKLIGHT_SET_MINIMUM, HID_TYPE_OSC)
#define Consumer_KeyboardBacklightSetMaximum CONSUMER_KEY(HID_CONSUMER_KEYBOARD_BACKLIGHT_SET_MAXIMUM, HID_TYPE_OSC)
#define Consumer_KeyboardBacklightAuto CONSUMER_KEY(HID_CONSUMER_KEYBOARD_BACKLIGHT_AUTO, HID_TYPE_OOC)
#define Consumer_Selection CONSUMER_KEY(HID_CONSUMER_SELECTION, HID_TYPE_NARY)
#define Consumer_AssignSelection CONSUMER_KEY(HID_CONSUMER_ASSIGN_SELECTION, HID_TYPE_OSC)
#define Consumer_ModeStep CONSUMER_KEY(HID_CONSUMER_MODE_STEP, HID_TYPE_OSC)

#define Consumer_Selection CONSUMER_KEY(HID_CONSUMER_SELECTION, HID_TYPE_NARY)
#define Consumer_AssignSelection CONSUMER_KEY(HID_CONSUMER_ASSIGN_SELECTION, HID_TYPE_OSC)
#define Consumer_ModeStep CONSUMER_KEY(HID_CONSUMER_MODE_STEP, HID_TYPE_OSC)
#define Consumer_RecallLast CONSUMER_KEY(HID_CONSUMER_RECALL_LAST, HID_TYPE_OSC)
#define Consumer_EnterChannel CONSUMER_KEY(HID_CONSUMER_ENTER_CHANNEL, HID_TYPE_OSC)
#define Consumer_OrderMovie CONSUMER_KEY(HID_CONSUMER_ORDER_MOVIE, HID_TYPE_OSC)
#define Consumer_Channel CONSUMER_KEY(HID_CONSUMER_CHANNEL, HID_TYPE_LC)
#define Consumer_MediaSelection CONSUMER_KEY(HID_CONSUMER_MEDIA_SELECTION, HID_TYPE_NARY)
#define Consumer_MediaSelectComputer CONSUMER_KEY(HID_CONSUMER_MEDIA_SELECT_COMPUTER, HID_TYPE_SEL)
#define Consumer_MediaSelectTV CONSUMER_KEY(HID_CONSUMER_MEDIA_SELECT_TV, HID_TYPE_SEL)
#define Consumer_MediaSelectWww CONSUMER_KEY(HID_CONSUMER_MEDIA_SELECT_WWW, HID_TYPE_SEL)
#define Consumer_MediaSelectDvd CONSUMER_KEY(HID_CONSUMER_MEDIA_SELECT_DVD, HID_TYPE_SEL)
#define Consumer_MediaSelectTelephone CONSUMER_KEY(HID_CONSUMER_MEDIA_SELECT_TELEPHONE, HID_TYPE_SEL)
#define Consumer_MediaSelectProgramGuide CONSUMER_KEY(HID_CONSUMER_MEDIA_SELECT_PROGRAM_GUIDE, HID_TYPE_SEL)
#define Consumer_MediaSelectVideoPhone CONSUMER_KEY(HID_CONSUMER_MEDIA_SELECT_VIDEO_PHONE, HID_TYPE_SEL)
#define Consumer_MediaSelectGames CONSUMER_KEY(HID_CONSUMER_MEDIA_SELECT_GAMES, HID_TYPE_SEL)
#define Consumer_MediaSelectMessages CONSUMER_KEY(HID_CONSUMER_MEDIA_SELECT_MESSAGES, HID_TYPE_SEL)
#define Consumer_MediaSelectCd CONSUMER_KEY(HID_CONSUMER_MEDIA_SELECT_CD, HID_TYPE_SEL)
#define Consumer_MediaSelectVcr CONSUMER_KEY(HID_CONSUMER_MEDIA_SELECT_VCR, HID_TYPE_SEL)
#define Consumer_MediaSelectTuner CONSUMER_KEY(HID_CONSUMER_MEDIA_SELECT_TUNER, HID_TYPE_SEL)
#define Consumer_Quit CONSUMER_KEY(HID_CONSUMER_QUIT, HID_TYPE_OSC)
#define Consumer_Help CONSUMER_KEY(HID_CONSUMER_HELP, HID_TYPE_OOC)
#define Consumer_MediaSelectTape CONSUMER_KEY(HID_CONSUMER_MEDIA_SELECT_TAPE, HID_TYPE_SEL)
#define Consumer_MediaSelectCable CONSUMER_KEY(HID_CONSUMER_MEDIA_SELECT_CABLE, HID_TYPE_SEL)
#define Consumer_MediaSelectSatellite CONSUMER_KEY(HID_CONSUMER_MEDIA_SELECT_SATELLITE, HID_TYPE_SEL)
#define Consumer_MediaSelectSecurity CONSUMER_KEY(HID_CONSUMER_MEDIA_SELECT_SECURITY, HID_TYPE_SEL)
#define Consumer_MediaSelectHome CONSUMER_KEY(HID_CONSUMER_MEDIA_SELECT_HOME, HID_TYPE_SEL)
#define Consumer_MediaSelectCall CONSUMER_KEY(HID_CONSUMER_MEDIA_SELECT_CALL, HID_TYPE_SEL)
#define Consumer_ChannelIncrement CONSUMER_KEY(HID_CONSUMER_CHANNEL_INCREMENT, HID_TYPE_OSC)
#define Consumer_ChannelDecrement CONSUMER_KEY(HID_CONSUMER_CHANNEL_DECREMENT, HID_TYPE_OSC)
#define Consumer_MediaSelectSap CONSUMER_KEY(HID_CONSUMER_MEDIA_SELECT_SAP, HID_TYPE_SEL)

#define Consumer_VcrPlus CONSUMER_KEY(HID_CONSUMER_VCR_PLUS, HID_TYPE_OSC)
#define Consumer_Once CONSUMER_KEY(HID_CONSUMER_ONCE, HID_TYPE_OSC)
#define Consumer_Daily CONSUMER_KEY(HID_CONSUMER_DAILY, HID_TYPE_OSC)
#define Consumer_Weekly CONSUMER_KEY(HID_CONSUMER_WEEKLY, HID_TYPE_OSC)
#define Consumer_Monthly CONSUMER_KEY(HID_CONSUMER_MONTHLY, HID_TYPE_OSC)

#define Consumer_Play CONSUMER_KEY(HID_CONSUMER_PLAY, HID_TYPE_OOC)
#define Consumer_Pause CONSUMER_KEY(HID_CONSUMER_PAUSE, HID_TYPE_OOC)
#define Consumer_Record CONSUMER_KEY(HID_CONSUMER_RECORD, HID_TYPE_OOC)
#define Consumer_FastForward CONSUMER_KEY(HID_CONSUMER_FAST_FORWARD, HID_TYPE_OOC)
#define Consumer_Rewind CONSUMER_KEY(HID_CONSUMER_REWIND, HID_TYPE_OOC)
#define Consumer_ScanNextTrack CONSUMER_KEY(HID_CONSUMER_SCAN_NEXT_TRACK, HID_TYPE_OSC)
#define Consumer_ScanPreviousTrack CONSUMER_KEY(HID_CONSUMER_SCAN_PREVIOUS_TRACK, HID_TYPE_OSC)
#define Consumer_Stop CONSUMER_KEY(HID_CONSUMER_STOP, HID_TYPE_OSC)
#define Consumer_Eject CONSUMER_KEY(HID_CONSUMER_EJECT, HID_TYPE_OSC)
#define Consumer_RandomPlay CONSUMER_KEY(HID_CONSUMER_RANDOM_PLAY, HID_TYPE_OOC)
#define Consumer_SelectDisc CONSUMER_KEY(HID_CONSUMER_SELECT_DISC, HID_TYPE_NARY)
#define Consumer_EnterDiscMc CONSUMER_KEY(HID_CONSUMER_ENTER_DISC_MC, HID_TYPE_MC)
#define Consumer_Repeat CONSUMER_KEY(HID_CONSUMER_REPEAT, HID_TYPE_OSC)
#define Consumer_Tracking CONSUMER_KEY(HID_CONSUMER_TRACKING, HID_TYPE_LC)
#define Consumer_Track_Normal CONSUMER_KEY(HID_CONSUMER_TRACK_NORMAL, HID_TYPE_OSC)
#define Consumer_SlowTracking CONSUMER_KEY(HID_CONSUMER_SLOW_TRACKING, HID_TYPE_LC)
#define Consumer_FrameForward CONSUMER_KEY(HID_CONSUMER_FRAME_FORWARD, HID_TYPE_RTC)
#define Consumer_FrameBack CONSUMER_KEY(HID_CONSUMER_FRAME_BACK, HID_TYPE_RTC)
#define Consumer_Mark CONSUMER_KEY(HID_CONSUMER_MARK, HID_TYPE_OSC)
#define Consumer_ClearMark CONSUMER_KEY(HID_CONSUMER_CLEAR_MARK, HID_TYPE_OSC)
#define Consumer_RepeatFromMark CONSUMER_KEY(HID_CONSUMER_REPEAT_FROM_MARK, HID_TYPE_OOC)
#define Consumer_ReturnTo_Mark CONSUMER_KEY(HID_CONSUMER_RETURN_TO_MARK, HID_TYPE_OSC)
#define Consumer_SearchMarkForward CONSUMER_KEY(HID_CONSUMER_SEARCH_MARK_FORWARD, HID_TYPE_OSC)
#define Consumer_SearchMarkBackwards CONSUMER_KEY(HID_CONSUMER_SEARCH_MARK_BACKWARDS, HID_TYPE_OSC)
#define Consumer_CounterReset CONSUMER_KEY(HID_CONSUMER_COUNTER_RESET, HID_TYPE_OSC)
#define Consumer_ShowCounter CONSUMER_KEY(HID_CONSUMER_SHOW_COUNTER, HID_TYPE_OSC)
#define Consumer_TrackingIncrement CONSUMER_KEY(HID_CONSUMER_TRACKING_INCREMENT, HID_TYPE_RTC)
#define Consumer_TrackingDecrement CONSUMER_KEY(HID_CONSUMER_TRACKING_DECREMENT, HID_TYPE_RTC)
#define Consumer_StopSlashEject CONSUMER_KEY(HID_CONSUMER_STOP_SLASH_EJECT, HID_TYPE_OSC)
#define Consumer_PlaySlashPause CONSUMER_KEY(HID_CONSUMER_PLAY_SLASH_PAUSE, HID_TYPE_OSC)
#define Consumer_PlaySlashSkip CONSUMER_KEY(HID_CONSUMER_PLAY_SLASH_SKIP, HID_TYPE_OSC)

#define Consumer_VoiceCommand CONSUMER_KEY(HID_CONSUMER_VOICE_COMMAND, HID_TYPE_SEL)
#define Consumer_InvokeCaptureInterface CONSUMER_KEY(HID_CONSUMER_INVOKE_CAPTURE_INTERFACE, HID_TYPE_SEL)
#define Consumer_StartOrStopGameRecording CONSUMER_KEY(HID_CONSUMER_START_OR_STOP_GAME_RECORDING, HID_TYPE_SEL)
#define Consumer_HistoricalGameCapture CONSUMER_KEY(HID_CONSUMER_HISTORICAL_GAME_CAPTURE, HID_TYPE_SEL)
#define Consumer_CaptureGameScreenshot CONSUMER_KEY(HID_CONSUMER_CAPTURE_GAME_SCREENSHOT, HID_TYPE_SEL)
#define Consumer_ShowOrHideRecordingIndicator CONSUMER_KEY(HID_CONSUMER_SHOW_OR_HIDE_RECORDING_INDICATOR, HID_TYPE_SEL)
#define Consumer_StartOrStopMicrophoneCapture CONSUMER_KEY(HID_CONSUMER_START_OR_STOP_MICROPHONE_CAPTURE, HID_TYPE_SEL)
#define Consumer_StartOrStopCameraCapture CONSUMER_KEY(HID_CONSUMER_START_OR_STOP_CAMERA_CAPTURE, HID_TYPE_SEL)

#define Consumer_Volume CONSUMER_KEY(HID_CONSUMER_VOLUME, HID_TYPE_LC)
#define Consumer_Balance CONSUMER_KEY(HID_CONSUMER_BALANCE, HID_TYPE_LC)
#define Consumer_Mute CONSUMER_KEY(HID_CONSUMER_MUTE, HID_TYPE_OOC)
#define Consumer_Bass CONSUMER_KEY(HID_CONSUMER_BASS, HID_TYPE_LC)
#define Consumer_Treble CONSUMER_KEY(HID_CONSUMER_TREBLE, HID_TYPE_LC)
#define Consumer_BassBoost CONSUMER_KEY(HID_CONSUMER_BASS_BOOST, HID_TYPE_OOC)
#define Consumer_SurroundMode CONSUMER_KEY(HID_CONSUMER_SURROUND_MODE, HID_TYPE_OSC)
#define Consumer_Loudness CONSUMER_KEY(HID_CONSUMER_LOUDNESS, HID_TYPE_OOC)
#define Consumer_Mpx CONSUMER_KEY(HID_CONSUMER_MPX, HID_TYPE_OOC)
#define Consumer_VolumeIncrement CONSUMER_KEY(HID_CONSUMER_VOLUME_INCREMENT, HID_TYPE_RTC)


#define Consumer_VolumeDecrement CONSUMER_KEY(HID_CONSUMER_VOLUME_DECREMENT, HID_TYPE_RTC)

#define Consumer_SpeedSelect CONSUMER_KEY(HID_CONSUMER_SPEED_SELECT, HID_TYPE_OSC)
#define Consumer_PlaybackSpeed CONSUMER_KEY(HID_CONSUMER_PLAYBACK_SPEED, HID_TYPE_NARY)
#define Consumer_StandardPlay CONSUMER_KEY(HID_CONSUMER_STANDARD_PLAY, HID_TYPE_SEL)
#define Consumer_LongPlay CONSUMER_KEY(HID_CONSUMER_LONG_PLAY, HID_TYPE_SEL)
#define Consumer_ExtendedPlay CONSUMER_KEY(HID_CONSUMER_EXTENDED_PLAY, HID_TYPE_SEL)
#define Consumer_Slow CONSUMER_KEY(HID_CONSUMER_SLOW, HID_TYPE_OSC)

#define Consumer_FanEnable CONSUMER_KEY(HID_CONSUMER_FAN_ENABLE, HID_TYPE_OOC)
#define Consumer_FanSpeed CONSUMER_KEY(HID_CONSUMER_FAN_SPEED, HID_TYPE_LC)
#define Consumer_LightEnable CONSUMER_KEY(HID_CONSUMER_LIGHT_ENABLE, HID_TYPE_OOC)
#define Consumer_LightIlluminationLevel CONSUMER_KEY(HID_CONSUMER_LIGHT_ILLUMINATION_LEVEL, HID_TYPE_LC)
#define Consumer_ClimateControlEnable CONSUMER_KEY(HID_CONSUMER_CLIMATE_CONTROL_ENABLE, HID_TYPE_OOC)
#define Consumer_RoomTemperature CONSUMER_KEY(HID_CONSUMER_ROOM_TEMPERATURE, HID_TYPE_LC)
#define Consumer_SecurityEnable CONSUMER_KEY(HID_CONSUMER_SECURITY_ENABLE, HID_TYPE_OOC)
#define Consumer_FireAlarm CONSUMER_KEY(HID_CONSUMER_FIRE_ALARM, HID_TYPE_OSC)
#define Consumer_PoliceAlarm CONSUMER_KEY(HID_CONSUMER_POLICE_ALARM, HID_TYPE_OSC)
#define Consumer_Proximity CONSUMER_KEY(HID_CONSUMER_PROXIMITY, HID_TYPE_LC)
#define Consumer_Motion CONSUMER_KEY(HID_CONSUMER_MOTION, HID_TYPE_OSC)
#define Consumer_DuressAlarm CONSUMER_KEY(HID_CONSUMER_DURESS_ALARM, HID_TYPE_OSC)
#define Consumer_HoldupAlarm CONSUMER_KEY(HID_CONSUMER_HOLDUP_ALARM, HID_TYPE_OSC)
#define Consumer_MedicalAlarm CONSUMER_KEY(HID_CONSUMER_MEDICAL_ALARM, HID_TYPE_OSC)

#define Consumer_BalanceRight CONSUMER_KEY(HID_CONSUMER_BALANCE_RIGHT, HID_TYPE_RTC)
#define Consumer_BalanceLeft CONSUMER_KEY(HID_CONSUMER_BALANCE_LEFT, HID_TYPE_RTC)
#define Consumer_BassIncrement CONSUMER_KEY(HID_CONSUMER_BASS_INCREMENT, HID_TYPE_RTC)
#define Consumer_BassDecrement CONSUMER_KEY(HID_CONSUMER_BASS_DECREMENT, HID_TYPE_RTC)
#define Consumer_TrebleIncrement CONSUMER_KEY(HID_CONSUMER_TREBLE_INCREMENT, HID_TYPE_RTC)
#define Consumer_TrebleDecrement CONSUMER_KEY(HID_CONSUMER_TREBLE_DECREMENT, HID_TYPE_RTC)

#define Consumer_SpeakerSystem CONSUMER_KEY(HID_CONSUMER_SPEAKER_SYSTEM, HID_TYPE_CL)
#define Consumer_ChannelLeft CONSUMER_KEY(HID_CONSUMER_CHANNEL_LEFT, HID_TYPE_CL)
#define Consumer_ChannelRight CONSUMER_KEY(HID_CONSUMER_CHANNEL_RIGHT, HID_TYPE_CL)
#define Consumer_ChannelCenter CONSUMER_KEY(HID_CONSUMER_CHANNEL_CENTER, HID_TYPE_CL)
#define Consumer_ChannelFront CONSUMER_KEY(HID_CONSUMER_CHANNEL_FRONT, HID_TYPE_CL)
#define Consumer_ChannelCenterFront CONSUMER_KEY(HID_CONSUMER_CHANNEL_CENTER_FRONT, HID_TYPE_CL)
#define Consumer_ChannelSide CONSUMER_KEY(HID_CONSUMER_CHANNEL_SIDE, HID_TYPE_CL)
#define Consumer_ChannelSurround CONSUMER_KEY(HID_CONSUMER_CHANNEL_SURROUND, HID_TYPE_CL)
#define Consumer_ChannelLowFrequencyEnhancement CONSUMER_KEY(HID_CONSUMER_CHANNEL_LOW_FREQUENCY_ENHANCEMENT, HID_TYPE_CL)
#define Consumer_ChannelTop CONSUMER_KEY(HID_CONSUMER_CHANNEL_TOP, HID_TYPE_CL)
#define Consumer_ChannelUnknown CONSUMER_KEY(HID_CONSUMER_CHANNEL_UNKNOWN, HID_TYPE_CL)

#define Consumer_SubChannel CONSUMER_KEY(HID_CONSUMER_SUB_CHANNEL, HID_TYPE_LC)
#define Consumer_SubChannelIncrement CONSUMER_KEY(HID_CONSUMER_SUB_CHANNEL_INCREMENT, HID_TYPE_OSC)
#define Consumer_SubChannelDecrement CONSUMER_KEY(HID_CONSUMER_SUB_CHANNEL_DECREMENT, HID_TYPE_OSC)
#define Consumer_AlternateAudioIncrement CONSUMER_KEY(HID_CONSUMER_ALTERNATE_AUDIO_INCREMENT, HID_TYPE_OSC)
#define Consumer_AlternateAudioDecrement CONSUMER_KEY(HID_CONSUMER_ALTERNATE_AUDIO_DECREMENT, HID_TYPE_OSC)

#define Consumer_Application_Launch_Buttons CONSUMER_KEY(HID_CONSUMER_APPLICATION_LAUNCH_BUTTONS, HID_TYPE_NARY)
#define Consumer_AL_Launch_Button_Configuration_Tool CONSUMER_KEY(HID_CONSUMER_AL_LAUNCH_BUTTON_CONFIGURATION_TOOL, HID_TYPE_SEL)
#define Consumer_AL_Programmable_Button_Configuration CONSUMER_KEY(HID_CONSUMER_AL_PROGRAMMABLE_BUTTON_CONFIGURATION, HID_TYPE_SEL)
#define Consumer_AL_Consumer_Control_Configuration CONSUMER_KEY(HID_CONSUMER_AL_CONSUMER_CONTROL_CONFIGURATION, HID_TYPE_SEL)
#define Consumer_AL_Word_Processor CONSUMER_KEY(HID_CONSUMER_AL_WORD_PROCESSOR, HID_TYPE_SEL)
#define Consumer_AL_Text_Editor CONSUMER_KEY(HID_CONSUMER_AL_TEXT_EDITOR, HID_TYPE_SEL)
#define Consumer_AL_Spreadsheet CONSUMER_KEY(HID_CONSUMER_AL_SPREADSHEET, HID_TYPE_SEL)
#define Consumer_AL_Graphics_Editor CONSUMER_KEY(HID_CONSUMER_AL_GRAPHICS_EDITOR, HID_TYPE_SEL)
#define Consumer_AL_Presentation_App CONSUMER_KEY(HID_CONSUMER_AL_PRESENTATION_APP, HID_TYPE_SEL)
#define Consumer_AL_Database_App CONSUMER_KEY(HID_CONSUMER_AL_DATABASE_APP, HID_TYPE_SEL)
#define Consumer_AL_Email_Reader CONSUMER_KEY(HID_CONSUMER_AL_EMAIL_READER, HID_TYPE_SEL)
#define Consumer_AL_Newsreader CONSUMER_KEY(HID_CONSUMER_AL_NEWSREADER, HID_TYPE_SEL)
#define Consumer_AL_Voicemail CONSUMER_KEY(HID_CONSUMER_AL_VOICEMAIL, HID_TYPE_SEL)
#define Consumer_AL_Contacts_Slash_Address_Book CONSUMER_KEY(HID_CONSUMER_AL_CONTACTS_SLASH_ADDRESS_BOOK, HID_TYPE_SEL)
#define Consumer_AL_Calendar_Slash_Schedule CONSUMER_KEY(HID_CONSUMER_AL_CALENDAR_SLASH_SCHEDULE, HID_TYPE_SEL)
#define Consumer_AL_Task_Slash_Project_Manager CONSUMER_KEY(HID_CONSUMER_AL_TASK_SLASH_PROJECT_MANAGER, HID_TYPE_SEL)
#define Consumer_AL_Log_Slash_Journal_Slash_Timecard CONSUMER_KEY(HID_CONSUMER_AL_LOG_SLASH_JOURNAL_SLASH_TIMECARD, HID_TYPE_SEL)
#define Consumer_AL_Checkbook_Slash_Finance CONSUMER_KEY(HID_CONSUMER_AL_CHECKBOOK_SLASH_FINANCE, HID_TYPE_SEL)
#define Consumer_AL_Calculator CONSUMER_KEY(HID_CONSUMER_AL_CALCULATOR, HID_TYPE_SEL)
#define Consumer_AL_AVCaptureSlashPlayback CONSUMER_KEY(HID_CONSUMER_AL_A_SLASH_V_CAPTURE_SLASH_PLAYBACK, HID_TYPE_SEL)
#define Consumer_AL_Local_MachineBrowser CONSUMER_KEY(HID_CONSUMER_AL_LOCAL_MACHINE_BROWSER, HID_TYPE_SEL)
#define Consumer_AL_Lan_SlashWanBrowser CONSUMER_KEY(HID_CONSUMER_AL_LAN_SLASH_WAN_BROWSER, HID_TYPE_SEL)
#define Consumer_AL_InternetBrowser CONSUMER_KEY(HID_CONSUMER_AL_INTERNET_BROWSER, HID_TYPE_SEL)
#define Consumer_AL_RemoteNetworkingSlashIspConnect CONSUMER_KEY(HID_CONSUMER_AL_REMOTE_NETWORKING_SLASH_ISP_CONNECT, HID_TYPE_SEL)
#define Consumer_AL_NetworkConference CONSUMER_KEY(HID_CONSUMER_AL_NETWORK_CONFERENCE, HID_TYPE_SEL)
#define Consumer_AL_NetworkChat CONSUMER_KEY(HID_CONSUMER_AL_NETWORK_CHAT, HID_TYPE_SEL)
#define Consumer_AL_TelephonySlashDialer CONSUMER_KEY(HID_CONSUMER_AL_TELEPHONY_SLASH_DIALER, HID_TYPE_SEL)
#define Consumer_AL_Logon CONSUMER_KEY(HID_CONSUMER_AL_LOGON, HID_TYPE_SEL)
#define Consumer_AL_Logoff CONSUMER_KEY(HID_CONSUMER_AL_LOGOFF, HID_TYPE_SEL)
#define Consumer_AL_LogonSlashLogoff CONSUMER_KEY(HID_CONSUMER_AL_LOGON_SLASH_LOGOFF, HID_TYPE_SEL)
#define Consumer_AL_TerminalLockSlashScreensaver CONSUMER_KEY(HID_CONSUMER_AL_TERMINAL_LOCK_SLASH_SCREENSAVER, HID_TYPE_SEL)
#define Consumer_AL_ControlPanel CONSUMER_KEY(HID_CONSUMER_AL_CONTROL_PANEL, HID_TYPE_SEL)
#define Consumer_AL_CommandLineProcessorSlashRun CONSUMER_KEY(HID_CONSUMER_AL_COMMAND_LINE_PROCESSOR_SLASH_RUN, HID_TYPE_SEL)
#define Consumer_AL_ProcessSlashTask_Manager CONSUMER_KEY(HID_CONSUMER_AL_PROCESS_SLASH_TASK_MANAGER, HID_TYPE_SEL)
#define Consumer_AL_SelectTaskSlashApplication CONSUMER_KEY(HID_CONSUMER_AL_SELECT_TASK_SLASH_APPLICATION, HID_TYPE_SEL)
#define Consumer_AL_NextTaskSlashApplication CONSUMER_KEY(HID_CONSUMER_AL_NEXT_TASK_SLASH_APPLICATION, HID_TYPE_SEL)
#define Consumer_AL_PreviousTaskSlashApplication CONSUMER_KEY(HID_CONSUMER_AL_PREVIOUS_TASK_SLASH_APPLICATION, HID_TYPE_SEL)
#define Consumer_AL_PreemptiveHaltTaskSlashApplication CONSUMER_KEY(HID_CONSUMER_AL_PREEMPTIVE_HALT_TASK_SLASH_APPLICATION, HID_TYPE_SEL)
#define Consumer_AL_IntegratedHelpCenter CONSUMER_KEY(HID_CONSUMER_AL_INTEGRATED_HELP_CENTER, HID_TYPE_SEL)
#define Consumer_AL_Documents CONSUMER_KEY(HID_CONSUMER_AL_DOCUMENTS, HID_TYPE_SEL)
#define Consumer_AL_Thesaurus CONSUMER_KEY(HID_CONSUMER_AL_THESAURUS, HID_TYPE_SEL)
#define Consumer_AL_Dictionary CONSUMER_KEY(HID_CONSUMER_AL_DICTIONARY, HID_TYPE_SEL)
#define Consumer_AL_Desktop CONSUMER_KEY(HID_CONSUMER_AL_DESKTOP, HID_TYPE_SEL)
#define Consumer_AL_SpellCheck CONSUMER_KEY(HID_CONSUMER_AL_SPELL_CHECK, HID_TYPE_SEL)
#define Consumer_AL_GrammarCheck CONSUMER_KEY(HID_CONSUMER_AL_GRAMMAR_CHECK, HID_TYPE_SEL)
#define Consumer_AL_WirelessStatus CONSUMER_KEY(HID_CONSUMER_AL_WIRELESS_STATUS, HID_TYPE_SEL)
#define Consumer_AL_KeyboardLayout CONSUMER_KEY(HID_CONSUMER_AL_KEYBOARD_LAYOUT, HID_TYPE_SEL)
#define Consumer_AL_VirusProtection CONSUMER_KEY(HID_CONSUMER_AL_VIRUS_PROTECTION, HID_TYPE_SEL)
#define Consumer_AL_Encryption CONSUMER_KEY(HID_CONSUMER_AL_ENCRYPTION, HID_TYPE_SEL)
#define Consumer_AL_ScreenSaver CONSUMER_KEY(HID_CONSUMER_AL_SCREEN_SAVER, HID_TYPE_SEL)
#define Consumer_AL_Alarms CONSUMER_KEY(HID_CONSUMER_AL_ALARMS, HID_TYPE_SEL)
#define Consumer_AL_Clock CONSUMER_KEY(HID_CONSUMER_AL_CLOCK, HID_TYPE_SEL)
#define Consumer_AL_FileBrowser CONSUMER_KEY(HID_CONSUMER_AL_FILE_BROWSER, HID_TYPE_SEL)
#define Consumer_AL_PowerStatus CONSUMER_KEY(HID_CONSUMER_AL_POWER_STATUS, HID_TYPE_SEL)
#define Consumer_AL_ImageBrowser CONSUMER_KEY(HID_CONSUMER_AL_IMAGE_BROWSER, HID_TYPE_SEL)
#define Consumer_AL_AudioBrowser CONSUMER_KEY(HID_CONSUMER_AL_AUDIO_BROWSER, HID_TYPE_SEL)
#define Consumer_AL_MovieBrowser CONSUMER_KEY(HID_CONSUMER_AL_MOVIE_BROWSER, HID_TYPE_SEL)
#define Consumer_AL_DigitalRightsManager CONSUMER_KEY(HID_CONSUMER_AL_DIGITAL_RIGHTS_MANAGER, HID_TYPE_SEL)
#define Consumer_AL_DigitalWallet CONSUMER_KEY(HID_CONSUMER_AL_DIGITAL_WALLET, HID_TYPE_SEL)

#define Consumer_AL_InstantMessaging CONSUMER_KEY(HID_CONSUMER_AL_INSTANT_MESSAGING, HID_TYPE_SEL)
#define Consumer_AL_OemFeaturesSlashTipsSlashTutorialBrowser CONSUMER_KEY(HID_CONSUMER_AL_OEM_FEATURES_SLASH_TIPS_SLASH_TUTORIAL_BROWSER, HID_TYPE_SEL)
#define Consumer_AL_OemHelp CONSUMER_KEY(HID_CONSUMER_AL_OEM_HELP, HID_TYPE_SEL)
#define Consumer_AL_OnlineCommunity CONSUMER_KEY(HID_CONSUMER_AL_ONLINE_COMMUNITY, HID_TYPE_SEL)
#define Consumer_AL_Entertainment_Content_Browser CONSUMER_KEY(HID_CONSUMER_AL_ENTERTAINMENT_CONTENT_BROWSER, HID_TYPE_SEL)
#define Consumer_AL_OnlineShoppingBrowser CONSUMER_KEY(HID_CONSUMER_AL_ONLINE_SHOPPING_BROWSER, HID_TYPE_SEL)
#define Consumer_AL_SmartcardInformationSlashHelp CONSUMER_KEY(HID_CONSUMER_AL_SMARTCARD_INFORMATION_SLASH_HELP, HID_TYPE_SEL)
#define Consumer_AL_MarketMonitorSlashFinanceBrowser CONSUMER_KEY(HID_CONSUMER_AL_MARKET_MONITOR_SLASH_FINANCE_BROWSER, HID_TYPE_SEL)
#define Consumer_AL_CustomizedCorporateNewsBrowser CONSUMER_KEY(HID_CONSUMER_AL_CUSTOMIZED_CORPORATE_NEWS_BROWSER, HID_TYPE_SEL)
#define Consumer_AL_OnlineActivityBrowser CONSUMER_KEY(HID_CONSUMER_AL_ONLINE_ACTIVITY_BROWSER, HID_TYPE_SEL)
#define Consumer_AL_ResearchSlashSearchBrowser CONSUMER_KEY(HID_CONSUMER_AL_RESEARCH_SLASH_SEARCH_BROWSER, HID_TYPE_SEL)
#define Consumer_AL_AudioPlayer CONSUMER_KEY(HID_CONSUMER_AL_AUDIO_PLAYER, HID_TYPE_SEL)

#define Consumer_AlMessageStatus CONSUMER_KEY(HID_CONSUMER_AL_MESSAGE_STATUS, HID_TYPE_SEL)
#define Consumer_AlContactSync CONSUMER_KEY(HID_CONSUMER_AL_CONTACT_SYNC, HID_TYPE_SEL)
#define Consumer_AlNavigation CONSUMER_KEY(HID_CONSUMER_AL_NAVIGATION, HID_TYPE_SEL)

#define Consumer_GenericGuiApplicationControls CONSUMER_KEY(HID_CONSUMER_GENERIC_GUI_APPLICATION_CONTROLS, HID_TYPE_NARY)
#define Consumer_AC_New CONSUMER_KEY(HID_CONSUMER_AC_NEW, HID_TYPE_SEL)
#define Consumer_AC_Open CONSUMER_KEY(HID_CONSUMER_AC_OPEN, HID_TYPE_SEL)
#define Consumer_AC_Close CONSUMER_KEY(HID_CONSUMER_AC_CLOSE, HID_TYPE_SEL)
#define Consumer_AC_Exit CONSUMER_KEY(HID_CONSUMER_AC_EXIT, HID_TYPE_SEL)
#define Consumer_AC_Maximize CONSUMER_KEY(HID_CONSUMER_AC_MAXIMIZE, HID_TYPE_SEL)
#define Consumer_AC_Minimize CONSUMER_KEY(HID_CONSUMER_AC_MINIMIZE, HID_TYPE_SEL)
#define Consumer_AC_Save CONSUMER_KEY(HID_CONSUMER_AC_SAVE, HID_TYPE_SEL)
#define Consumer_AC_Print CONSUMER_KEY(HID_CONSUMER_AC_PRINT, HID_TYPE_SEL)
#define Consumer_AC_Properties CONSUMER_KEY(HID_CONSUMER_AC_PROPERTIES, HID_TYPE_SEL)
#define Consumer_AC_Undo CONSUMER_KEY(HID_CONSUMER_AC_UNDO, HID_TYPE_SEL)
#define Consumer_AC_Copy CONSUMER_KEY(HID_CONSUMER_AC_COPY, HID_TYPE_SEL)
#define Consumer_AC_Cut CONSUMER_KEY(HID_CONSUMER_AC_CUT, HID_TYPE_SEL)
#define Consumer_AC_Paste CONSUMER_KEY(HID_CONSUMER_AC_PASTE, HID_TYPE_SEL)
#define Consumer_AC_SelectAll CONSUMER_KEY(HID_CONSUMER_AC_SELECT_ALL, HID_TYPE_SEL)
#define Consumer_AC_Find CONSUMER_KEY(HID_CONSUMER_AC_FIND, HID_TYPE_SEL)
#define Consumer_AC_FindAndReplace CONSUMER_KEY(HID_CONSUMER_AC_FIND_AND_REPLACE, HID_TYPE_SEL)
#define Consumer_AC_Search CONSUMER_KEY(HID_CONSUMER_AC_SEARCH, HID_TYPE_SEL)
#define Consumer_AC_GoTo CONSUMER_KEY(HID_CONSUMER_AC_GO_TO, HID_TYPE_SEL)
#define Consumer_AC_Home CONSUMER_KEY(HID_CONSUMER_AC_HOME, HID_TYPE_SEL)
#define Consumer_AC_Back CONSUMER_KEY(HID_CONSUMER_AC_BACK, HID_TYPE_SEL)
#define Consumer_AC_Forward CONSUMER_KEY(HID_CONSUMER_AC_FORWARD, HID_TYPE_SEL)
#define Consumer_AC_Stop CONSUMER_KEY(HID_CONSUMER_AC_STOP, HID_TYPE_SEL)
#define Consumer_AC_Refresh CONSUMER_KEY(HID_CONSUMER_AC_REFRESH, HID_TYPE_SEL)
#define Consumer_AC_PreviousLink CONSUMER_KEY(HID_CONSUMER_AC_PREVIOUS_LINK, HID_TYPE_SEL)
#define Consumer_AC_NextLink CONSUMER_KEY(HID_CONSUMER_AC_NEXT_LINK, HID_TYPE_SEL)
#define Consumer_AC_Bookmarks CONSUMER_KEY(HID_CONSUMER_AC_BOOKMARKS, HID_TYPE_SEL)
#define Consumer_AC_History CONSUMER_KEY(HID_CONSUMER_AC_HISTORY, HID_TYPE_SEL)
#define Consumer_AC_Subscriptions CONSUMER_KEY(HID_CONSUMER_AC_SUBSCRIPTIONS, HID_TYPE_SEL)
#define Consumer_AC_ZoomIn CONSUMER_KEY(HID_CONSUMER_AC_ZOOM_IN, HID_TYPE_SEL)
#define Consumer_AC_ZoomOut CONSUMER_KEY(HID_CONSUMER_AC_ZOOM_OUT, HID_TYPE_SEL)
#define Consumer_AC_Zoom CONSUMER_KEY(HID_CONSUMER_AC_ZOOM, HID_TYPE_LC)
#define Consumer_AC_FullScreenView CONSUMER_KEY(HID_CONSUMER_AC_FULL_SCREEN_VIEW, HID_TYPE_SEL)
#define Consumer_AC_FullSCreenView CONSUMER_KEY(HID_CONSUMER_AC_FULL_SCREEN_VIEW, HID_TYPE_SEL)
#define Consumer_AC_NormalView CONSUMER_KEY(HID_CONSUMER_AC_NORMAL_VIEW, HID_TYPE_SEL)
#define Consumer_AC_ViewToggle CONSUMER_KEY(HID_CONSUMER_AC_VIEW_TOGGLE, HID_TYPE_SEL)
#define Consumer_AC_ScrollUp CONSUMER_KEY(HID_CONSUMER_AC_SCROLL_UP, HID_TYPE_SEL)
#define Consumer_AC_ScrollDown CONSUMER_KEY(HID_CONSUMER_AC_SCROLL_DOWN, HID_TYPE_SEL)
#define Consumer_AC_Scroll CONSUMER_KEY(HID_CONSUMER_AC_SCROLL, HID_TYPE_LC)
#define Consumer_AC_PanLeft CONSUMER_KEY(HID_CONSUMER_AC_PAN_LEFT, HID_TYPE_SEL)
#define Consumer_AC_PanRight CONSUMER_KEY(HID_CONSUMER_AC_PAN_RIGHT, HID_TYPE_SEL)
#define Consumer_AC_Pan CONSUMER_KEY(HID_CONSUMER_AC_PAN, HID_TYPE_LC)
#define Consumer_AC_NewWindow CONSUMER_KEY(HID_CONSUMER_AC_NEW_WINDOW, HID_TYPE_SEL)
#define Consumer_AC_TileHorizontally CONSUMER_KEY(HID_CONSUMER_AC_TILE_HORIZONTALLY, HID_TYPE_SEL)
#define Consumer_AC_TileVertically CONSUMER_KEY(HID_CONSUMER_AC_TILE_VERTICALLY, HID_TYPE_SEL)
#define Consumer_AC_Format CONSUMER_KEY(HID_CONSUMER_AC_FORMAT, HID_TYPE_SEL)
#define Consumer_AC_Edit CONSUMER_KEY(HID_CONSUMER_AC_EDIT, HID_TYPE_SEL)
#define Consumer_AC_Bold CONSUMER_KEY(HID_CONSUMER_AC_BOLD, HID_TYPE_SEL)
#define Consumer_AC_Italics CONSUMER_KEY(HID_CONSUMER_AC_ITALICS, HID_TYPE_SEL)
#define Consumer_AC_Underline CONSUMER_KEY(HID_CONSUMER_AC_UNDERLINE, HID_TYPE_SEL)
#define Consumer_AC_Strikethrough CONSUMER_KEY(HID_CONSUMER_AC_STRIKETHROUGH, HID_TYPE_SEL)
#define Consumer_AC_Subscript CONSUMER_KEY(HID_CONSUMER_AC_SUBSCRIPT, HID_TYPE_SEL)
#define Consumer_AC_Superscript CONSUMER_KEY(HID_CONSUMER_AC_SUPERSCRIPT, HID_TYPE_SEL)
#define Consumer_AC_AllCaps CONSUMER_KEY(HID_CONSUMER_AC_ALL_CAPS, HID_TYPE_SEL)
#define Consumer_AC_Rotate CONSUMER_KEY(HID_CONSUMER_AC_ROTATE, HID_TYPE_SEL)
#define Consumer_AC_Resize CONSUMER_KEY(HID_CONSUMER_AC_RESIZE, HID_TYPE_SEL)
#define Consumer_AC_FlipHorizontal CONSUMER_KEY(HID_CONSUMER_AC_FLIP_HORIZONTAL, HID_TYPE_SEL)
#define Consumer_AC_FlipVertical CONSUMER_KEY(HID_CONSUMER_AC_FLIP_VERTICAL, HID_TYPE_SEL)
#define Consumer_AC_MirrorHorizontal CONSUMER_KEY(HID_CONSUMER_AC_MIRROR_HORIZONTAL, HID_TYPE_SEL)
#define Consumer_AC_MirrorVertical CONSUMER_KEY(HID_CONSUMER_AC_MIRROR_VERTICAL, HID_TYPE_SEL)
#define Consumer_AC_FontSelect CONSUMER_KEY(HID_CONSUMER_AC_FONT_SELECT, HID_TYPE_SEL)
#define Consumer_AC_FontColor CONSUMER_KEY(HID_CONSUMER_AC_FONT_COLOR, HID_TYPE_SEL)
#define Consumer_AC_FontSize CONSUMER_KEY(HID_CONSUMER_AC_FONT_SIZE, HID_TYPE_SEL)
#define Consumer_AC_JustifyLeft CONSUMER_KEY(HID_CONSUMER_AC_JUSTIFY_LEFT, HID_TYPE_SEL)
#define Consumer_AC_JustifyCenterH CONSUMER_KEY(HID_CONSUMER_AC_JUSTIFY_CENTER_H, HID_TYPE_SEL)
#define Consumer_AC_JustifyRight CONSUMER_KEY(HID_CONSUMER_AC_JUSTIFY_RIGHT, HID_TYPE_SEL)
#define Consumer_AC_JustifyBlockH CONSUMER_KEY(HID_CONSUMER_AC_JUSTIFY_BLOCK_H, HID_TYPE_SEL)
#define Consumer_AC_JustifyTop CONSUMER_KEY(HID_CONSUMER_AC_JUSTIFY_TOP, HID_TYPE_SEL)
#define Consumer_AC_JustifyCenterV CONSUMER_KEY(HID_CONSUMER_AC_JUSTIFY_CENTER_V, HID_TYPE_SEL)
#define Consumer_AC_JustifyBottom CONSUMER_KEY(HID_CONSUMER_AC_JUSTIFY_BOTTOM, HID_TYPE_SEL)
#define Consumer_AC_JustifyBlockV CONSUMER_KEY(HID_CONSUMER_AC_JUSTIFY_BLOCK_V, HID_TYPE_SEL)
#define Consumer_AC_IndentDecrease CONSUMER_KEY(HID_CONSUMER_AC_INDENT_DECREASE, HID_TYPE_SEL)
#define Consumer_AC_IndentIncrease CONSUMER_KEY(HID_CONSUMER_AC_INDENT_INCREASE, HID_TYPE_SEL)
#define Consumer_AC_NumberedList CONSUMER_KEY(HID_CONSUMER_AC_NUMBERED_LIST, HID_TYPE_SEL)
#define Consumer_AC_RestartNumbering CONSUMER_KEY(HID_CONSUMER_AC_RESTART_NUMBERING, HID_TYPE_SEL)
#define Consumer_AC_BulletedList CONSUMER_KEY(HID_CONSUMER_AC_BULLETED_LIST, HID_TYPE_SEL)
#define Consumer_AC_Promote CONSUMER_KEY(HID_CONSUMER_AC_PROMOTE, HID_TYPE_SEL)
#define Consumer_AC_Demote CONSUMER_KEY(HID_CONSUMER_AC_DEMOTE, HID_TYPE_SEL)
#define Consumer_AC_Yes CONSUMER_KEY(HID_CONSUMER_AC_YES, HID_TYPE_SEL)
#define Consumer_AC_No CONSUMER_KEY(HID_CONSUMER_AC_NO, HID_TYPE_SEL)
#define Consumer_AC_Cancel CONSUMER_KEY(HID_CONSUMER_AC_CANCEL, HID_TYPE_SEL)
#define Consumer_AC_Catalog CONSUMER_KEY(HID_CONSUMER_AC_CATALOG, HID_TYPE_SEL)
#define Consumer_AC_BuySlashCheckout CONSUMER_KEY(HID_CONSUMER_AC_BUY_SLASH_CHECKOUT, HID_TYPE_SEL)
#define Consumer_AC_AddToCart CONSUMER_KEY(HID_CONSUMER_AC_ADD_TO_CART, HID_TYPE_SEL)
#define Consumer_AC_Expand CONSUMER_KEY(HID_CONSUMER_AC_EXPAND, HID_TYPE_SEL)
#define Consumer_AC_ExpandAll CONSUMER_KEY(HID_CONSUMER_AC_EXPAND_ALL, HID_TYPE_SEL)
#define Consumer_AC_Collapse CONSUMER_KEY(HID_CONSUMER_AC_COLLAPSE, HID_TYPE_SEL)
#define Consumer_AC_CollapseAll CONSUMER_KEY(HID_CONSUMER_AC_COLLAPSE_ALL, HID_TYPE_SEL)
#define Consumer_AC_PrintPreview CONSUMER_KEY(HID_CONSUMER_AC_PRINT_PREVIEW, HID_TYPE_SEL)
#define Consumer_AC_PasteSpecial CONSUMER_KEY(HID_CONSUMER_AC_PASTE_SPECIAL, HID_TYPE_SEL)
#define Consumer_AC_InsertMode CONSUMER_KEY(HID_CONSUMER_AC_INSERT_MODE, HID_TYPE_SEL)
#define Consumer_AC_Delete CONSUMER_KEY(HID_CONSUMER_AC_DELETE, HID_TYPE_SEL)
#define Consumer_AC_Lock CONSUMER_KEY(HID_CONSUMER_AC_LOCK, HID_TYPE_SEL)
#define Consumer_AC_Unlock CONSUMER_KEY(HID_CONSUMER_AC_UNLOCK, HID_TYPE_SEL)
#define Consumer_AC_Protect CONSUMER_KEY(HID_CONSUMER_AC_PROTECT, HID_TYPE_SEL)
#define Consumer_AC_Unprotect CONSUMER_KEY(HID_CONSUMER_AC_UNPROTECT, HID_TYPE_SEL)
#define Consumer_AC_AttachComment CONSUMER_KEY(HID_CONSUMER_AC_ATTACH_COMMENT, HID_TYPE_SEL)
#define Consumer_AC_DeleteComment CONSUMER_KEY(HID_CONSUMER_AC_DELETE_COMMENT, HID_TYPE_SEL)
#define Consumer_AC_ViewComment CONSUMER_KEY(HID_CONSUMER_AC_VIEW_COMMENT, HID_TYPE_SEL)
#define Consumer_AC_SelectWord CONSUMER_KEY(HID_CONSUMER_AC_SELECT_WORD, HID_TYPE_SEL)
#define Consumer_AC_SelectSentence CONSUMER_KEY(HID_CONSUMER_AC_SELECT_SENTENCE, HID_TYPE_SEL)
#define Consumer_AC_SelectParagraph CONSUMER_KEY(HID_CONSUMER_AC_SELECT_PARAGRAPH, HID_TYPE_SEL)
#define Consumer_AC_SelectColumn CONSUMER_KEY(HID_CONSUMER_AC_SELECT_COLUMN, HID_TYPE_SEL)
#define Consumer_AC_SelectRow CONSUMER_KEY(HID_CONSUMER_AC_SELECT_ROW, HID_TYPE_SEL)
#define Consumer_AC_SelectTable CONSUMER_KEY(HID_CONSUMER_AC_SELECT_TABLE, HID_TYPE_SEL)
#define Consumer_AC_SelectObject CONSUMER_KEY(HID_CONSUMER_AC_SELECT_OBJECT, HID_TYPE_SEL)
#define Consumer_AC_RedoSlashRepeat CONSUMER_KEY(HID_CONSUMER_AC_REDO_SLASH_REPEAT, HID_TYPE_SEL)
#define Consumer_AC_Sort CONSUMER_KEY(HID_CONSUMER_AC_SORT, HID_TYPE_SEL)
#define Consumer_AC_Sort_Ascending CONSUMER_KEY(HID_CONSUMER_AC_SORT_ASCENDING, HID_TYPE_SEL)
#define Consumer_AC_Sort_Descending CONSUMER_KEY(HID_CONSUMER_AC_SORT_DESCENDING, HID_TYPE_SEL)
#define Consumer_AC_Filter CONSUMER_KEY(HID_CONSUMER_AC_FILTER, HID_TYPE_SEL)
#define Consumer_AC_SetClock CONSUMER_KEY(HID_CONSUMER_AC_SET_CLOCK, HID_TYPE_SEL)
#define Consumer_AC_ViewClock CONSUMER_KEY(HID_CONSUMER_AC_VIEW_CLOCK, HID_TYPE_SEL)
#define Consumer_AC_SelectTimeZone CONSUMER_KEY(HID_CONSUMER_AC_SELECT_TIME_ZONE, HID_TYPE_SEL)
#define Consumer_AC_EditTimeZones CONSUMER_KEY(HID_CONSUMER_AC_EDIT_TIME_ZONES, HID_TYPE_SEL)
#define Consumer_AC_SetAlarm CONSUMER_KEY(HID_CONSUMER_AC_SET_ALARM, HID_TYPE_SEL)
#define Consumer_AC_ClearAlarm CONSUMER_KEY(HID_CONSUMER_AC_CLEAR_ALARM, HID_TYPE_SEL)
#define Consumer_AC_SnoozeAlarm CONSUMER_KEY(HID_CONSUMER_AC_SNOOZE_ALARM, HID_TYPE_SEL)
#define Consumer_AC_ResetAlarm CONSUMER_KEY(HID_CONSUMER_AC_RESET_ALARM, HID_TYPE_SEL)
#define Consumer_AC_Synchronize CONSUMER_KEY(HID_CONSUMER_AC_SYNCHRONIZE, HID_TYPE_SEL)
#define Consumer_AC_SendSlashReceive CONSUMER_KEY(HID_CONSUMER_AC_SEND_SLASH_RECEIVE, HID_TYPE_SEL)
#define Consumer_AC_SendTo CONSUMER_KEY(HID_CONSUMER_AC_SEND_TO, HID_TYPE_SEL)
#define Consumer_AC_Reply CONSUMER_KEY(HID_CONSUMER_AC_REPLY, HID_TYPE_SEL)
#define Consumer_AC_ReplyAll CONSUMER_KEY(HID_CONSUMER_AC_REPLY_ALL, HID_TYPE_SEL)
#define Consumer_AC_ForwardMsg CONSUMER_KEY(HID_CONSUMER_AC_FORWARD_MSG, HID_TYPE_SEL)
#define Consumer_AC_Send CONSUMER_KEY(HID_CONSUMER_AC_SEND, HID_TYPE_SEL)
#define Consumer_AC_AttachFile CONSUMER_KEY(HID_CONSUMER_AC_ATTACH_FILE, HID_TYPE_SEL)
#define Consumer_AC_Upload CONSUMER_KEY(HID_CONSUMER_AC_UPLOAD, HID_TYPE_SEL)
#define Consumer_AC_Download CONSUMER_KEY(HID_CONSUMER_AC_DOWNLOAD, HID_TYPE_SEL)
#define Consumer_AC_SetBorders CONSUMER_KEY(HID_CONSUMER_AC_SET_BORDERS, HID_TYPE_SEL)
#define Consumer_AC_InsertRow CONSUMER_KEY(HID_CONSUMER_AC_INSERT_ROW, HID_TYPE_SEL)
#define Consumer_AC_InsertColumn CONSUMER_KEY(HID_CONSUMER_AC_INSERT_COLUMN, HID_TYPE_SEL)
#define Consumer_AC_InsertFile CONSUMER_KEY(HID_CONSUMER_AC_INSERT_FILE, HID_TYPE_SEL)
#define Consumer_AC_InsertPicture CONSUMER_KEY(HID_CONSUMER_AC_INSERT_PICTURE, HID_TYPE_SEL)
#define Consumer_AC_InsertObject CONSUMER_KEY(HID_CONSUMER_AC_INSERT_OBJECT, HID_TYPE_SEL)
#define Consumer_AC_InsertSymbol CONSUMER_KEY(HID_CONSUMER_AC_INSERT_SYMBOL, HID_TYPE_SEL)
#define Consumer_AC_SaveandClose CONSUMER_KEY(HID_CONSUMER_AC_SAVE_AND_CLOSE, HID_TYPE_SEL)
#define Consumer_AC_Rename CONSUMER_KEY(HID_CONSUMER_AC_RENAME, HID_TYPE_SEL)
#define Consumer_AC_Merge CONSUMER_KEY(HID_CONSUMER_AC_MERGE, HID_TYPE_SEL)
#define Consumer_AC_Split CONSUMER_KEY(HID_CONSUMER_AC_SPLIT, HID_TYPE_SEL)
#define Consumer_AC_Distribute_Horizontally CONSUMER_KEY(HID_CONSUMER_AC_DISTRIBUTE_HORIZONTALLY, HID_TYPE_SEL)
#define Consumer_AC_Distribute_Vertically CONSUMER_KEY(HID_CONSUMER_AC_DISTRIBUTE_VERTICALLY, HID_TYPE_SEL)

#define Consumer_AC_NextKeyboardLayoutSelect CONSUMER_KEY(HID_CONSUMER_AC_NEXT_KEYBOARD_LAYOUT_SELECT, HID_TYPE_SEL)
#define Consumer_AC_NavigationGuidance CONSUMER_KEY(HID_CONSUMER_AC_NAVIGATION_GUIDANCE, HID_TYPE_SEL)
#define Consumer_AC_DesktopShowAllWindows CONSUMER_KEY(HID_CONSUMER_AC_DESKTOP_SHOW_ALL_WINDOWS, HID_TYPE_SEL)
#define Consumer_AC_SoftKeyLeft CONSUMER_KEY(HID_CONSUMER_AC_SOFT_KEY_LEFT, HID_TYPE_SEL)
#define Consumer_AC_SoftKeyRight CONSUMER_KEY(HID_CONSUMER_AC_SOFT_KEY_RIGHT, HID_TYPE_SEL)
#define Consumer_AC_DesktopShowAllApplications CONSUMER_KEY(HID_CONSUMER_AC_DESKTOP_SHOW_ALL_APPLICATIONS, HID_TYPE_SEL)

#define Consumer_AC_IdleKeepAlive CONSUMER_KEY(HID_CONSUMER_AC_IDLE_KEEP_ALIVE, HID_TYPE_SEL)

#define Consumer_ExtendedKeyboardAttributesCollection CONSUMER_KEY(HID_CONSUMER_EXTENDED_KEYBOARD_ATTRIBUTES_COLLECTION, HID_TYPE_CL)
#define Consumer_KeyboardFormFactor CONSUMER_KEY(HID_CONSUMER_KEYBOARD_FORM_FACTOR, HID_TYPE_SV)
#define Consumer_KeyboardKeyType CONSUMER_KEY(HID_CONSUMER_KEYBOARD_KEY_TYPE, HID_TYPE_SV)
#define Consumer_KeyboardPhysicalLayout CONSUMER_KEY(HID_CONSUMER_KEYBOARD_PHYSICAL_LAYOUT, HID_TYPE_SV)
#define Consumer_VendorSpecificKeyboardPhysicalLayout CONSUMER_KEY(HID_CONSUMER_VENDOR_SPECIFIC_KEYBOARD_PHYSICAL_LAYOUT, HID_TYPE_SV)
#define Consumer_KeyboardIetfLanguageTagIndex CONSUMER_KEY(HID_CONSUMER_KEYBOARD_IETF_LANGUAGE_TAG_INDEX, HID_TYPE_SV)
#define Consumer_ImplementedKeyboardInputAssistControls CONSUMER_KEY(HID_CONSUMER_IMPLEMENTED_KEYBOARD_INPUT_ASSIST_CONTROLS, HID_TYPE_SV)
#define Consumer_KeyboardInputAssistPrevious CONSUMER_KEY(HID_CONSUMER_KEYBOARD_INPUT_ASSIST_PREVIOUS, HID_TYPE_SEL)
#define Consumer_KeyboardInputAssistNext CONSUMER_KEY(HID_CONSUMER_KEYBOARD_INPUT_ASSIST_NEXT, HID_TYPE_SEL)
#define Consumer_KeyboardInputAssistPreviousGroup CONSUMER_KEY(HID_CONSUMER_KEYBOARD_INPUT_ASSIST_PREVIOUS_GROUP, HID_TYPE_SEL)
#define Consumer_KeyboardInputAssistNextGroup CONSUMER_KEY(HID_CONSUMER_KEYBOARD_INPUT_ASSIST_NEXT_GROUP, HID_TYPE_SEL)
#define Consumer_KeyboardInputAssistAccept CONSUMER_KEY(HID_CONSUMER_KEYBOARD_INPUT_ASSIST_ACCEPT, HID_TYPE_SEL)
#define Consumer_KeyboardInputAssistCancel CONSUMER_KEY(HID_CONSUMER_KEYBOARD_INPUT_ASSIST_CANCEL, HID_TYPE_SEL)

#define Consumer_PrivacyScreenToggle CONSUMER_KEY(HID_CONSUMER_PRIVACY_SCREEN_TOGGLE, HID_TYPE_OOC)
#define Consumer_PrivacyScreenLevelDecrement CONSUMER_KEY(HID_CONSUMER_PRIVACY_SCREEN_LEVEL_DECREMENT, HID_TYPE_RTC)
#define Consumer_PrivacyScreenLevelIncrement CONSUMER_KEY(HID_CONSUMER_PRIVACY_SCREEN_LEVEL_INCREMENT, HID_TYPE_RTC)
#define Consumer_PrivacyScreenLevelMinimum CONSUMER_KEY(HID_CONSUMER_PRIVACY_SCREEN_LEVEL_MINIMUM, HID_TYPE_OSC)
