/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PhotosApplication.h"
#import "Camera-Structs.h"

@class PLCameraPageController;

__attribute__((visibility("hidden")))
@interface CameraApplication : PhotosApplication {
	PLCameraPageController* _cameraPageController;
}
-(void)_updateSharedPhotoStreamProgressDisplay;
-(void)_updatePhotoStreamProgressDisplay;
-(BOOL)shouldAllowSBAlertSupression;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)sharedFinishedLaunching:(BOOL)launching;
-(void)prepareForDefaultImageSnapshot;
-(void)applicationOpenToShortCut:(id)shortCut;
-(BOOL)applicationSuspend:(GSEventRef)suspend settings:(id)settings;
-(void)setupAppUI:(BOOL)ui;
-(BOOL)isShowingAppUI;
-(void)applicationWillBeginSuspendAnimation:(id)application;
-(BOOL)isCameraApp;
-(void)takePictureTestFinished;
-(void)runTakeHDRPictureTest:(id)test;
-(void)runTakePictureTest:(id)test;
-(void)_runTakeGenericPictureTest:(id)test withHDREnabled:(BOOL)hdrenabled;
-(void)startSwitchTest;
-(void)_previewStarted;
-(void)finishedTest:(id)test extraResults:(id)results;
-(BOOL)runTest:(id)test options:(id)options;
@end
