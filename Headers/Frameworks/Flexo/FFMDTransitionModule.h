//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFMDModule.h>

@class FFAnchoredSequence, FFEffectLibraryCollectionView, LKImageView, NSDictionary, NSScrollView;

@interface FFMDTransitionModule : FFMDModule
{
    NSScrollView *_scrollView;
    FFEffectLibraryCollectionView *_effectCollectionView;
    LKImageView *_headerIcon;
    id _skimmingDelegate;
    FFAnchoredSequence *_currentSequence;
    NSDictionary *_sortOrder;
}

@property(retain, nonatomic) FFAnchoredSequence *currentSequence; // @synthesize currentSequence=_currentSequence;
- (BOOL)writeDataForEditAction:(id)arg1 toPasteboardWithName:(id)arg2;
- (id)dataForEditAction:(id)arg1;
- (BOOL)canSourceDataForEditAction:(id)arg1;
- (void)firstResponderChanged:(id)arg1;
- (void)updateFilter:(id)arg1;
- (void)notificationHandler:(id)arg1;
- (void)removeNotifications;
- (void)installNotifications;
- (void)reloadData:(id)arg1;
- (void)viewWasInstalled;
- (id)transitionsArray;
- (void)dealloc;
- (id)init;

@end
