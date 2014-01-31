/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol PLExpandableViewDelegate <NSObject>
@optional
-(void)expandableView:(id)view expansionFractionChanged:(float)changed;
-(void)expandableViewDidCancelCollapsing:(id)expandableView;
-(void)expandableView:(id)view willCancelCollapsingWithDuration:(double)duration;
-(void)expandableViewDidCompleteCollapsing:(id)expandableView;
-(void)expandableView:(id)view willCompleteCollapsingWithDuration:(double)duration;
-(void)expandableViewDidBeginCollapsing:(id)expandableView;
-(void)expandableViewDidCancelExpanding:(id)expandableView;
-(void)expandableView:(id)view willCancelExpandingWithDuration:(double)duration;
-(void)expandableViewDidCompleteExpanding:(id)expandableView;
-(void)expandableView:(id)view willCompleteExpandingWithDuration:(double)duration;
-(void)expandableViewWillBeginExpanding:(id)expandableView;
@end

