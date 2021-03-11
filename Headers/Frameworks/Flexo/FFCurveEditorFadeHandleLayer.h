//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFImageLayer.h>

@class FFRoleColorImageTinter, NSColor, NSImage;

__attribute__((visibility("hidden")))
@interface FFCurveEditorFadeHandleLayer : FFImageLayer
{
    FFRoleColorImageTinter *_tinter;
    NSImage *_tintedNormal;
    NSImage *_tintedRollover;
    BOOL _simple;
    BOOL _focused;
    NSColor *_tintColor;
    long long _state;
    long long _value;
}

@property(nonatomic) long long value; // @synthesize value=_value;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) BOOL focused; // @synthesize focused=_focused;
@property(copy, nonatomic) NSColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) BOOL simple; // @synthesize simple=_simple;
- (void)_updateImage;
- (void)_generateImageNameTable;
- (void)_setTintColorImages:(id)arg1 tintedRollover:(id)arg2;
- (void)dealloc;
- (id)init;

@end

