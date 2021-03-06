/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PLAssetContainer.h"

@class NSDate, NSString, NSNumber, NSOrderedSet, NSDictionary;

@protocol PLCloudSharedContainer <PLAssetContainer>
@property(readonly, assign, nonatomic) NSDate* cloudFirstRecentBatchDate;
@property(readonly, assign, nonatomic) NSOrderedSet* cloudAlbumSubscriberRecords;
@property(readonly, assign, nonatomic) NSString* localizedSharedWithLabel;
@property(readonly, assign) int cloudRelationshipStateLocalValue;
@property(readonly, assign) int cloudRelationshipStateValue;
@property(retain, nonatomic) NSString* cloudPersonID;
@property(retain, nonatomic) NSDate* cloudLastInterestingChangeDate;
@property(retain, nonatomic) NSNumber* cloudPublicURLEnabledLocal;
@property(retain, nonatomic) NSNumber* cloudPublicURLEnabled;
@property(assign) unsigned unseenAssetsCountIntegerValue;
@property(retain, nonatomic) NSNumber* unseenAssetsCount;
@property(retain, nonatomic) NSOrderedSet* invitationRecords;
@property(retain, nonatomic) NSString* publicURL;
@property(retain, nonatomic) NSString* cloudOwnerEmail;
@property(retain, nonatomic) NSString* cloudOwnerLastName;
@property(retain, nonatomic) NSString* cloudOwnerFirstName;
@property(retain, nonatomic) NSDictionary* cloudMetadata;
@property(retain, nonatomic) NSString* cloudGUID;
-(void)userDeleteSubscriberRecord:(id)record;
-(void)getUnseenStartMarkerIndex:(unsigned*)index count:(unsigned*)count showsProgress:(BOOL*)progress;
-(void)updateCloudLastInterestingChangeDateWithDate:(id)date;
-(id)cloudOwnerDisplayNameIncludingEmail:(BOOL)email allowsEmail:(BOOL)email2;
-(id)localizedSharedByLabelAllowsEmail:(BOOL)email;
@end

