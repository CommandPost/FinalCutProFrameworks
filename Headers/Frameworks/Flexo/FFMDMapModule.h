//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFMDModule.h>

@class FFEffectLibraryCollectionView, LKImageView, NSDictionary, NSScrollView;

@interface FFMDMapModule : FFMDModule
{
    NSScrollView *_scrollView;
    FFEffectLibraryCollectionView *_effectCollectionView;
    LKImageView *_headerIcon;
    NSDictionary *_sortOrder;
}

- (void)firstResponderChanged:(id)arg1;
- (void)updateFilter:(id)arg1;
- (struct CGPoint)startPointConvertedToView;
- (id)dragImage;
- (BOOL)writeDataForEditAction:(id)arg1 toPasteboardWithName:(id)arg2;
- (id)dataForEditAction:(id)arg1;
- (BOOL)canSourceDataForEditAction:(id)arg1;
- (void)viewWasInstalled;
- (id)mapsArray;
- (void)dealloc;
- (id)init;

@end

