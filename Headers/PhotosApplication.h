/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIApplicationDelegate.h"
#import "Camera-Structs.h"
#import "PLPublishingAgentDelegate.h"
#import "MFMailComposeViewControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, UIViewController, NSMutableArray, NSTimer, UIWindow, NSString, NSDictionary, PLUIController, PLLibraryImageDataProvider, NSMutableSet;
@protocol NSCoding;

__attribute__((visibility("hidden")))
@interface PhotosApplication : XXUnknownSuperclass <UIApplicationDelegate, PLPublishingAgentDelegate, MFMailComposeViewControllerDelegate> {
	PLUIController* _uiController;
	int _delaySuspendCount;
	int _sendingEmailCount;
	BOOL _receivingRemoteControlEvents;
	BOOL _wantsToSuspend;
	unsigned _backgroundTaskIdentifier;
	BOOL _isRemaking;
	BOOL _cameraCancelledRemaking;
	UIWindow* _window;
	PLLibraryImageDataProvider* _imageDataProvider;
	NSMutableSet* _publishingAgents;
	NSMutableDictionary* _publishingAgentsByMediaItem;
	int _enableNetworkingFlagsCount;
	NSString* _trimmedFilePath;
	UIViewController* _composeParentViewController;
	BOOL _composeSheetIsReady;
	BOOL _inactiveUnderTaskSwitcher;
	BOOL _urlNeedsHandling;
	BOOL _shouldCancelPublishAfterRemaking;
	id _importController;
	NSMutableArray* _importDeviceQueue;
	NSTimer* _imageCaptureDeviceCheckTimer;
	int _observeForRechabilityChanges;
	BOOL _isReachable;
	BOOL _isOnWifi;
	int _observeForiMessageAvailability;
	BOOL _photoStreamIsBusy;
	BOOL _sharedPhotoStreamIsBusy;
	int _photoStreamActivityToken;
	int _sharedPhotoStreamActivityToken;
	NSString* _currentTestName;
	NSDictionary* _currentTestOptions;
}
@property(retain, nonatomic) UIWindow* window;
@property(retain, nonatomic) NSDictionary* currentTestOptions;
@property(retain, nonatomic) NSString* currentTestName;
@property(assign, nonatomic) id<NSCoding> autosaveIdentifier;
@property(assign, nonatomic) BOOL sendingEmail;
@property(readonly, assign, nonatomic) BOOL isOnWifi;
@property(readonly, assign, nonatomic) BOOL isReachable;
+(void)initialize;
-(void*)getSharedAddressBook;
-(void)_updateSharedPhotoStreamProgressDisplay;
-(void)_updatePhotoStreamProgressDisplay;
-(void)_updateNetworkActivityIndicatorAsync;
-(void)_unregisterForPhotoStreamActivityNotifications;
-(void)_registerForPhotoStreamActivityNotifications;
-(BOOL)shouldAllowSBAlertSupression;
-(BOOL)isiMessageEnabed;
-(void)disableObservingForiMessageAvailability;
-(void)enableObservingForiMessageAvailability;
-(void)_stopObservingForiMessageAvailability;
-(void)_startObservingForiMessageAvailability;
-(void)disableNetworkObservation;
-(void)enableNetworkObservation;
-(void)_stopObservingReachabilityChanges;
-(void)_startObservingReachabilityChanges;
-(void)_networkReachabilityDidChange:(id)_networkReachability;
-(void)setReceivingRemoteControlEvents:(BOOL)events;
-(void)mailComposeController:(id)controller bodyFinishedLoadingWithResult:(BOOL)result error:(id)error;
-(void)mailComposeController:(id)controller didFinishWithResult:(int)result error:(id)error;
-(void)_cancelPublish;
-(void)_showAlertForInterruptionDuringRemaking;
-(void)_cancelRemaking;
-(void)_cleanUpPendingRemakingAndPublishIfNeeded;
-(BOOL)visitViewControllersWithBlock:(id)block;
-(void)dismissPublishingViewControllers;
-(void)_setComposeParentViewController:(id)controller;
-(void)_dismissMailComposeController;
-(void)_autosaveMailComposition;
-(void)_discardTrimmedFile;
-(void)_showMailComposeSheetForAutosavedMessageWithIdentifier:(id)identifier;
-(BOOL)isComposingEmail;
-(BOOL)isComposeSheetReady;
-(void)composeMailForVideo:(id)video trimmedFilePath:(id)path parentViewController:(id)controller;
-(id)composeMailForPhotoData:(id)photoData attachmentName:(id)name withMimeType:(id)mimeType extension:(id)extension parentViewController:(id)controller;
-(void)presentMailComposeController:(id)controller parentViewController:(id)controller2;
-(id)newMailComposeViewControllerWithPhotoData:(id)photoData attachmentName:(id)name withMimeType:(id)mimeType extension:(id)extension identifier:(id*)identifier;
-(void)composeMailForPhotos:(id)photos parentViewController:(id)controller;
-(void)setStatusBarStyleIfNecessary:(int)necessary;
-(void)publishingAgentDidEndRemaking:(id)publishingAgent didSucceed:(BOOL)succeed;
-(void)publishingAgentDidStartRemaking:(id)publishingAgent;
-(id)publishingAgentForMediaItem:(id)mediaItem;
-(void)publishingAgentDidEndPublishing:(id)publishingAgent error:(id)error;
-(void)cleanStateAfterPublishForAgent:(id)agent;
-(void)_discardMediaFilesForPublishingAgentsIfNeeded;
-(void)publishingAgentDidBeginPublishing:(id)publishingAgent;
-(void)addPublishingAgent:(id)agent;
-(void)publishingAgentCancelButtonClicked:(id)clicked;
-(void)publishingAgentDoneButtonClicked:(id)clicked;
-(void)publishingAgentWillBeDisplayed:(id)publishingAgent;
-(void)setEnableNetworkingFlags:(BOOL)flags;
-(void)_clearPublishingSheetResponders;
-(void)handleImportCompleteAlertResponse:(CFUserNotificationRef)response flags:(unsigned long)flags;
-(void)importDeviceRemoved:(id)removed;
-(void)importDeviceAdded:(id)added;
-(void)_imageCaptureDeviceCheckTimerFired:(id)fired;
-(void)_popImportDeviceQueue;
-(void)cleanupImageCaptureDevices;
-(void)startupImageCapture;
-(id)imageDataProvider;
-(void)_updateSuspensionSettings;
-(BOOL)applicationSuspend:(GSEventRef)suspend settings:(id)settings;
-(void)applicationDidEnterBackground:(id)application;
-(void)_applicationDidResignActive:(id)_application;
-(void)_applicationDidBecomeActive:(id)_application;
-(void)applicationWillEnterForeground:(id)application;
-(void)photosPreferencesChanged;
-(void)_mailAccountsChanged;
-(id)_currentConfiguration;
-(BOOL)useCompatibleSuspensionAnimation;
-(void)_finishExtendedTest;
-(id)_extendLaunchTest;
-(void)applicationDidFinishLaunching:(id)application;
-(void)sharedFinishedLaunching:(BOOL)launching;
-(id)rootViewController;
-(id)mainWindow;
-(void)_setImageOptions;
-(void)setDelaySuspend:(BOOL)suspend;
-(void)setIsRemaking:(BOOL)remaking;
-(BOOL)isCameraApp;
-(void)dealloc;
@end
