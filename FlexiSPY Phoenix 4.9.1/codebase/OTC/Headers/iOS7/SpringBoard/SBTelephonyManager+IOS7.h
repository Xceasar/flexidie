/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

@class NSString, NSTimer, RadiosPreferences, SBAlertItem, TUCall;
/*
@interface SBTelephonyManager : NSObject
{
    _Bool _containsCellularRadio;
    _Bool _hasCellularTelephony;
    _Bool _hasCellularData;
    _Bool _hasAppleTelephony;
    _Bool _hasAnyTelephony;
    NSString *_cachedCTRegistrationStatus;
    int _registrationStatus;
    _Bool _signalStrengthHasBeenSet;
    int _signalStrength;
    int _signalStrengthBars;
    NSString *_operatorName;
    NSString *_lastKnownNetworkCountryCode;
    unsigned int _usingWifi:1;
    unsigned int _usingVPN:1;
    unsigned int _iTunesNeedsToRecheckActivation:1;
    unsigned int _pretendingToSearch:1;
    unsigned int _callForwardingIndicator:2;
    _Bool _isNetworkTethering;
    int _numberOfNetworkTetheredDevices;
    unsigned int _hasShownWaitingAlert:1;
    SBAlertItem *_activationAlertItem;
    int _numActivationFailures;
    int _inEmergencyCallbackMode;
    unsigned int _loggingCallAudio:1;
    NSString *_inCallStatusPreamble;
    NSTimer *_inCallTimer;
    RadiosPreferences *_radioPrefs;
    int _needsUserIdentificationModule;
    NSString *_simStatus;
    int _wantsToHideDataIndicators;
    int _lteConnectionShows4G;
    int _modemDataConnectionType;
    _Bool _modemDataConnectionTypeIsKnown;
    _Bool _fallingBackToCellular;
    struct tcp_connection_fallback_watch_s *_cellularFallbackWatcher;
    void *_queue_fastDormancySuspendAssertion;
    TUCall *_incomingCall;
    TUCall *_activeCall;
    TUCall *_heldCall;
    TUCall *_outgoingCall;
}*/
@interface SBTelephonyManager (IOS7)
+ (id)sharedTelephonyManagerCreatingIfNecessary:(_Bool)arg1;
+ (id)sharedTelephonyManager;
@property(retain, nonatomic) TUCall *outgoingCall; // @synthesize outgoingCall=_outgoingCall;
@property(retain, nonatomic) TUCall *heldCall; // @synthesize heldCall=_heldCall;
@property(retain, nonatomic) TUCall *activeCall; // @synthesize activeCall=_activeCall;
@property(retain, nonatomic) TUCall *incomingCall; // @synthesize incomingCall=_incomingCall;
- (void)noteWirelessModemChanged;
- (void)setIsNetworkTethering:(_Bool)arg1 withNumberOfDevices:(int)arg2;
- (int)numberOfNetworkTetheredDevices;
- (_Bool)isNetworkTethering;
- (void)noteSIMUnlockAttempt;
- (int)registrationCauseCode;
- (_Bool)needsUserIdentificationModule;
- (id)SIMStatus;
- (void)_setSIMStatus:(id)arg1;
- (int)registrationStatus;
- (id)operatorName;
- (void)operatorBundleChanged;
- (void)setOperatorName:(id)arg1;
- (void)_reallySetOperatorName:(id)arg1;
- (void)_fetchOperatorNameWithCompletion:(id)arg1;
- (int)signalStrengthBars;
- (int)signalStrength;
- (void)_setSignalStrength:(int)arg1 andBars:(int)arg2;
- (void)carrierBundleChanged;
- (void)_prepareToAnswerCall;
- (_Bool)_pretendingToSearch;
- (void)_stopFakeService;
- (void)_startFakeServiceIfNecessary;
- (void)_cancelFakeService;
- (void)_updateRegistrationNow;
- (void)_setRegistrationStatus:(int)arg1;
- (void)_setCachedCTRegistrationStatus:(struct __CFString *)arg1;
- (struct __CFString *)_cachedCTRegistrationStatus;
- (void)postponementStatusChanged;
- (void)_proximityChanged:(id)arg1;
- (void)_headphoneChanged:(id)arg1;
- (void)_resetCTMMode;
- (id)ttyTitle;
- (_Bool)shouldPromptForTTY;
- (void)configureForTTY:(_Bool)arg1;
- (void)exitEmergencyCallbackMode;
- (void)_setIsInEmergencyCallbackMode:(unsigned char)arg1;
- (_Bool)isInEmergencyCallbackMode;
- (_Bool)isEmergencyCallActive;
- (void)_provisioningUpdateWithStatus:(int)arg1;
- (void)_setCurrentActivationAlertItem:(id)arg1;
- (id)copyTelephonyCapabilities;
- (id)copyMobileEquipmentInfo;
- (_Bool)isUsingVPNConnection;
- (void)setIsUsingVPNConnection:(_Bool)arg1;
- (void)_setIsUsingWiFiConnection:(_Bool)arg1;
- (_Bool)isTTYEnabled;
- (_Bool)isUsingSlowDataConnection;
- (_Bool)isInAirplaneMode;
- (void)setIsInAirplaneMode:(_Bool)arg1;
- (_Bool)EDGEIsOn;
- (_Bool)cellularRadioCapabilityIsActive;
- (void)_setWantsToHideDataIndicators:(int)arg1;
- (void)_postDataConnectionTypeChanged;
- (int)dataConnectionType;
- (int)_updateModemDataConnectionTypeWithCTInfo:(id)arg1;
- (_Bool)_lteConnectionShows4G;
- (void)_resetModemConnectionType;
- (void)setNetworkRegistrationEnabled:(_Bool)arg1;
- (_Bool)isNetworkRegistrationEnabled;
- (_Bool)MALoggingEnabled;
- (void)dumpBasebandState:(id)arg1;
- (void)_setIsLoggingCallAudio:(_Bool)arg1;
- (_Bool)isLoggingCallAudio;
- (void)setIncomingVoiceCallsEnabled:(_Bool)arg1;
- (void)unmute;
- (void)disconnectCallAndActivateHeld;
- (void)disconnectCall;
- (void)disconnectAllCalls;
- (void)swapCalls;
- (_Bool)isCallAmbiguous;
- (void)disconnectIncomingCall;
- (_Bool)inCall;
- (unsigned long long)faceTimeAudioCallCount;
- (unsigned long long)telephonyCallCount;
- (unsigned long long)_callCountForService:(int)arg1;
- (_Bool)shouldHangUpOnLock;
- (_Bool)callWouldUseReceiver:(_Bool)arg1;
- (_Bool)inCallUsingReceiverForcingRoutingToReceiver:(_Bool)arg1;
- (_Bool)inCallUsingSpeakerOrReceiver;
- (_Bool)multipleCallsExist;
- (_Bool)outgoingCallExists;
- (_Bool)incomingCallExists;
- (_Bool)heldCallExists;
- (_Bool)activeCallExists;
- (id)displayedCall;
- (int)callCount;
- (void)callEventHandler:(id)arg1;
- (void)_delayedAudioResume;
- (void)handleCallAudioFinished:(id)arg1;
- (void)handleCallControlFailure:(id)arg1;
- (void)updateDisplaySettings:(id)arg1 forOutgoingCallURL:(id)arg2 outURL:(id *)arg3;
- (id)urlWithScheme:(id)arg1 fromDialingNumber:(id)arg2 abUID:(int)arg3 urlPathAddition:(id)arg4 service:(int)arg5 forceAssist:(_Bool)arg6 suppressAssist:(_Bool)arg7 wasAlreadyAssisted:(_Bool)arg8;
- (_Bool)isEmergencyCallScheme:(id)arg1;
- (id)lastKnownNetworkCountryCode;
- (void)_updateLastKnownNetworkCountryCode;
- (void)updateNetworkLocale;
- (_Bool)updateLocale;
- (void)_updateState;
- (void)updateCalls;
- (void)airplaneModeChanged;
- (void)updateAirplaneMode;
- (void)setFastDormancySuspended:(_Bool)arg1;
- (void)queue_setFastDormancySuspended:(_Bool)arg1 withConnection:(struct __CTServerConnection *)arg2;
- (void)setLimitTransmitPowerPerBandEnabled:(_Bool)arg1;
- (void)updateStatusBarCallDuration;
- (void)_phoneActivationStateChanged:(id)arg1;
- (void)updateStatusBarCallState:(_Bool)arg1;
- (id)_phoneApp;
- (void)updateSpringBoard;
- (int)callForwardingIndicator;
- (void)updateCallForwardingIndicator;
- (void)setCallForwardingIndicator:(int)arg1;
- (double)inCallDuration;
- (void)updateTTYIndicator;
- (_Bool)hasAnyTelephony;
- (_Bool)hasCellularData;
- (_Bool)hasCellularTelephony;
- (_Bool)containsCellularRadio;
- (void)SBTelephonyDaemonRestartHandler;
//- (void)_serverConnectionDidError:(CDStruct_1ef3fb1f)arg1;
- (void)_avSystemControllerDidError:(id)arg1;
- (struct __CTServerConnection *)_serverConnection;
- (void)_performQueryInBackground:(id)arg1 withMainQueueResultHandler:(void)arg2;
- (void)_postStartupNotification;
- (id)init;

@end

