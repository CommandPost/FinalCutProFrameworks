//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFCurveEditorAssets.h>

__attribute__((visibility("hidden")))
@interface FFCurveEditorCurveAssets : FFCurveEditorAssets
{
    BOOL _drawOutline;
}

@property BOOL drawOutline; // @synthesize drawOutline=_drawOutline;
- (void)applyOutlineImage:(id)arg1 toImage:(id)arg2;
- (void)applyOutlineWithRoleColorScheme:(id)arg1;
- (void)setRoleColorScheme:(id)arg1;
- (id)initWithRoleColorScheme:(id)arg1 drawOutline:(BOOL)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end
