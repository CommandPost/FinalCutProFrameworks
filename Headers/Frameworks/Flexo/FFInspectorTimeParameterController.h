//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFInspectorParameterController.h>

@class LKSegmentedScrubber, NSString, NSView;

__attribute__((visibility("hidden")))
@interface FFInspectorTimeParameterController : FFInspectorParameterController
{
    NSView *_view;
    NSString *_stringValue;
    long long _segmentedScrubberStyle;
    id _target;
    SEL _action;
    LKSegmentedScrubber *_scrubber;
    struct {
        unsigned int editable:1;
    } _ispc_flags;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)view;
- (void)setPropertiesForControl:(id)arg1;
- (void)unbindControl:(id)arg1;
- (void)bindControl:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (void)setControlValue:(id)arg1 forKey:(id)arg2;
- (void)setControlFormatter:(id)arg1;
- (void)setObjectValue:(id)arg1;
- (void)setControlSize:(unsigned long long)arg1;
- (SEL)action;
- (void)setAction:(SEL)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
@property(getter=isEditable) BOOL editable; // @dynamic editable;
@property long long segmentedScrubberStyle; // @dynamic segmentedScrubberStyle;
@property(copy, nonatomic) NSString *stringValue; // @dynamic stringValue;
- (void)dealloc;

@end
