//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFArrangedItemsModule.h>

@class FFEffectLibraryCollectionView, LKScrollView, NSString;

__attribute__((visibility("hidden")))
@interface FFEffectLibraryModule : FFArrangedItemsModule
{
    FFEffectLibraryCollectionView *_effectCollectionView;
    LKScrollView *_scrollView;
    NSString *_searchString;
    BOOL _active;
}

@property(retain) NSString *searchString; // @synthesize searchString=_searchString;
@property(readonly) FFEffectLibraryCollectionView *effectCollectionView; // @synthesize effectCollectionView=_effectCollectionView;
- (void)viewWillBeRemoved;
- (void)viewWasInstalled;
- (void)firstResponderChanged:(id)arg1;
- (void)writeSelectionToPasteboard:(id)arg1;
- (id)targetModules;
- (void)redrawCollectionView;
- (void)updateFilter;
- (void)module:(id)arg1 didDoubleClickWithEffect:(id)arg2;
- (void)module:(id)arg1 didDoubleClickWithEffectID:(id)arg2;
- (void)didChangeArrangedItems:(id)arg1;
- (void)syncToEffectFolder:(id)arg1;
- (void)setArrangedItems:(id)arg1;
- (void)addScrollViewDescription;
@property(nonatomic) id <FFEffectLibraryModuleDelegate> delegate;

@end

