/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PLAlbumChangeObserver.h"
#import "Camera-Structs.h"
#import "UIGestureRecognizerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class PLLibraryImageDataProvider, NSArray, UIImage, PLExpandableImageView, UINavigationItem, UINavigationButton, PLAirTunesButton, UIPinchGestureRecognizer, UIBarButtonItem;

__attribute__((visibility("hidden")))
@interface WPhotoViewController : XXUnknownSuperclass <UIGestureRecognizerDelegate, PLAlbumChangeObserver> {
	PLExpandableImageView* _imageView;
	unsigned _originalImageIndex;
	unsigned _currentImageIndex;
	UIImage* _originalImage;
	UIImage* _fullScreenImage;
	UINavigationItem* _customNavigationItem;
	NSArray* _navigationButtonItems;
	NSArray* _wallpaperItems;
	UINavigationButton* _playPauseButton;
	UIBarButtonItem* _modalDoneButtonItem;
	UIBarButtonItem* _garbageButtonItem;
	PLAirTunesButton* _airTunesButton;
	unsigned _didFinishSuckingToTrash : 1;
	UIPinchGestureRecognizer* _pinchGesture;
	int _imageViewPinchState;
	int _previousFilter;
	PLLibraryImageDataProvider* _imageDataProvider;
	int _previousToolbarMode;
}
-(int)interfaceIdiom;
-(BOOL)_isAirPlayEnabled;
-(id)navigationItem;
-(void)libraryDidChange:(id)library;
-(void)albumDidChange:(id)album;
-(void)didLoadFullScreenImage:(id)image forPhotoAtIndex:(unsigned)index;
-(void)didMoveToPhotoAtIndex:(unsigned)index;
-(id)overlayView;
-(void)_reclaimPhotoScrubber:(id)scrubber;
-(void)_reclaimImageView:(id)view;
-(void)_setImageView:(id)view;
-(BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;
-(BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizer;
-(void)_pinch:(id)pinch;
-(void)beginPoppingAnimated:(BOOL)animated completionHandler:(id)handler;
-(void)interactionCancelledWithOverlay:(id)overlay;
-(void)interactionCancelledWithView:(id)view;
-(void)interactiveNavigationControllerDidFinishWithOverlayView:(id)interactiveNavigationController;
-(void)viewDidDisappearInteractivelyWithView:(id)view;
-(void)viewDidAppearInteractivelyWithView:(id)view;
-(void)viewWillAppearInteractivelyWithView:(id)view;
-(void)_fadeToClearAnimation:(id)clearAnimation finished:(id)finished;
-(void)_fadeToClearIfNeeded;
-(void)expandableViewDidCancelCollapsing:(id)expandableView;
-(void)expandableViewDidCompleteCollapsing:(id)expandableView;
-(void)expandableViewDidBeginCollapsing:(id)expandableView;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(id)_trashCanCloseAnimationItems;
-(id)_trashCanOpenAnimationItems;
-(id)_trashImageViewForAnimation;
-(void)_resetAfterDelete;
-(void)animationDidStop:(id)animation finished:(BOOL)finished;
-(void)_performCloseTrashAnimation;
-(void)_performOpenTrashAnimation;
-(void)_setScrollViewInteractionEnabled:(BOOL)enabled;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)endSettingWallpaper;
-(void)startSettingWallpaper;
-(void)_prepareForCollapse;
-(void)_prepareForContracting:(id)contracting;
-(void)toggleVideoPlay:(id)play;
-(void)collapse:(id)collapse;
-(id)airTunesButton;
-(void)updateAirTunesButton;
-(void)removeAirTunesButton;
-(void)addAirTunesButton;
-(BOOL)setNextSlideshowState:(int)state;
-(int)_toolbarMode;
-(float)_calculateWidthForVideoScrubber;
-(float)videoViewScrubberWidth:(id)width;
-(void)_updateVideoScrubberWidth;
-(void)_updatePlayPauseButton;
-(void)_updateNavigationBar;
-(void)showFullScreenPhotoEditTools;
-(id)_wallpaperToolbarItems;
-(id)playPauseButton;
-(id)playSlideshowItem;
-(id)trashItem;
-(id)actionItem;
-(id)editItem;
-(id)_navigationButtonItemsForMode:(int)mode;
-(id)_newRightCustomViewForNavigationItem;
-(id)rootNavigationController;
-(Class)albumPickerControllerClass;
-(id)_navigationBar;
-(id)_visibleViewController;
-(id)_navigationController;
-(void)_removeGestureRecognizers;
-(void)loadView;
-(void)setAlbum:(NSObject*)album;
-(void)dealloc;
-(id)initWithAlbum:(NSObject*)album imageView:(id)view atImageIndex:(unsigned)imageIndex imageDataProvider:(id)provider modalDoneButtonItem:(id)item;
-(id)initWithAlbum:(NSObject*)album imageView:(id)view imageDataProvider:(id)provider;
@end

