/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UIAlertViewDelegate.h"
#import "Camera-Structs.h"
#import "PLStackViewImageChangeObserver.h"
#import "PhotoScrubberDataSource.h"
#import "WConfigurableNavigationDisplayOptions.h"
#import "PLStackViewDelegate.h"
#import "PLStackViewDataSource.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIAlertView, PLPhotosPickerSession, UIView, NSString, UILabel, PLSyncProgressView, WNestableStackView, PLStackView, PLPhotoScrubber, PLEmptyAlbumView, PLLibraryImageDataProvider, NSMutableSet;

__attribute__((visibility("hidden")))
@interface WLibraryViewController : XXUnknownSuperclass <UIAlertViewDelegate, PLStackViewImageChangeObserver, PLStackViewDataSource, PLStackViewDelegate, PhotoScrubberDataSource, WConfigurableNavigationDisplayOptions> {
	PLStackView* _libraryView;
	PLPhotoScrubber* _dateScrubber;
	UILabel* _dateHUD;
	WNestableStackView* _displayedStackView;
	PLSyncProgressView* _syncProgressView;
	PLPhotosPickerSession* _activePhotosPickerSession;
	UIAlertView* _invitationConfirmationAlert;
	UIView* _customTitleView;
	NSString* _customTitle;
	PLLibraryImageDataProvider* _imageDataProvider;
	struct {
		unsigned pickingAlbum : 1;
		unsigned firstAppearance : 1;
		unsigned allowEmptyViewForAlbumView : 1;
		unsigned reserved : 29;
	} _libraryFlags;
	PLEmptyAlbumView* _emptyAlbumView;
	NSMutableSet* preheatedUUIDs;
}
@property(copy) NSString* customTitle;
@property(retain) UIView* customTitleView;
@property(retain, nonatomic) NSMutableSet* preheatedUUIDs;
@property(assign, getter=isPickingAlbum) BOOL pickingAlbum;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(BOOL)stackViewShouldProcessTap:(id)stackView;
-(void)stackViewWillBeginDragging:(id)stackView;
-(void)stackViewSelectionDidChange:(id)stackViewSelection added:(id)added removed:(id)removed;
-(int)stackView:(id)view shouldEnableItemViewAtIndex:(int)index;
-(BOOL)stackView:(id)view shouldSelectItemAtIndex:(unsigned)index;
-(void)expandableView:(id)view willCancelExpandingWithDuration:(double)duration;
-(void)expandableViewWillBeginExpanding:(id)expandableView;
-(id)expandedControllerForExpandableView:(id)expandableView;
-(id)photoScrubber:(id)scrubber loadImageSynchronously:(BOOL)synchronously atIndex:(int)index forLoupe:(BOOL)loupe;
-(int)numPhotosInAlbumForPhotoScrubber:(id)photoScrubber;
-(id)libraryView;
-(id)_libraryView:(id)view itemViewAtIndex:(int)index loadImagesSynchronously:(BOOL)synchronously;
-(void)stackViewItemMoveDidComplete:(id)stackViewItemMove;
-(void)stackView:(id)view moveItemAtIndex:(unsigned)index toIndex:(unsigned)index3;
-(void)stackView:(id)view renameItemAtIndex:(unsigned)index toName:(id)name;
-(void)stackView:(id)view removeItemAtIndex:(unsigned)index;
-(int)stackView:(id)view editingOptionsForItemAtIndex:(unsigned)index;
-(BOOL)stackView:(id)view showUnreadIndicatorForItemAtIndex:(int)index;
-(id)stackView:(id)view subtitleForItemAtIndex:(int)index;
-(id)stackView:(id)view titleForItemAtIndex:(int)index;
-(id)stackView:(id)view collapsedIndexesForCount:(unsigned)count;
-(void)stackView:(id)view saveStackedImage:(id)image options:(id)options;
-(id)stackedImageForStackView:(id)stackView options:(id*)options;
-(int)stackViewPosterItemIndex:(id)index;
-(void)stackView:(id)view preheatImagesInRange:(NSRange)range;
-(id)stackView:(id)view badgeImageForImageAtIndex:(int)index;
-(id)stackView:(id)view itemViewAtIndex:(int)index loadImagesSynchronously:(BOOL)synchronously;
-(int)stackViewItemCount:(id)count;
-(NSObject*)_albumForStackView:(id)stackView imageIndex:(int)index photo:(id*)photo;
-(CGRect)minimumStackViewFrame;
-(id)visibleStackAtIndex:(int)index;
-(void)_dateScrubberDragEnded:(id)ended;
-(void)_dateScrubberChanged:(id)changed;
-(void)updateInterfaceForHasContentChange;
-(id)subtitleForAlbum:(NSObject*)album;
-(void)setSyncProgressVisible:(BOOL)visible;
-(id)syncProgressView;
-(id)visibleCellViewForAlbumAtIndex:(unsigned)index;
-(BOOL)albumIsDisplayedEnabled:(NSObject*)enabled;
-(void)updateNavigationItemButtons;
-(BOOL)updateInterfaceForDeletedAlbumIndexes:(id)deletedAlbumIndexes addedIndexes:(id)indexes changedIndexes:(id)indexes3 isReordering:(BOOL)reordering needsFullReload:(BOOL)reload;
-(void)scrollToAlbumAtIndex:(unsigned)index animated:(BOOL)animated select:(BOOL)select;
-(void)dismissSharedStreamOptionsViewController;
-(void)presentSharedStreamOptionsViewController:(id)controller;
-(void)showInvitationConfirmationForAlbum:(id)album;
-(void)cancelAddPhotosSessionAnimated:(BOOL)animated;
-(void)beginAddPhotosSessionForAlbum:(id)album didShowHandler:(id)handler completionHandler:(id)handler3;
-(void)navigateToRevealAlbum:(NSObject*)revealAlbum initiallyHidden:(BOOL)hidden animated:(BOOL)animated;
-(void)navigateToAlbum:(id)album animated:(BOOL)animated completion:(id)completion;
-(void)setHiddenAlbum:(NSObject*)album animated:(BOOL)animated;
-(int)interfaceIdiom;
-(void)albumDidChange:(id)album;
-(void)stackViewImageDidChange:(id)stackViewImage;
-(NSObject*)_datasourceAlbumForStackView:(id)stackView;
-(void)setAlbumList:(NSObject*)list contentMode:(int)mode;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)_getRotationContentSettings:(XXStruct_3uUjXA*)settings;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
-(void)interactionCancelledWithView:(id)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidAppearInteractivelyWithView:(id)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillAppearInteractivelyWithView:(id)view;
-(BOOL)_shouldSaveRestoreScrollPosition;
-(void)_updateInterfaceForBrowserMode;
-(void)setCurrentPickerSession:(id)session;
-(void)pulseItemAtIndex:(unsigned)index completion:(id)completion;
-(void)updateContractedFrameOfStackView:(id)stackView;
-(void)_updateLayoutForContentMode:(int)contentMode;
-(void)_reclaimStack:(id)stack;
-(void)viewDidUnload;
-(void)viewDidLoad;
-(void)loadView;
-(NSObject*)_displayedAlbum;
-(void)setViewScrollEnabled:(BOOL)enabled;
-(int)_metricsAlbumKindForContentMode:(int)contentMode;
-(id)stackedImageCache;
-(void)didReceiveMemoryWarning;
-(void)dealloc;
-(id)initWithImageDataProvider:(id)imageDataProvider;
@end

