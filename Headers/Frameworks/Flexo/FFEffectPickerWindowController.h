//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class FFAnchoredCollection, FFEffectPickerView, LKTextField;

__attribute__((visibility("hidden")))
@interface FFEffectPickerWindowController : NSWindowController
{
    BOOL _isVideo;
    FFEffectPickerView *_effectPickerView;
    FFAnchoredCollection *_projectFilterCollection;
    BOOL _projectFilterMode;
    LKTextField *_projectFilterTextField;
}

@property(nonatomic) LKTextField *projectFilterTextField; // @synthesize projectFilterTextField=_projectFilterTextField;
@property(nonatomic) BOOL projectFilterMode; // @synthesize projectFilterMode=_projectFilterMode;
@property(retain, nonatomic) FFAnchoredCollection *projectFilterCollection; // @synthesize projectFilterCollection=_projectFilterCollection;
- (void)selectedItemsChanged:(id)arg1;
- (void)cancel:(id)arg1;
- (void)windowDidLoad;
- (void)dealloc;
- (id)initForVideo:(BOOL)arg1;

@end

