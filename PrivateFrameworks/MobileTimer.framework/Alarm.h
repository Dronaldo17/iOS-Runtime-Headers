/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@class <AlarmDelegate>, Alarm, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSString, NSURL, UILocalNotification;

@interface Alarm : NSObject {
    BOOL _allowsSnooze;
    unsigned int _daySetting;
    <AlarmDelegate> *_delegate;
    Alarm *_editingProxy;
    unsigned int _hour;
    NSString *_id;
    NSURL *_idUrl;
    NSDate *_lastModified;
    unsigned int _minute;
    UILocalNotification *_notification;
    BOOL _pretendActiveIfProxy;
    NSArray *_repeatDays;
    unsigned int _revision;
    NSMutableDictionary *_settings;
    NSString *_snapshotSound;
    int _snapshotSoundType;
    UILocalNotification *_snoozedNotification;
    NSString *_sound;
    int _soundType;
    NSString *_title;
    UILocalNotification *_weeklyNotifications[7];
}

@property(getter=isActive,readonly) BOOL active;
@property(readonly) NSString * alarmId;
@property(readonly) NSURL * alarmIdUrl;
@property BOOL allowsSnooze;
@property unsigned int daySetting;
@property <AlarmDelegate> * delegate;
@property(readonly) Alarm * editingProxy;
@property unsigned int hour;
@property(readonly) NSDate * lastModified;
@property unsigned int minute;
@property(readonly) NSString * rawTitle;
@property(readonly) NSArray * repeatDays;
@property(readonly) BOOL repeats;
@property(readonly) unsigned int revision;
@property(readonly) NSDictionary * settings;
@property(readonly) NSString * snapshotSound;
@property(readonly) int snapshotSoundType;
@property(getter=isSnoozed,readonly) BOOL snoozed;
@property(readonly) NSString * sound;
@property(readonly) int soundType;
@property(readonly) NSString * uiTitle;

+ (id)_newSettingsFromNotification:(id)arg1;
+ (BOOL)_verifyNotificationSettings:(id)arg1 againstAlarmSettings:(id)arg2;
+ (BOOL)_verifyNotificationSettings:(id)arg1 againstUserInfo:(id)arg2;
+ (BOOL)isSnoozeNotification:(id)arg1;
+ (BOOL)verifyDaySetting:(id)arg1 withMessageList:(id)arg2;
+ (BOOL)verifyHourSetting:(id)arg1 withMessageList:(id)arg2;
+ (BOOL)verifyIdSetting:(id)arg1 withMessageList:(id)arg2;
+ (BOOL)verifyMinuteSetting:(id)arg1 withMessageList:(id)arg2;
+ (BOOL)verifySettings:(id)arg1;

- (id)_newBaseDateComponentsForDay:(int)arg1;
- (id)_newNotification:(int)arg1;
- (unsigned int)_notificationsCount;
- (id)alarmId;
- (id)alarmIdUrl;
- (BOOL)allowsSnooze;
- (void)applyChangesFromEditingProxy;
- (void)applySettings:(id)arg1;
- (void)cancelNotifications;
- (int)compareTime:(id)arg1;
- (unsigned int)daySetting;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (void)dropEditingProxy;
- (void)dropNotifications;
- (id)editingProxy;
- (void)handleAlarmFired:(id)arg1;
- (void)handleNotificationSnoozed:(id)arg1 notifyDelegate:(BOOL)arg2;
- (unsigned int)hash;
- (unsigned int)hour;
- (id)init;
- (id)initWithDefaultValues;
- (id)initWithNotification:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (BOOL)isActive;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSnoozed;
- (id)lastModified;
- (void)markModified;
- (unsigned int)minute;
- (id)nextFireDate;
- (id)nextFireDateAfterDate:(id)arg1 notification:(id)arg2 day:(int)arg3;
- (id)nowDateForOffsetCalculation;
- (void)prepareEditingProxy;
- (void)prepareNotifications;
- (id)rawTitle;
- (void)refreshActiveState;
- (id)repeatDays;
- (BOOL)repeats;
- (unsigned int)revision;
- (void)scheduleNotifications;
- (void)setAllowsSnooze:(BOOL)arg1;
- (void)setDaySetting:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHour:(unsigned int)arg1;
- (void)setMinute:(unsigned int)arg1;
- (void)setSound:(id)arg1 ofType:(int)arg2;
- (void)setTitle:(id)arg1;
- (id)settings;
- (id)snapshotSound;
- (int)snapshotSoundType;
- (id)sound;
- (int)soundType;
- (id)timeZoneForOffsetCalculation;
- (BOOL)tryAddNotification:(id)arg1;
- (id)uiTitle;

@end