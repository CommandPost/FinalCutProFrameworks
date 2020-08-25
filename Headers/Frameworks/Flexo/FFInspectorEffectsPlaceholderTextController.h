//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFInspectorController.h>

#import "FFInspectorEffectsDragging.h"

@class FFInspectorEffectsDraggingContext, NSString;

__attribute__((visibility("hidden")))
@interface FFInspectorEffectsPlaceholderTextController : FFInspectorController <FFInspectorEffectsDragging>
{
    id <FFInspectorEffectsRootDelegate> _effectsRootDelegate;
    FFInspectorEffectsDraggingContext *_draggingContext;
    NSString *_placeholderText;
}

- (void)setDraggingContext:(id)arg1;
- (id)draggingContext;
- (id)draggingOwner;
- (double)viewHeight;
- (void)loadView;
- (void)dealloc;
- (id)initWithPlaceholderText:(id)arg1 effectsRootDelegate:(id)arg2 context:(id)arg3;

@end

